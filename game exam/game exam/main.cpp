
#include <iostream>
#include <time.h>

// console input output 헤더파일이다. 콘솔창에서 입출력 하는 기능들을 제공해주는 헤더파일이다.
#include <conio.h>

using namespace std;

int main()
{
	srand((unsigned int)time(0));

	int iNumber[25] = {};

	for (int i = 0; i < 24; i++)
	{
		iNumber[i] = i + 1;
	}

	// 가장 마지막 칸은 공백으로 비워둔다. 공백을 의미하는 값으로 특수한 값을 사용할건데 INT_MAX라는 값을 사용할 것이다.
	// INT_MAX는 이미 정의되어있는 값으로 int로 표현할 수 있는 최대값이다.
	iNumber[24] = INT_MAX;
	// f12를 누르면 연관된 곳으로 이동

	// 별이 있는 위치를 저장할 변수를 만들어준다.
	int iStarIndex = 24;

	// 마지막 공백을 제외하고 1 ~ 24 까지의 숫자만 섞어준다. 즉 인덱스는 0 ~ 23번 인덱스 까지만 섞어준다.
	int idx1 = 0, idx2 = 0, iTemp = 0;

	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 24;
		idx2 = rand() % 24;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	while (true)
	{
		system("cls");
		// i for문이 세로줄을 의미한다.
		for (int i = 0; i < 5; i++)
		{
			// j for문이 가로 칸을 의미한다.
			for (int j = 0; j < 5; j++)
			{
				// 줄번호 * 가로개수 + 칸번호
				if (iNumber[i * 5 + j] == INT_MAX) 
				{ 
					iStarIndex = i * 5 + j;
					cout << "*\t";
				}
				else
					cout << iNumber[i * 5 + j] << "\t";
			}
			cout << endl;
		}

		// true로 주어서 먼저 모두 맞췄다 라고 가정해둔다.
		bool	bWin = true;

		// 퍼즐을 맞추었는지 채크한다
		for (int i = 0; i < 24; i++)
		{
			if (iNumber[i] != i + 1)
			{
				bWin = false;
				break;
			}
		}

		if (bWin)
		{
			cout << "숫자를 모두 맞췄습니다." << endl;
			break;
		}

		cout << "w : 위 s : 아래 : a : 왼쪽 d : 오른쪽 q : 종료 : ";
		// _getch() 함수는 문자 1개를 입력받는 함수이다. 이 함수는 Enter를 치지
		// 않더라도 문자를 누르는 순간 바로 그 문자를 반환하고 종료된다.
		char	cinput = _getch();

		if (cinput == 'q' || cinput == 'Q')
			break;
		switch (cinput)
		{
		case 'w':
		case 'W':
			if (iStarIndex - 5 >= 0)
			{
				iNumber[iStarIndex] = iNumber[iStarIndex - 5];
				iNumber[iStarIndex - 5] = INT_MAX;
			}
			break;
		case 's':
		case 'S':
			if (iStarIndex + 5 < 25)
			{
				iNumber[iStarIndex] = iNumber[iStarIndex + 5];
				iNumber[iStarIndex + 5] = INT_MAX;
			}
			break;
		case 'a':
		case 'A':
			if (iStarIndex % 5 != 0)
			{
				iNumber[iStarIndex] = iNumber[iStarIndex - 1];
				iNumber[iStarIndex - 1] = INT_MAX;
			}
			break;
		case 'd':
		case 'D':
			if (iStarIndex % 5 != 4)
			{
				iNumber[iStarIndex] = iNumber[iStarIndex + 1];
				iNumber[iStarIndex + 1] = INT_MAX;
			}
			break;
		}
	}

	cout << endl << "게임을 종료 합니다." << endl;

	return 0;
}