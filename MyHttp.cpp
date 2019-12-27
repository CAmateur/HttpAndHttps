#include"MyHttp.h"
#include "MyHttpException.h"

void MyHttpBase::SetWaitTime(const int waittime) { this->WaitTime = waittime; }
void MyHttpBase::SetAccept(const std::string accept) { this->Accept = accept; }
void MyHttpBase::SetAccept_Charset(const std::string accept_Charset) { this->Accept_Charset = accept_Charset; }//�ɽ��ܵ��ַ��� 
void MyHttpBase::SetAccept_Encoding(const std::string accept_Encoding) { this->Accept_Encoding = accept_Encoding; }//�ɽ��ܵ���Ӧ���ݵı��뷽ʽ
void MyHttpBase::SetAccept_Language(const std::string accept_Language) { this->Accept_Language = accept_Language; }//�ɽ��ܵ���Ӧ���������б�
void MyHttpBase::SetAccept_Datetime(const std::string accept_Datetime) { this->Accept_Datetime = accept_Datetime; }//�ɽ��ܵİ���ʱ������ʾ����Ӧ���ݰ汾 
void MyHttpBase::SetAuthorization(const std::string authorization) { this->Authorization = authorization; }//���ڱ�ʾHTTPЭ������Ҫ��֤��Դ����֤��Ϣ 
void MyHttpBase::SetCache_Control(const std::string cache_Control) { this->Cache_Control = cache_Control; }//����ָ����ǰ������/�ظ��еģ��Ƿ�ʹ�û�����ơ�
void MyHttpBase::SetConnection(const std::string connection) { this->Connection = connection; }//�ͻ��ˣ����������Ҫ����ʹ�õ��������� 
void MyHttpBase::SetCookie(const std::string cookie) { this->Cookie = cookie; }//
void MyHttpBase::SetContent_MD5(const std::string content_MD5) { this->Content_MD5 = content_MD5; }//����������ݵĶ����� MD5 ɢ��ֵ������ǩ�������� Base64 ����Ľ�� 
void MyHttpBase::SetContent_Type(const std::string content_Type) { this->Content_Type = content_Type; }//�������MIME���� ������POST��PUT�����У�
void MyHttpBase::SetDate(const std::string date) { this->Date = date; }//���͸���Ϣ�����ں�ʱ�䣨��RFC 7231�ж����"HTTP����"��ʽ�����ͣ� 
void MyHttpBase::SetExpect(const std::string expect) { this->Expect = expect; }//��ʾ�ͻ���Ҫ������������ض�����Ϊ 
void MyHttpBase::SetFrom(const std::string from) { this->From = from; }//�����������û����ʼ���ַ 
void MyHttpBase::SetHost(const std::string host) { this->Host = host; }//��ʾ�������������Լ��������������Ķ˿ںš����������Ķ˿��Ƕ�Ӧ�ķ���ı�׼�˿ڣ�80������˿ںſ���ʡ�ԡ� 
void MyHttpBase::SetIf_Match(const std::string if_Match) { this->If_Match = if_Match; }//�����ͻ����ṩ��ʵ����������϶�Ӧ��ʵ����ƥ��ʱ���Ž��ж�Ӧ�Ĳ�������Ҫ������ PUT �����ķ����У��������û��ϴθ���ĳ����Դ�󣬸���Դδ���޸ĵ�����£��Ÿ��¸���Դ��
void MyHttpBase::SetIf_Modified_Since(const std::string if_Modified_Since) { this->If_Modified_Since = if_Modified_Since; }//�����ڶ�Ӧ����Դδ���޸ĵ�����·���304δ�޸� 
void MyHttpBase::SetIf_None_Match(const std::string if_None_Match) { this->If_None_Match = if_None_Match; }//�����ڶ�Ӧ������δ���޸ĵ�����·���304δ�޸ģ� 304 Not Modified �����ο� ���ı�����Э�� ��ʵ���� 
void MyHttpBase::SetIf_Range(const std::string if_Range) { this->If_Range = if_Range; }//�����ʵ��δ���޸Ĺ������򷵻���ȱ�ٵ���һ���������֡����򣬷��������µ�ʵ��
void MyHttpBase::SetIf_Unmodified_Since(const std::string if_Unmodified_Since) { this->If_Unmodified_Since = if_Unmodified_Since; }//������ʵ����ĳ���ض�ʱ������δ���޸ĵ�����£��ŷ��ͻ�Ӧ��
void MyHttpBase::SetMax_Forwards(const std::string max_Forwards) { this->Max_Forwards = max_Forwards; }//���Ƹ���Ϣ�ɱ���������ת���Ĵ�����
void MyHttpBase::SetOrigin(const std::string origin) { this->Origin = origin; }//����һ����Կ�����Դ���������
void MyHttpBase::SetPragma(const std::string pragma) { this->Pragma = pragma; }//������ʵ����أ���Щ�ֶο���������/��Ӧ���е��κ�ʱ�����
void MyHttpBase::SetProxy_Authorization(const std::string proxy_Authorization) { this->Proxy_Authorization = proxy_Authorization; }//��������������֤����֤��Ϣ
void MyHttpBase::SetRange(const std::string range) { this->Range = range; }//��ʾ����ĳ��ʵ���һ���֣��ֽ�ƫ����0��ʼ
void MyHttpBase::SetReferer(const std::string referer) { this->Referer = referer; }//��ʾ����������ʵ�ǰһ��ҳ�棬������Ϊ��֮ǰ����ҳ������ӽ�����������˵�ǰҳ�档Referer��ʵ��Referrer������ʣ���RFC������׼ʱ��ƴ���ˣ�����Ҳ�ͽ���ʹ�ʹ��Referer��
void MyHttpBase::SetTE(const std::string tE) { this->TE = tE; }//�����Ԥ�ڽ��ܵĴ���ʱ�ı��뷽ʽ����ʹ�û�ӦЭ��ͷTransfer-Encoding�е�ֵ��������ʹ��"trailers"��ʾ���ݴ���ʱ�ķֿ鷽ʽ��������ʾ�����ϣ�������һ����СΪ0�Ŀ�֮�󻹽��յ�һЩ������ֶ�
void MyHttpBase::SetUser_Agent(const std::string user_Agent) { this->User_Agent = user_Agent; }//���������ݱ�ʶ�ַ��� 
void MyHttpBase::SetUpgrade(const std::string upgrade) { this->Upgrade = upgrade; }//Ҫ�������������һ���߰汾Э��
void MyHttpBase::SetVia(const std::string via) { this->Via = via; }//���߷��������������������Щ��������
void MyHttpBase::SetWarning(const std::string warning) { this->Warning = warning; }//һ��һ���Եľ��棬��ʾ��ʵ���������п��ܴ��ڴ���
void MyHttpBase::SetServerAddr(const std::string serverAddr) { this->ServerAddr = serverAddr; }
MyHttpBase::MyHttpBase(const std::string Adder, const int Port) :
	ServerAddr(Adder),
	ServerPort(Port),
	Accept(),//�ɽ��ܵ���Ӧ��������
	WaitTime(3000),//��ֵԽС���ͺͽ������ݸ��죬Ӧ�ʵ�����
	Accept_Charset(),//�ɽ��ܵ��ַ��� 
	Accept_Encoding(),//�ɽ��ܵ���Ӧ���ݵı��뷽ʽ
	Accept_Language(),//�ɽ��ܵ���Ӧ���������б�
	Accept_Datetime(),//�ɽ��ܵİ���ʱ������ʾ����Ӧ���ݰ汾 
	Authorization(),//���ڱ�ʾHTTPЭ������Ҫ��֤��Դ����֤��Ϣ 
	Cache_Control(),//����ָ����ǰ������/�ظ��еģ��Ƿ�ʹ�û�����ơ�
	Connection(),//�ͻ��ˣ����������Ҫ����ʹ�õ��������� 
	Cookie(),//
	Content_MD5(),//����������ݵĶ����� MD5 ɢ��ֵ������ǩ�������� Base64 ����Ľ�� 
	Content_Type(),//�������MIME���� ������POST��PUT�����У�
	Date(),//���͸���Ϣ�����ں�ʱ�䣨��RFC 7231�ж����"HTTP����"��ʽ�����ͣ� 
	Expect(),//��ʾ�ͻ���Ҫ������������ض�����Ϊ 
	From(),//�����������û����ʼ���ַ 
	Host(),//��ʾ�������������Լ��������������Ķ˿ںš����������Ķ˿��Ƕ�Ӧ�ķ���ı�׼�˿ڣ�80������˿ںſ���ʡ�ԡ� 
	If_Match(),//�����ͻ����ṩ��ʵ����������϶�Ӧ��ʵ����ƥ��ʱ���Ž��ж�Ӧ�Ĳ�������Ҫ������ PUT �����ķ����У��������û��ϴθ���ĳ����Դ�󣬸���Դδ���޸ĵ�����£��Ÿ��¸���Դ��
	If_Modified_Since(),//�����ڶ�Ӧ����Դδ���޸ĵ�����·���304δ�޸� 
	If_None_Match(),//�����ڶ�Ӧ������δ���޸ĵ�����·���304δ�޸ģ� 304 Not Modified �����ο� ���ı�����Э�� ��ʵ���� 
	If_Range(),//�����ʵ��δ���޸Ĺ������򷵻���ȱ�ٵ���һ���������֡����򣬷��������µ�ʵ��
	If_Unmodified_Since(),//������ʵ����ĳ���ض�ʱ������δ���޸ĵ�����£��ŷ��ͻ�Ӧ��
	Max_Forwards(),//���Ƹ���Ϣ�ɱ���������ת���Ĵ�����
	Origin(),//����һ����Կ�����Դ���������
	Pragma(),//������ʵ����أ���Щ�ֶο���������/��Ӧ���е��κ�ʱ�����
	Proxy_Authorization(),//��������������֤����֤��Ϣ
	Range(),//��ʾ����ĳ��ʵ���һ���֣��ֽ�ƫ����0��ʼ
	Referer(),//��ʾ����������ʵ�ǰһ��ҳ�棬������Ϊ��֮ǰ����ҳ������ӽ�����������˵�ǰҳ�档Referer��ʵ��Referrer������ʣ���RFC������׼ʱ��ƴ���ˣ�����Ҳ�ͽ���ʹ�ʹ��Referer��
	TE(),//�����Ԥ�ڽ��ܵĴ���ʱ�ı��뷽ʽ����ʹ�û�ӦЭ��ͷTransfer-Encoding�е�ֵ��������ʹ��"trailers"��ʾ���ݴ���ʱ�ķֿ鷽ʽ��������ʾ�����ϣ�������һ����СΪ0�Ŀ�֮�󻹽��յ�һЩ������ֶ�
	User_Agent(),//���������ݱ�ʶ�ַ��� 
	Upgrade(),//Ҫ�������������һ���߰汾Э��
	Via(),//���߷��������������������Щ��������
	Warning(),//һ��һ���Եľ��棬��ʾ��ʵ���������п��ܴ��ڴ���
	html(),
	ret(),
	begin()
{
	this->Init();
}
MyHttpBase::~MyHttpBase()
{

}
bool MyHttpBase::Init()
{


	WSADATA WSAData;
	WSAStartup(0x202, &WSAData);
	this->Socket = socket(AF_INET, SOCK_STREAM, 0);//����protocol����ָ��socket��ʹ�õĴ���Э���š���һ����ͨ�����������ã�һ������Ϊ0���ɡ�
	hostent *host = gethostbyname(this->ServerAddr.c_str());
	if (host == nullptr)
	{
		throw MyHttpBaseException("host��д����!");
	}
	sockaddr_in saddr;
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(this->ServerPort);
	std::memcpy(&saddr.sin_addr, host->h_addr, 4);


	if (connect(this->Socket, (sockaddr *)&saddr, sizeof(saddr)) == -1)
	{
		throw MyHttpBaseException("����ʧ��!");//�׳��쳣
		return false;


	}
	else
	{
		//���÷������ݺͽ������ݵ�����ӳ�ʱ��
		setsockopt(this->Socket, SOL_SOCKET, SO_SNDTIMEO, (char *)&this->WaitTime, sizeof(this->WaitTime));
		setsockopt(this->Socket, SOL_SOCKET, SO_RCVTIMEO, (char *)&this->WaitTime, sizeof(this->WaitTime));
		return true;
	}


}

