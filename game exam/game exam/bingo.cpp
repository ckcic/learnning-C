
#include <iostream>
#include <time.h>

using namespace std;

int main ()
{
	srand((unsigned int)time(0));

	int iNumber[25] = {};

	for (int i = 0; i < 25; i++)
	{
		iNumber[i] = i + 1;
	}

	int idx1 = 0, idx2 = 0, iTemp = 0;

	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	int iBingo = 0;

	while (true)
	{
		system("cls");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (iNumber[i * 5 + j] == INT_MAX)
					cout << "*\t";
				else
					cout << iNumber[i * 5 + j] << "\t";
			}
			cout << endl;
		}

		cout << "Bingo Line : " << iBingo << endl;

		// �ټ��� 5 �̻��� ��� ������ �����Ѵ�.
		if (iBingo >= 5)
			break;

		cout << "���ڸ� �Է��ϼ���(0: ����) : ";

		int iInput;
		cin >> iInput;

		if (iInput == 0)
			break;

		else if (iInput < 1 || iInput > 25)
			continue;

		// �ߺ��Է� üũ�ϱ� ���� �����̴�. �⺻������ �ߺ��Ǿ��ٶ�� �ϱ����� true�� ��Ƶξ���.
		bool bAcc = true;

		// ��� ���ڸ� ���ʴ�� �˻��ؼ� �Է��� ���ڿ� ���� ���ڰ� �ִ����� ã�Ƴ���.
		for (int i = 0; i < 25; i++)
		{
			if (iInput == iNumber[i])
			{
				// ���ڸ� ã���� ��� �ߺ��� ���ڰ� �ƴϹǷ� bAcc ������ false�� ������ش�.
				bAcc = false;

				// ���ڸ� *�� �����ϱ� ���� Ư���� ���� INT_MAX�� ���ش�.
				iNumber[i] = INT_MAX;

				// ���̻� �ٸ� ���ڷ� ã�ƺ� �ʿ䰡 �����Ƿ� for���� ����������.
				break;
			}
		}

		// bAcc ������ true�� ��� �ߺ��� ���ڸ� �Է��ؼ� ���ڸ� *�� �ٲ��� �������Ƿ� �ٽ� �Է¹ް� continue ���ش�.
		if (bAcc)
			continue;

		// ���� �� ���� üũ�ϴ� ���� �Ź� ���ڸ� �Է��Ҷ����� ó������ ���� ī��Ʈ�� �Ұ��̴�.
		// �׷��Ƿ� iBingo ������ 0���� �Ź� �ʱ�ȭ�ϰ� ���Ӱ� �� ���� �����ֵ��� �Ѵ�.
		iBingo = 0;

		// ����, ���� �� ���� �����ش�.
		int iStar1 = 0, iStar2 = 0;
		for (int i = 0; i < 5; i++)
		{
			// ������ üũ�ϱ� ���� ���� 0���� �� ������ �ʱ�ȭ�Ѵ�.
			iStar1 = iStar2 = 0;
			for (int j = 0; j < 5; j++)
			{
				// ���� �� ������ �����ش�.
				if (iNumber[i * 5 + j] == INT_MAX)
					iStar1++;

				// ���� �� ������ �����ش�.
				if (iNumber[j * 5 + i] == INT_MAX)
					iStar2++;

			}

			// j for���� ���������� ���� ���� ���� ���� �� ������ ����� iStar1 ������ ���� �ȴ�.
			// ��� *�̶�� �ǹ��̹Ƿ� ���� �� ī��Ʈ�� �߰����ش�.
			if (iStar1 == 5)
				iBingo++;

			if (iStar2 == 5)
				iBingo++;
		}	
		
		// ���� ��� -> ������ �ϴ� �밢�� üũ
		iStar1 = 0;
		for (int i = 0; i < 25; i += 6)
		{
			if (iNumber[i] == INT_MAX)
				iStar1++;
		}

		if (iStar1 == 5)
			iBingo++;

		// ������ ��� -> ���� �ϴ� �밢�� üũ
		iStar1 = 0;
		for (int i = 4; i <= 20; i += 4)
		{
			if (iNumber[i] == INT_MAX)
				iStar1++;
		}

		if (iStar1 == 5)
			iBingo++;
	}

	return 0;
}