#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//해당 홈페이지에서 진행되고 있는 숲속 동물 테스트를 연출해보는 예제



int main()
{
	//문항에 대한 저장(배열)
	//자료형 배열명[] = {값1,값2,값3,...};



	system("title  숲속 동물 테스트");
	printf("어느날 잠에서 깬 당신은\n내몸이 인간의 몸이 아님을 느낍니다.\n\n숲속의 동물이 된 나는 \n무엇을 하고 있을까요?\n");
	int select;
	printf("1. 숲속으로 떠나기");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	system("cls"); //콘솔 화면 지우기

	printf("일어나보니 오랜만에\n깨끗한 하늘이 보인다면\n");
	printf("1.\"화창한데 오늘 뭐하지?\"\n뭐할지 고민한다.");
	pirntf("2.\" 기분좋은 일들이 생길 것 같은 날이야!\"\n일단 기분이 좋다.");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	
	printf("숲속으로 외출하기 전,\n");
	printf("1. 생각나는 대로 챙겨나간다.\n");
	printf("2. 미리 준비해둔 옷과 가방을 챙겨 나간다.\n");

	printf("처음온 숲속을 산책할 때\n");
	printf("입구에 있는 지도를 보고 어디 갈 디 무엇을 볼지 정한다\n");
	printf("지도를 한번 슥 보고 발길 닿는 대로 간다\n");

	printf("귀여운 다람쥐를 만난다면\n");
	printf("처음보는 동물들도 모두 친구친구! 먼저가서 반갑게 말건다.\n");
	printf("궈여워서 심저이지만 멀리서 지켜본다.\n");

	printf("다람쥐 친구가 피부병이 났다고 하소연을 했다.\n");
	printf("피부에 좋은 친환경 제품을 써보는 건 어때? 해결방안을 제시한다\n");
	printf("아프겠다...어떡해ㅠㅠㅠ같이 아픔에 공감해준다\n");

	printf("사람들이 나무를 베오가 소중한 숲속이 황량해진것을 본다면\n");
	printf("나의 정들었던 공간이 망가진 것에 슬퍼진다\n");
	printf("조만간 새 보금자리를 찾기로 마음 먹는다\n");
	 
	printf("한 여름에 눈이 온다는 기후 변화 소식을 듣는다면\n");
	printf("우리가 개선할 수 있는게 뭘까? 현실적으로 고민해본다.\n");
	printf("앞으로 숯도...지구도 다 망가지는거 아냐? 미래를 걱정한다\n");

	printf("사람들이 집 앞 시냇가에 쓰레기를 버리고 있다면?\n");
	printf("다가가서 쓰레기를 가져가락도 눈치를 준다\n");
	printf("소란 일으키기 싫으니 그냥 내가 치운다\n");

	printf("숲 속 환경 문제로 급하게 동물 회의가 열렸다.\n");
	printf("그동안 내가 보고 느낀 것들을 적극적으로 설명한다.\n");
	pirntf("다른 동물들은 어떻게 생각하는지 먼저 들어본다\n");

	printf("곰이 자신에겐 사이즈가 안 맞는다며 나에게 딱 맞는 옷을 줬다. 가장 먼저 든 생각은?\n");
	printf("나를 생각하고 선뭏을 주다니 감동바는다\n");
	printf("나한테 딱 맞는 사이즈네 신난다\n");

	printf("잠자리에 들 시간이 되었는데 내일 있을 동물 회의를 준비해야한다\n");
	prinft("큰 주제 안에서 무엇을 말할지 생각해본다\n");
	printf("목차별 꼼꼼하게 회의 안건을 준비한다.\n");

	printf("숲속 체험이 끝나고 현실에 돌아와 일기를 쓴다면\n");
	printf("숲속에서 겪었던 일들을 자세히 묘사해서 쓴다.\n");
	printf("숲속에서 겪었던 감정들을 적는다\n");


	//반복문
	//12번 반복을 진행하는 코드)1가 0에서 시작해서 작업이 끝날때마다 1씩 1가 증가, 1가 12보다 작을 동안 반복)
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}

	printf("숲속에서 당신은 ");
	//12 ~ 13점
	if (total >= 12 && total <= 13)
	{
		printf("새롭고 짜릿한게 좋은 꾸러기 호랑이\n");
	}
	else if (total == 24)
	{
		printf("한껏 센치한 멜랑꼴링 늑대\n");
	}

	return 0;

}