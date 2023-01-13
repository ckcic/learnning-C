
#include <iostream>
#include <time.h>

// console input output ��������̴�. �ܼ�â���� ����� �ϴ� ��ɵ��� �������ִ� ��������̴�.
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

	// ���� ������ ĭ�� �������� ����д�. ������ �ǹ��ϴ� ������ Ư���� ���� ����Ұǵ� INT_MAX��� ���� ����� ���̴�.
	// INT_MAX�� �̹� ���ǵǾ��ִ� ������ int�� ǥ���� �� �ִ� �ִ밪�̴�.
	iNumber[24] = INT_MAX;
	// f12�� ������ ������ ������ �̵�

	// ���� �ִ� ��ġ�� ������ ������ ������ش�.
	int iStarIndex = 24;

	// ������ ������ �����ϰ� 1 ~ 24 ������ ���ڸ� �����ش�. �� �ε����� 0 ~ 23�� �ε��� ������ �����ش�.
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
		// i for���� �������� �ǹ��Ѵ�.
		for (int i = 0; i < 5; i++)
		{
			// j for���� ���� ĭ�� �ǹ��Ѵ�.
			for (int j = 0; j < 5; j++)
			{
				// �ٹ�ȣ * ���ΰ��� + ĭ��ȣ
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

		// true�� �־ ���� ��� ����� ��� �����صд�.
		bool	bWin = true;

		// ������ ���߾����� äũ�Ѵ�
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
			cout << "���ڸ� ��� ������ϴ�." << endl;
			break;
		}

		cout << "w : �� s : �Ʒ� : a : ���� d : ������ q : ���� : ";
		// _getch() �Լ��� ���� 1���� �Է¹޴� �Լ��̴�. �� �Լ��� Enter�� ġ��
		// �ʴ��� ���ڸ� ������ ���� �ٷ� �� ���ڸ� ��ȯ�ϰ� ����ȴ�.
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

	cout << endl << "������ ���� �մϴ�." << endl;

	return 0;
}