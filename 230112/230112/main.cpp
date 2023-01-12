
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
	�ݺ��� : Ư�� �۾��� �ݺ��ؼ� �������ִ� ����̴�.
	���� : for, while, do while 3������ �����Ѵ�.
	while(���ǽ�) {} �� ���·� �����ȴ�.
	while���� ���ǽ��� üũ�ؼ� true�� ��� �ڵ�� ���� �ڵ尡 ���۵ǰ�, 
	�ٽ� ���ǽ��� üũ�Ѵ�. ���ǽ��� false�� �Ǹ� while���� ���������� �ȴ�.
	�ݺ��� �ȿ��� break�� ������ �Ǹ� �ش� �ݺ����� ���������� �ȴ�.
	*/
	int iNumber = 0;
	while (iNumber < 10) 
	{
		cout << iNumber << endl;
		++iNumber;

		if (iNumber == 4)
			break;
	}

	// ȭ���� ������ �����ش�. system ������ɾ� ����
	system("cls");

	// �������̺� ����
	srand((unsigned int)time(0));

	int iPlayer, iAI;
	
	while (false)
	{
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ��" << endl;
		cout << "4. ����" << endl;
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> iPlayer;

		if (iPlayer < SRP_S || iPlayer > SRP_END)
		{
			cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
			// �Ͻ�����
			system("pause");
			// continue : �ݺ����� ���������� �̵������ִ� ����̴�.
			continue;
		}

		else if (iPlayer == SRP_END)
			break;

		// ���� ������ �Ѵ�.
		iAI = rand() % 3 + SRP_S;

		switch (iAI)
		{
		case SRP_S:
			cout << "AI: ����" << endl;
			break;
		case SRP_R:
			cout << "AI: ����" << endl;
			break;
		case SRP_P:
			cout << "AI: ��" << endl;
			break;
		}

		int iWin = iPlayer - iAI;

		/*if (iWin == 1 || iWin == -2)
			cout << "Player �¸�" << endl;

		else if (iWin == 0)
			cout << "���" << endl;

		else
			cout << "AI �¸�" << endl;*/

		switch (iWin)
		{
		case 1:
		case -2:
			cout << "Player �¸�" << endl;
			break;
		case 0:
			cout << "���" << endl;
			break;
		default:
			cout << "AI �¸�" << endl;
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
	for�� : �ݺ����� �� �����̴�.
	���� : for(�ʱⰪ; ���ǽ�; ������) {} �� ���·� ������ �ȴ�.
	���ǽ��� true�̸� �ڵ���� �ڵ尡 ���۵ȴ�.
	���ѷ����� �������� for(;;) {} �� ���ָ� �������� ���ư��� �ȴ�.
	for������ �ʱⰪ�� ó�� for���� �����Ҷ� �� 1���� ���۵ȴ�. �� �Ŀ� ���ǽ��� üũ�ϰ�,
	���ǽ��� true�̸� �ڵ���� �ڵ尡 ���۵� �� �������� ó���Ѵ�.
	�� �� �ٽ� ������ üũ�ϰ� true�̸� ���۵ǰ� ���� -> ���� -> ���� -> ������ ������ ó���� �Ǵٰ�
	������ false�̰ų�, break�� ������ �Ǹ� for���� ���������� �ȴ�.
	*/
	// �ʱⰪ : i = 0	���ǽ� : i < 10		������ : ++i
	// ���� for���� �����ϸ鼭 �ʱⰪ�� ����ǹǷ� i�� 0���� �ʱ�ȭ�Ѵ�.
	// �� �Ŀ� i < 10 �� üũ�ؼ� 0�϶��� true�� ������ �Ǿ� i���� ����Ѵ�.
	// �� �Ŀ� ������ ó���ϴµ� ++�� �ϸ� 0���� 1�� �ǰ� ������ üũ�ϰ� �ȴ�.
	// 1�� 10���� �����Ƿ� true�� ������, 1���  ++�ؼ� 2���ǰ� ���� true
	// 2��� 3, 4, 5, 6, 7, 8, 9 ������ ������ true�� 9��	����ϰ�
	// ++�� �Ǿ� 10�� �ǰ� 10 < 10 �� �ϸ� ������ false�� �ǹǷ� �ݺ����� ���������� �ȴ�.
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
	}

	// ������ 2���� ����غ���.

	for (int i = 1; i <= 9; ++i) 
	{
		cout << "2 * " << i << " = " << 2 * i << endl;
	}

	// 1 ~ 100 ������ ������ ¦���� ����ϴ� for ���� �ۼ��غ���.
	for (int i = 2; i <= 100; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;

	// 3�� 7�� �����
	for (int i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 7 == 0)
			cout << i << " ";
	}

	// ��ø for�� : for�� �ȿ� �Ǵٸ� for���� �����ϴ� �����̴�.
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cout << "i = " << i << " j = " << j << endl;
		}
	}

	return 0;
}