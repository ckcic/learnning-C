
#include <iostream>
#include <time.h>

using namespace std;

enum SRP
{
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END
};


int main()
{
	/*
	반복문 : 특정 작업을 반복해서 수행해주는 기능이다.
	종류 : for, while, do while 3종류가 존재한다.
	while(조건식) {} 의 형태로 구성된다.
	while문은 조건식을 체크해서 true일 경우 코드블럭 안의 코드가 동작되고, 
	다시 조건식을 체크한다. 조건식이 false가 되면 while문을 빠져나오게 된다.
	반복문 안에서 break를 만나게 되면 해당 반복문을 빠져나오게 된다.
	*/
	int iNumber = 0;
	while (iNumber < 10) 
	{
		cout << iNumber << endl;
		++iNumber;

		if (iNumber == 4)
			break;
	}

	// 화면을 깨끗히 지워준다. system 도스명령어 실행
	system("cls");

	// 난수테이블 생성
	srand((unsigned int)time(0));

	int iPlayer, iAI;
	
	while (false)
	{
		cout << "1. 가위" << endl;
		cout << "2. 바위" << endl;
		cout << "3. 보" << endl;
		cout << "4. 종료" << endl;
		cout << "숫자를 입력하세요 : ";
		cin >> iPlayer;

		if (iPlayer < SRP_S || iPlayer > SRP_END)
		{
			cout << "잘못된 값을 입력하였습니다." << endl;
			// 일시정지
			system("pause");
			// continue : 반복문의 시작점으로 이동시켜주는 기능이다.
			continue;
		}

		else if (iPlayer == SRP_END)
			break;

		// 봇이 선택을 한다.
		iAI = rand() % 3 + SRP_S;

		switch (iAI)
		{
		case SRP_S:
			cout << "AI: 가위" << endl;
			break;
		case SRP_R:
			cout << "AI: 바위" << endl;
			break;
		case SRP_P:
			cout << "AI: 보" << endl;
			break;
		}

		int iWin = iPlayer - iAI;

		/*if (iWin == 1 || iWin == -2)
			cout << "Player 승리" << endl;

		else if (iWin == 0)
			cout << "비김" << endl;

		else
			cout << "AI 승리" << endl;*/

		switch (iWin)
		{
		case 1:
		case -2:
			cout << "Player 승리" << endl;
			break;
		case 0:
			cout << "비김" << endl;
			break;
		default:
			cout << "AI 승리" << endl;
			break;
		}

		system("pause");
	}

	/*
	for ( int i = 0; i < 100; 1++)
	{
		cout << rand() % 701 +1000 << endl;
	}
	*/

	/*
	for문 : 반복문의 한 종류이다.
	형태 : for(초기값; 조건식; 증감값) {} 의 형태로 구성이 된다.
	조건식이 true이면 코드블럭의 코드가 동작된다.
	무한루프를 돌릴때는 for(;;) {} 을 해주면 무한으로 돌아가게 된다.
	for문에서 초기값은 처음 for문에 진입할때 딱 1번만 동작된다. 그 후에 조건식을 체크하고,
	조건식이 true이면 코드블럭의 코드가 동작된 후 증감값을 처리한다.
	그 후 다시 조건을 체크하고 true이면 동작되고 증감 -> 조건 -> 증감 -> 조건의 순서로 처리가 되다가
	조건이 false이거나, break를 만나게 되면 for문을 빠져나가게 된다.
	*/
	// 초기값 : i = 0	조건식 : i < 10		증감값 : ++i
	// 먼저 for문에 진입하면서 초기값이 실행되므로 i를 0으로 초기화한다.
	// 그 후에 i < 10 을 체크해서 0일때는 true가 나오게 되어 i값을 출력한다.
	// 그 후에 증감을 처리하는데 ++을 하면 0에서 1이 되고 조건을 체크하게 된다.
	// 1은 10보다 작으므로 true가 나오고, 1출력  ++해서 2가되고 조건 true
	// 2출력 3, 4, 5, 6, 7, 8, 9 까지는 조건이 true라서 9를	출력하고
	// ++이 되어 10이 되고 10 < 10 을 하면 조건이 false가 되므로 반복문을 빠져나오게 된다.
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
	}

	// 구구단 2단을 출력해보자.

	for (int i = 1; i <= 9; ++i) 
	{
		cout << "2 * " << i << " = " << 2 * i << endl;
	}

	// 1 ~ 100 사이의 숫자중 짝수만 출력하는 for 문을 작성해보자.
	for (int i = 2; i <= 100; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;

	// 3과 7의 공배수
	for (int i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 7 == 0)
			cout << i << " ";
	}

	// 중첩 for문 : for문 안에 또다른 for문이 존재하는 형태이다.
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cout << "i = " << i << " j = " << j << endl;
		}
	}

	return 0;
}