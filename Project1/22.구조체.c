#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>
//����ü(struct)
//���� �ڷ����� �������� �ϳ��� ��� ���ο� �ڷ������� ����� ���� �ǹ��մϴ�.(�����ڷ���)
//������� ���Ǵ�� ��� �ϳ��� ���·� ǥ���ϴ� ����̱⿡ ����� ���� Ÿ���̶�� �θ��ϴ�.
//�������� ����ȭ �۾���
//����ȭ : ����Ǿ� �ϳ��� ����� ó���ϴ� ���, ����� �������δ� record(c#), object(java, c++)

struct ����ü��
{
	  //����ü�� ������ ���� ������
	int value;
	float f;
	char c;
	...
};
*//*

//����ü ����
struct student
{
	char number;// �й�
	char name[10];// �̸� �ѱ� ���� 4���ڱ���
	char group; //A,B,C,D,E
};
//����ü ������ ���� ������ �ƴϱ� ������, ����ϱ� ���ؼ� ���� ���� ����� �ʱ�ȭ�� �����ؾ� �մϴ�.



int main()
{
	//����ü ���� �� �ʱ�ȭ ���
	//struct ����ü�� ������ = { ����ü�� ���ǵ� ���� ������� ���� �ۼ��մϴ�. };
	struct stdent s1 = { 1, "keite", 'A' };

	struct student s2; //����ü ���� ����

	//����ü ������.������ = ��;�� ���� ���� ����
	s2.number = 2;
	strcpy(s2, name, "nero");
	//���ڿ��� ��ü ������ �Ұ����ϹǷ�, strcpy() �Լ��� ���� �����մϴ�
	s2.group = 'B';

	struct student s3;

	printf("�й� : ");
	scanf("%d", &s3.number);
	printf("�̸� : ");
	scanf("%s", s3.name);
	getchar(); //���ڿ� ������ ���ڸ� �ް� ������ getchar() �Լ��� ���� �ٷμ����
	printf("�׷� : ");
	scanf("%c".s3.group);













	return 0;
}