std::string MyHttpBase::UtfToGbk(const char* utf8)   //����windowscmd����֧�ֵı����ʽΪgbk����վĬ�ϵı����ʽΪutf8 ����Ҫת������
{
	int len = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, NULL, 0);
	wchar_t* wstr = new wchar_t[len + 1];
	memset(wstr, 0, len + 1);
	MultiByteToWideChar(CP_UTF8, 0, utf8, -1, wstr, len);
	len = WideCharToMultiByte(CP_ACP, 0, wstr, -1, NULL, 0, NULL, NULL);
	char* str = new char[len + 1];
	memset(str, 0, len + 1);
	WideCharToMultiByte(CP_ACP, 0, wstr, -1, str, len, NULL, NULL);
	if (wstr) delete[] wstr;
	return str;
}
std::string MyHttpBase::SetDatePacked(const std::string pageAddr, const std::string accessMethod, const std::string data)
{
	std::stringstream request;
	if (accessMethod == "POST")
	{

		request << "POST " << pageAddr << " HTTP/1.1\r\n";
		if (this->Accept != "")
			request << "Accept:" << this->Accept << "\r\n";
		if (this->Accept_Charset != "")
			request << "Accept-Charset:" << this->Accept_Charset << "\r\n";
		if (this->Accept_Encoding != "")
			request << "Accept-Encoding:" << this->Accept_Encoding << "\r\n";
		if (this->Accept_Language != "")
			request << "Accept-Language:" << this->Accept_Language << "\r\n";
		if (this->Accept_Datetime != "")
			request << "Accept-Datetime:" << this->Accept_Datetime << "\r\n";
		if (this->Authorization != "")
			request << "Authorization:" << this->Authorization << "\r\n";
		if (this->Cache_Control != "")
			request << "Cache-Control:" << this->Cache_Control << "\r\n";
		if (this->Connection != "")
			request << "Connection:" << this->Connection << "\r\n";
		if (this->Cookie != "")
			request << "Cookie:" << this->Cookie << "\r\n";
		request << "Content-Length:" << data.length() << "\r\n";
		if (this->Content_MD5 != "")
			request << "Content-MD5:" << this->Content_MD5 << "\r\n";
		if (this->Content_Type != "")
			request << "Content-Type:" << this->Content_Type << "\r\n";
		if (this->Date != "")
			request << "Date:" << this->Date << "\r\n";
		if (this->Expect != "")
			request << "Expect:" << this->Expect << "\r\n";
		if (this->From != "")
			request << "From:" << this->From << "\r\n";
		if (this->Host != "")
			request << "Host:" << this->Host << "\r\n";
		if (this->If_Match != "")
			request << "If-Match:" << this->If_Match << "\r\n";
		if (this->If_Modified_Since != "")
			request << "If-Modified-Since :" << this->If_Modified_Since << "\r\n";
		if (this->If_None_Match != "")
			request << "If-None-Match:" << this->If_None_Match << "\r\n";
		if (this->If_Range != "")
			request << "If-Range :" << this->If_Range << "\r\n";
		if (this->If_Unmodified_Since != "")
			request << "If-Unmodified-Since:" << this->If_Unmodified_Since << "\r\n";
		if (this->Max_Forwards != "")
			request << "Max-Forwards:" << this->Max_Forwards << "\r\n";
		if (this->Origin != "")
			request << "Origin:" << this->Origin << "\r\n";
		if (this->Pragma != "")
			request << "Pragma:" << this->Pragma << "\r\n";
		if (this->Proxy_Authorization != "")
			request << "Proxy-Authorization:" << this->Proxy_Authorization << "\r\n";
		if (this->Range != "")
			request << "Range:" << this->Range << "\r\n";
		if (this->Referer != "")
			request << "Referer:" << this->Referer << "\r\n";
		if (this->TE != "")
			request << "TE:" << this->TE << "\r\n";
		if (this->User_Agent != "")
			request << "User-Agent:" << this->User_Agent << "\r\n";
		if (this->Upgrade != "")
			request << "Upgrade:" << this->Upgrade << "\r\n";
		if (this->Via != "")
			request << "Via:" << this->Via << "\r\n";
		if (this->Warning != "")
			request << "Warning:" << this->Warning << "\r\n";
		request << "\r\n";
		request << data;
	}
	else if (accessMethod == "GET")
	{

		request << "GET " + pageAddr + " HTTP/1.1\r\n";
		if (this->Accept != "")
			request << "Accept:" << this->Accept << "\r\n";
		if (this->Accept_Charset != "")
			request << "Accept-Charset:" << this->Accept_Charset << "\r\n";
		if (this->Accept_Encoding != "")
			request << "Accept-Encoding:" << this->Accept_Encoding << "\r\n";
		if (this->Accept_Language != "")
			request << "Accept-Language:" << this->Accept_Language << "\r\n";
		if (this->Accept_Datetime != "")
			request << "Accept-Datetime:" << this->Accept_Datetime << "\r\n";
		if (this->Authorization != "")
			request << "Authorization:" << this->Authorization << "\r\n";
		if (this->Cache_Control != "")
			request << "Cache-Control:" << this->Cache_Control << "\r\n";
		if (this->Connection != "")
			request << "Connection:" << this->Connection << "\r\n";
		if (this->Cookie != "")
			request << "Cookie:" << this->Cookie << "\r\n";
		if (this->Content_MD5 != "")
			request << "Content-MD5:" << this->Content_MD5 << "\r\n";
		if (this->Content_Type != "")
			request << "Content-Type:" << this->Content_Type << "\r\n";
		if (this->Date != "")
			request << "Date:" << this->Date << "\r\n";
		if (this->Expect != "")
			request << "Expect:" << this->Expect << "\r\n";
		if (this->From != "")
			request << "From:" << this->From << "\r\n";
		if (this->Host != "")
			request << "Host:" << this->Host << "\r\n";
		if (this->If_Match != "")
			request << "If-Match:" << this->If_Match << "\r\n";
		if (this->If_Modified_Since != "")
			request << "If-Modified-Since :" << this->If_Modified_Since << "\r\n";
		if (this->If_None_Match != "")
			request << "If-None-Match:" << this->If_None_Match << "\r\n";
		if (this->If_Range != "")
			request << "If-Range :" << this->If_Range << "\r\n";
		if (this->If_Unmodified_Since != "")
			request << "If-Unmodified-Since:" << this->If_Unmodified_Since << "\r\n";
		if (this->Max_Forwards != "")
			request << "Max-Forwards:" << this->Max_Forwards << "\r\n";
		if (this->Origin != "")
			request << "Origin:" << this->Origin << "\r\n";
		if (this->Pragma != "")
			request << "Pragma:" << this->Pragma << "\r\n";
		if (this->Proxy_Authorization != "")
			request << "Proxy-Authorization:" << this->Proxy_Authorization << "\r\n";
		if (this->Range != "")
			request << "Range:" << this->Range << "\r\n";
		if (this->Referer != "")
			request << "Referer:" << this->Referer << "\r\n";
		if (this->TE != "")
			request << "TE:" << this->TE << "\r\n";
		if (this->User_Agent != "")
			request << "User-Agent:" << this->User_Agent << "\r\n";
		if (this->Upgrade != "")
			request << "Upgrade:" << this->Upgrade << "\r\n";
		if (this->Via != "")
			request << "Via:" << this->Via << "\r\n";
		if (this->Warning != "")
			request << "Warning:" << this->Warning << "\r\n";
		request << "\r\n";

	}
	else throw MyHttpBaseException("û�д˷��ʷ���!");//�׳��쳣

	return request.str();
}
std::string MyHttpBase::GetCookie(const std::string &str, const std::string TailSign)
{

	if ((begin = str.find("Cookie:")) != -1)
	{
		int end = str.find(TailSign, begin);
		int len = end - begin;
		std::string cookie = str.substr(begin, len);
		return cookie;
	}
	else
		return "";


}


