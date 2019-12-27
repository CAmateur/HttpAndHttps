#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<WinSock2.h>
#include<vector>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include"MyHttpException.h"

#pragma comment(lib,"libeay32.lib")
#pragma comment(lib,"ssleay32.lib")
#pragma comment(lib,"ws2_32.lib")


class MyHttpBase
{
public:
	MyHttpBase(const std::string Adder, const int Port);
	virtual ~MyHttpBase();
	virtual void Close() = 0;
	virtual std::string PageAccess(const std::string PageAddr, const std::string AccessMethod, const std::string Data = "") = 0;
	virtual std::string GetHtml() = 0;
	std::string GetCookie(const std::string &str, const std::string TailSign);//������ҳ��ȡCookie
	std::string UtfToGbk(const char* utf8);
	std::string SetDatePacked(const std::string pageAddr,const std::string accessMethodm, const std::string data);
	bool Init();
	void SetWaitTime(const int waittime);
	void SetAccept(const std::string accept);//�ɽ��ܵ���Ӧ��������
	void SetAccept_Charset(const std::string accept_Charset);//�ɽ��ܵ��ַ��� 
	void SetAccept_Encoding(const std::string accept_Encoding);//�ɽ��ܵ���Ӧ���ݵı��뷽ʽ
	void SetAccept_Language(const std::string accept_Language);//�ɽ��ܵ���Ӧ���������б�
	void SetAccept_Datetime(const std::string accept_Datetime);//�ɽ��ܵİ���ʱ������ʾ����Ӧ���ݰ汾 
	void SetAuthorization(const std::string authorization);//���ڱ�ʾHTTPЭ������Ҫ��֤��Դ����֤��Ϣ 
	void SetCache_Control(const std::string cache_Control);//����ָ����ǰ������/�ظ��еģ��Ƿ�ʹ�û�����ơ�
	void SetConnection(const std::string connection);//�ͻ��ˣ����������Ҫ����ʹ�õ��������� 
	void SetCookie(const std::string cookie);
	void SetContent_MD5(const std::string content_MD5);//����������ݵĶ����� MD5 ɢ��ֵ������ǩ�������� Base64 ����Ľ�� 
	void SetContent_Type(const std::string content_Type);//�������MIME���� ������POST��PUT�����У�
	void SetDate(const std::string date);//���͸���Ϣ�����ں�ʱ�䣨��RFC 7231�ж����"HTTP����"��ʽ�����ͣ� 
	void SetExpect(const std::string expect);//��ʾ�ͻ���Ҫ������������ض�����Ϊ 
	void SetFrom(const std::string from);//�����������û����ʼ���ַ 
	void SetHost(const std::string host);//��ʾ�������������Լ��������������Ķ˿ںš����������Ķ˿��Ƕ�Ӧ�ķ���ı�׼�˿ڣ�80������˿ںſ���ʡ�ԡ� 
	void SetIf_Match(const std::string if_Match);//�����ͻ����ṩ��ʵ����������϶�Ӧ��ʵ����ƥ��ʱ���Ž��ж�Ӧ�Ĳ�������Ҫ������ PUT �����ķ����У��������û��ϴθ���ĳ����Դ�󣬸���Դδ���޸ĵ�����£��Ÿ��¸���Դ��
	void SetIf_Modified_Since(const std::string if_Modified_Since);//�����ڶ�Ӧ����Դδ���޸ĵ�����·���304δ�޸� 
	void SetIf_None_Match(const std::string if_None_Match);//�����ڶ�Ӧ������δ���޸ĵ�����·���304δ�޸ģ� 304 Not Modified �����ο� ���ı�����Э�� ��ʵ���� 
	void SetIf_Range(const std::string if_Range);//�����ʵ��δ���޸Ĺ������򷵻���ȱ�ٵ���һ���������֡����򣬷��������µ�ʵ��
	void SetIf_Unmodified_Since(const std::string if_Unmodified_Since);//������ʵ����ĳ���ض�ʱ������δ���޸ĵ�����£��ŷ��ͻ�Ӧ��
	void SetMax_Forwards(const std::string max_Forwards);//���Ƹ���Ϣ�ɱ���������ת���Ĵ�����
	void SetOrigin(const std::string origin);//����һ����Կ�����Դ���������
	void SetPragma(const std::string pragma);//������ʵ����أ���Щ�ֶο���������/��Ӧ���е��κ�ʱ�����
	void SetProxy_Authorization(const std::string proxy_Authorization);//��������������֤����֤��Ϣ
	void SetRange(const std::string range);//��ʾ����ĳ��ʵ���һ���֣��ֽ�ƫ����0��ʼ
	void SetReferer(const std::string referer);//��ʾ����������ʵ�ǰһ��ҳ�棬������Ϊ��֮ǰ����ҳ������ӽ�����������˵�ǰҳ�档Referer��ʵ��Referrer������ʣ���RFC������׼ʱ��ƴ���ˣ�����Ҳ�ͽ���ʹ�ʹ��Referer��
	void SetTE(const std::string tE);//�����Ԥ�ڽ��ܵĴ���ʱ�ı��뷽ʽ����ʹ�û�ӦЭ��ͷTransfer-Encoding�е�ֵ��������ʹ��"trailers"��ʾ���ݴ���ʱ�ķֿ鷽ʽ��������ʾ�����ϣ�������һ����СΪ0�Ŀ�֮�󻹽��յ�һЩ������ֶ�
	void SetUser_Agent(const std::string user_Agent);//���������ݱ�ʶ�ַ��� 
	void SetUpgrade(const std::string upgrade);//Ҫ�������������һ���߰汾Э��
	void SetVia(const std::string via);//���߷��������������������Щ��������
	void SetWarning(const std::string warning);//һ��һ���Եľ��棬��ʾ��ʵ���������п��ܴ��ڴ���
	void SetServerAddr(const std::string serverAddr);

protected:
	std::string Accept;//�ɽ��ܵ���Ӧ��������
	std::string Accept_Charset;//�ɽ��ܵ��ַ��� 
	std::string Accept_Encoding;//�ɽ��ܵ���Ӧ���ݵı��뷽ʽ
	std::string Accept_Language;//�ɽ��ܵ���Ӧ���������б�
	std::string Accept_Datetime;//�ɽ��ܵİ���ʱ������ʾ����Ӧ���ݰ汾 
	std::string Authorization;//���ڱ�ʾHTTPЭ������Ҫ��֤��Դ����֤��Ϣ 
	std::string Cache_Control;//����ָ����ǰ������/�ظ��еģ��Ƿ�ʹ�û�����ơ�
	std::string Connection;//�ͻ��ˣ����������Ҫ����ʹ�õ��������� 
	std::string Cookie;//
	std::string Content_MD5;//����������ݵĶ����� MD5 ɢ��ֵ������ǩ�������� Base64 ����Ľ�� 
	std::string Content_Type;//�������MIME���� ������POST��PUT�����У�
	std::string Date;//���͸���Ϣ�����ں�ʱ�䣨��RFC 7231�ж����"HTTP����"��ʽ�����ͣ� 
	std::string Expect;//��ʾ�ͻ���Ҫ������������ض�����Ϊ 
	std::string From;//�����������û����ʼ���ַ 
	std::string Host;//��ʾ�������������Լ��������������Ķ˿ںš����������Ķ˿��Ƕ�Ӧ�ķ���ı�׼�˿ڣ�80������˿ںſ���ʡ�ԡ� 
	std::string If_Match;//�����ͻ����ṩ��ʵ����������϶�Ӧ��ʵ����ƥ��ʱ���Ž��ж�Ӧ�Ĳ�������Ҫ������ PUT �����ķ����У��������û��ϴθ���ĳ����Դ�󣬸���Դδ���޸ĵ�����£��Ÿ��¸���Դ��
	std::string If_Modified_Since;//�����ڶ�Ӧ����Դδ���޸ĵ�����·���304δ�޸� 
	std::string If_None_Match;//�����ڶ�Ӧ������δ���޸ĵ�����·���304δ�޸ģ� 304 Not Modified �����ο� ���ı�����Э�� ��ʵ���� 
	std::string If_Range;//�����ʵ��δ���޸Ĺ������򷵻���ȱ�ٵ���һ���������֡����򣬷��������µ�ʵ��
	std::string If_Unmodified_Since;//������ʵ����ĳ���ض�ʱ������δ���޸ĵ�����£��ŷ��ͻ�Ӧ��
	std::string Max_Forwards;//���Ƹ���Ϣ�ɱ���������ת���Ĵ�����
	std::string Origin;//����һ����Կ�����Դ���������
	std::string Pragma;//������ʵ����أ���Щ�ֶο���������/��Ӧ���е��κ�ʱ�����
	std::string Proxy_Authorization;//��������������֤����֤��Ϣ
	std::string Range;//��ʾ����ĳ��ʵ���һ���֣��ֽ�ƫ����0��ʼ
	std::string Referer;//��ʾ����������ʵ�ǰһ��ҳ�棬������Ϊ��֮ǰ����ҳ������ӽ�����������˵�ǰҳ�档Referer��ʵ��Referrer������ʣ���RFC������׼ʱ��ƴ���ˣ�����Ҳ�ͽ���ʹ�ʹ��Referer��
	std::string TE;//�����Ԥ�ڽ��ܵĴ���ʱ�ı��뷽ʽ����ʹ�û�ӦЭ��ͷTransfer-Encoding�е�ֵ��������ʹ��"trailers"��ʾ���ݴ���ʱ�ķֿ鷽ʽ��������ʾ�����ϣ�������һ����СΪ0�Ŀ�֮�󻹽��յ�һЩ������ֶ�
	std::string User_Agent;//���������ݱ�ʶ�ַ��� 
	std::string Upgrade;//Ҫ�������������һ���߰汾Э��
	std::string Via;//���߷��������������������Щ��������
	std::string Warning;//һ��һ���Եľ��棬��ʾ��ʵ���������п��ܴ��ڴ���
	std::string ServerAddr;//��������ַ
	std::string html;
	std::string DataContent;
	char buf[1024];
	int ServerPort;//�������˿�
	int WaitTime;
	int ret;
	int begin;
	SOCKET Socket;//�Լ��������׽��ֿ������Ϊ�Լ��Ķ˿�
};


class Http : public MyHttpBase
{
public:
	Http(const std::string Adder, const int AdderPort = 80);
	virtual ~Http();
	virtual void Close() override;
	virtual std::string PageAccess(const std::string PageAddr, const std::string AccessMethod, const std::string Data = "")override;
	virtual std::string GetHtml()override;
};


class Https : public MyHttpBase
{
public:
	Https(const std::string Adder, const int AdderPort = 443);
	virtual ~Https();
	virtual void Close() override;
	virtual std::string PageAccess(const std::string PageAddr, const std::string AccessMethod, const std::string Data = "")override;
	virtual std::string GetHtml()override;
protected:
	const SSL_METHOD *meth;
	SSL_CTX* ctx;
	SSL*ssl;
};