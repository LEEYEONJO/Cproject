#define _CRT_SWCURE_NO_WARNINGS
#include <stdio.h>

typedef void (server_connection)(char* id, int pw);

void connection_SERVER(server_connection callback);
void on_server_connected(char* id, int pw);
void Login();
void 


char name[20]; //프로그램에서 사용할 아이디 이름
int pw;        //프로그램에서 사용할 비밀번호

char id[] = "abc1234"; //확인용 아이디
int pass = 123456;     //비밀번호

server_connection sc = NULL; //서버 연결 상태
int main()
{
	Login();







	return 0;
}

void connection_SERVER(server_connection callback)
{
	if (callback)
	{
		on_server_connected();
	}
	else
	{
		on_server_dosconnected();
	}
}

void on_server_connected(char* id, int pw)
{

}

void Login()
{
	printf("아이디를 입력합니다. ");
	scanf("%s", name);
	printf("비밀번호를 입력합니다. ");
	scanf("%d", &pw);

	if (name == id && pw == pass)
	{
		setting(fp);
	}



}


void setting(server_connecting fp)
{
	sc = fp;
}

void OnLogin(char* id, int pw)