std::string Http::GetHtml()
{

	html.clear();


	//int sum = 0;
	while ((ret = recv(this->Socket, buf, sizeof(buf) - sizeof(char), 0)) > 0)
	{
		//sum += ret;
		for (int i = 0; i < ret; ++i)
		{
			html += buf[i];
		}
	}
	//std::cout << sum << "�ֽ�" << std::endl;

	if ((begin = html.find("utf-8")) != -1)
		return UtfToGbk(html.c_str());
	return html;
}
Http::Http(const std::string Adder, const int AdderPort) :MyHttpBase(Adder, AdderPort)
{

}
Http::~Http()
{
	this->Close();
}

void Http::Close()
{
	closesocket(this->Socket);
	WSACleanup();
}
std::string Http::PageAccess(const std::string PageAddr, const std::string AccessMethod, const std::string Data)
{
	DataContent.clear();
	DataContent = SetDatePacked(PageAddr, AccessMethod, Data);
	if (send(this->Socket, DataContent.c_str(), DataContent.size(), 0) > 0)
	{
		//std::cout << "���� �ɹ���" << std::endl;
		return this->GetHtml();
	}
	else
	{
		throw MyHttpBaseException("Http����ʧ��!");//�׳��쳣
		return "";
	}

}



Https::Https(const std::string Adder, const int AdderPort) : MyHttpBase(Adder, AdderPort)
{
	//����SSL������Ϣ 
	SSL_load_error_strings();
	//���SSL�ļ���/HASH�㷨 
	SSLeay_add_ssl_algorithms();
	//�ͻ��ˣ������ѡ��SSLv23_server_method() 
	meth = SSLv23_client_method();
	//�����µ�SSL������ 
	ctx = SSL_CTX_new(meth);
	ssl = SSL_new(ctx);
	if (ssl == NULL)
	{
		throw MyHttpBaseException("SLL NEW ERROR!");//�׳��쳣
	}
	//��SSL��TCP SOCKET ���� 
	SSL_set_fd(ssl, this->Socket);
	//SSL���� 
	ret = SSL_connect(ssl);
	if (ret == -1)
	{
		throw MyHttpBaseException("SSL ACCEPT ERROR!");//�׳��쳣
	}
}
Https::~Https()
{
	this->Close();
}
void Https::Close()
{

	//�ر�SSL�׽��� 
	SSL_shutdown(ssl);
	//�ͷ�SSL�׽��� 
	SSL_free(ssl);
	//�ͷ�SSL�Ự���� 
	SSL_CTX_free(ctx);

	closesocket(this->Socket);
	WSACleanup();
}
std::string Https::PageAccess(const std::string PageAddr, const std::string AccessMethod, const std::string Data)
{
	DataContent.clear();
	DataContent = SetDatePacked(PageAddr, AccessMethod, Data);
	ret = SSL_write(ssl, DataContent.c_str(), strlen(DataContent.c_str()));//��������
	if (ret == -1)
	{
		//std::cout << "���� ʧ�ܣ�" << std::endl;
		throw MyHttpBaseException("Https����ʧ��!");//�׳��쳣
		return "";
	}
	else
	{
		//std::cout << "���� �ɹ���" << std::endl;
		return this->GetHtml();
	}

}
std::string Https::GetHtml()
{
	html.clear();
	while ((ret = SSL_read(ssl, buf, sizeof(buf) - sizeof(char))) > 0)
	{
		for (int i = 0; i < ret; ++i)
		{
			html += buf[i];
		}
	}

	if ((begin = html.find("utf-8")) != -1)
		return UtfToGbk(html.c_str());
	return html;
}