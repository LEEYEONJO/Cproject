#define _CRT_SWCURE_NO_WARNINGS
#include <stdio.h>

typedef void (server_connection)(char* id, int pw);

void connection_SERVER(server_connection callback);
void on_server_connected(char* id, int pw);
void Login();
void 


char name[20]; //���α׷����� ����� ���̵� �̸�
int pw;        //���α׷����� ����� ��й�ȣ

char id[] = "abc1234"; //Ȯ�ο� ���̵�
int pass = 123456;     //��й�ȣ

server_connection sc = NULL; //���� ���� ����
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
	printf("���̵� �Է��մϴ�. ");
	scanf("%s", name);
	printf("��й�ȣ�� �Է��մϴ�. ");
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
