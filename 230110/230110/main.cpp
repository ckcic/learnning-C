
// #include : ��������� ���⿡ ���Խ�Ű�� ����̴�.
// # �� ���� �͵��� ��ó�����̴�.
#include <iostream>
#include <time.h>

using namespace std;
// ���� 1 ~ 4ȭ

// ���� ���� : ������ -> ���� -> ����
// ������ : �����۾��̴�.
// Ctrl + Shift + B �� �̿��ؼ� ������ �� ���带 �� �� �ִ�.
// Ctrl + F5 ����
// C++�� �������� main�Լ��̴�. main�Լ��� �ݵ�� �־�� �Ѵ�.
int main()
{

	// C++  ǥ�� ����� ��κ��� std ��� namespace �ȿ� �����ϰ� �ִ�. �̸��� ������ ���� �����ϱ� ���ؼ��̴�.
	// cout : �ܼ�â�� ������ִ� ����̴�. �ڿ� �ִ� ""(ū����ǥ) �ȿ� �ִ� ���ڵ��� ȭ�鿡 ������ش�.
	// ���� �������� ����Ҷ��� �ݵ�� "" �ȿ� �־��ְ� �̷����� ���ڿ� �̶�� �Ѵ�.
	// endl : �������̴�.
/*
	std::cout << "Test Output" << std::endl;
	std::cout << "�����ٶ�" << std::endl;

	cout << "std namespace ���" << endl;
*/
	/*
	���� : ���ϴ� ��  ���� �ٲ� �� �ִ�.
	�뷮�� �ּҴ��� : bit
	1byte = 8bit
	1kbyte = 1024byte
	1mbyte = 1024kbyte
	1gbyte = 1024mbyte
	1tbyte = 1024gbyte

	���ڸ� ǥ���ϴ� ��� : ASCII �ڵ� ǥ�� ������ �ִ�.
	false : 0
	true : 0�� �ƴ� ��� ��
	����	|	�뷮	|	������	|	ǥ������		|	unsigned	|
	char	|	1byte	|	����	|	-128 ~ 127		|	0 ~ 255		|
	bool	|	1byte	|	��/����	|	true / false	|	true/false	|	
	short	|	2byte	|	����	|	-32768 ~ 32767	|	0 ~ 65535	|
	int		|	4byte	|	����	|	�� -22�� ~ 21��	|	0 ~ �� 43��	|
	float	|	4byte	|	�Ǽ�	|	
	double	|	8byte	|	�Ǽ�	|	
	*/
	// = : ���Կ������̴�. �����ʿ� �ִ� ���� �������� �����Ѵ�.
/*
	int Number = 10;
	Number = 20;

	cout << Number << endl;

	bool	bTest = true;
	bTest = false;

	// �����̳� ���ڴ� 1byte�� �����Ѵ�. ������ �ѱ��̳� �ѹ� ���� ���ڵ��� 2byte��
	// �����ϱ� ������ char ���� �ϳ��� �����ϱⰡ �����
	cout << bTest << endl;

	char	cTest = 't';

	cout << cTest << endl;

	float	fNumber = 3.14f;

	cout << fNumber << endl;

	double	dNumber = 123.4567;

	cout << dNumber << endl;
*/
	/*
	��Ģ������ : +, -, *, /, %(������ ������)
	���迬���� : ���� ���� �����Ͽ� ��/�������� ����� ��ȯ�Ѵ�.
	>, >=, <. <=. ==, !=

	���������� : ��/���� �� ��/���� �����Ͽ� ��/�������� ����� ��ȯ�Ѵ�.
	AND(&&), OR(||), NOT(!)
	A	B	AND OR
	0	0	0	0
	1	0	0	1
	0	1	0	1
	1	1	1	1

	A	NOT
	0	1
	1	0

	���� : 2����, 8����, 10����, 16����
	2���� : 0 ~ 1
	8���� : 0 ~ 7
	10���� : 0 ~ 9
	16���� : 0 ~ 15: 0 ~ 9 10 ~ 15 : a ~ f
	�������� ���� �ٸ� ������ ��ȯ�� �����ϴ�.
	87�� 2����, 16������ ��ȯ�غ���.

	���� 2������ ��ȯ�Ѵ�.
	87 / 2 = 43 -- 1
	43 / 2 = 21 -- 1
	21 / 2 = 10 -- 1
	10 / 2 = 5 --- 0
	5 / 2 = 2 ---- 1
	2 / 2 = 1 ---- 0
	���� �������� ���� ����� �������� ������������ �д´�.
	1010111 �� �ȴ�.

	16������ ��ȯ�غ���. 10������ �ٷ� 16������ ��ȯ�ϴ� �� ���� 2������ ��ȯ�� �Ŀ�
	16������ ��ȯ�ϴ� ���� ����.

	1010111 �� ���������κ��� 4�ڸ��� ��� ����Ѵ�. 16���� 1�ڸ��� 2���� 4�ڸ��̴�.
	0101 0111
	8421 8421

	2������ 1�� �κ��� ���� ���Ѵ�
	16���� 57 �� �ȴ�.

	53 / 2 = 26 -- 1
	26 / 2 = 13 -- 0
	13 / 2 = 6 --- 1
	6 / 2 = 3 ---- 0
	3 / 2 = 1 ---- 1

	��Ʈ���� ���������� : 2���� ������ ������ �Ѵ�. �� �� ���� �����Ͽ� ������ ���´�.
	���� : AND(&), OR(|), NOT(~), XOR(^)
	A	B	XOR
	0	0	0	
	1	0	1
	0	1	1
	1	1	0

	87 & 53 = 
	87 : 1010111
	53 : 110101

	���� ��ó�� 2������ �ٲ� �Ŀ� 2���� �� �ڸ����� ���������� �����Ѵ�.
	 1010111
	&0110101
	 0010101
	 10101 �� ���´�.
	 10������ ��ȯ�ϸ� 21�� ���°� �ȴ�.
	*/

/*	cout << "10 < 20 = " << (10 < 20) << endl;
	cout << "10 <= 20 = " << (10 <= 20) << endl;
	cout << "10 > 20 = " << (10 > 20) << endl;
	cout << "10 >= 20 = " << (10 >= 20) << endl;
	cout << "10 == 20 = " << (10 == 20) << endl;
	cout << "10 != 20 = " << (10 != 20) << endl;

	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> Number;

	cout << "10 ~ 20 = " << (10 <= Number && Number <= 20) << endl;

	cout << "87 & 53 = " << (87 & 53) << endl;	// ���� ���� �� ��
*/

// ���� 1 ~ 4ȭ

// ���� 5 ~ 7ȭ

	// ��� : ������ �ʴ� ��, ���� �ѹ� �����س����� �ٲ� �� ����.
	// ����� ����� ���ÿ� ���� �����صξ�� �Ѵ�.
	// 0x 16����
	// �밡���� ǥ���
	const int iAttack = 0x00000001;		// 1
	const int iArmor = 0x00000002;		// 10
	const int iHP = 0x00000004;			// 100
	const int iMP = 0x00000008;			// 1000
	const int iCritical = 0x00000010;	// 10000

	// ������ �߰� �� ���� | �� �Ѵ�.
	// 001 | 100 = 00101 | 10000 = 10101 
	int iBuf = iAttack | iHP | iCritical;

	// ������ ����� : �����ڸ� �ٿ��� ����� �� �ִ�.
	// �Ʒ��� Ǯ� ���� iBuf = iBuf ^ iHP;
	// 10101 ^ 00100 = 10001
	iBuf ^= iHP;

	// 10001 ^ 00100 = 10101
	iBuf ^= iHP;

	// ^(XOR)�� Ȱ���ϸ� ���� �״� �ϴ� ����ġ ó�� ��밡��

	// & �����ڷ� ������ �����ִ��� Ȯ��
	// �迭�� �� ����? �ӵ��� ����,
	// 10101 & 00001 = 1
	cout << "Attack : " << (iBuf & iAttack) << endl;
	// 10101 & 00010 = 0
	cout << "Armor : " << (iBuf & iArmor) << endl;
	cout << "HP : " << (iBuf & iHP) << endl;
	cout << "MP : " << (iBuf & iMP) << endl;
	cout << "Critical : " << (iBuf & iCritical) << endl;

	/*
	����Ʈ ������ : <<, >> �� �� ���� �����Ͽ� ������ ������ �ȴ�.
	�� ������ ���� ������ ������ ������ �ϰ� �ȴ�.
	20 << 2 = 80	// 20���ٰ� 2�� 2������ ���ѰͰ� ����.
	20 << 3 = 160	// 20���ٰ� 2�� 3������ ���ѰͰ� ����.
	20 << 4 = 320	// 20���ٰ� 2�� 4������ ���ѰͰ� ����.
	// ���� ���ϱ�
	2�� n���������� ���� �� ���

	20�� 2������ ��ȯ �Ѵ�.
	1010000
	10100000
	101000000

	// ���� �� ���� ������ ������ ����, �� �� �ϳ��� �Ǽ��� ������ �Ǽ��� ����
	// ���� ������
	// 2�� ������ �� ���� 0.5�� ���ϴ� �� ����
	20 >> 2 = 5
	20 >> 3 = 2
	101
	10
	*/

	int iHigh = 187;
	int iLow = 13560;

	int iNumber = iHigh;
	// ��Ʈ �ʵ�
	// 4����Ʈ�� 2���� �ɰ� | �� | �� |
	// ���� 16��Ʈ, ���� 16��Ʈ
	// iNumber���� 187�� �� �ִ�. �� ���� <- �� �������� 16��Ʈ �̵���Ű��
	// ���� 16��Ʈ�� ���� ���� �ȴ�.
	iNumber <<= 16;

	// ���� 16��Ʈ�� ä���.
	iNumber |= iLow;

	// High ���� ����Ѵ�.
	cout << "High : " << (iNumber >> 16) <<endl;
	// Low ���� ���
	// 0x0000ffff & ���� 16��Ʈ�� ������ 0, ������ �װ��� ����
	cout << "Low : " << (iNumber & 0x0000ffff) << endl;

	// ���������� : ++, -- �� �ִ�. 1����, 1�����̴�.
	iNumber = 10;

	// ��ġ
	++iNumber;
	
	// ��ġ
	iNumber++;

	cout << ++iNumber << endl;
	cout << iNumber++ << endl;
	cout << iNumber << endl;

	/*
	�б⹮���� ũ��	2���� ������ �ִ�. if��, switch���� �����Ѵ�.
	if�� : ������ üũ���ִ� ����̴�.
	���� : if(���ǽ�){�ڵ����}
	if���� ���ǽ��� true�� �� ��� �ڵ���� ���� �ڵ尡 ���۵ȴ�.
	false�� ��쿡�� ���۵��� �ʴ´�.
	*/

	if (false) 
	{
		cout << "if�� ������ ture �Դϴ�." << endl;
	}

	// ������ �ִ��� Ȯ���Ѵ�.
	if ((iBuf & iAttack) != 0)
	{
		cout << "Attack ������ �ֽ��ϴ�." << endl;
	}

	// if�� �Ʒ��� �� �ڵ尡 1���� ��� {�ڵ����}�� ������ �� �ִ�.
	if ((iBuf & iArmor) != 0)
		cout << "Armor ������ �ֽ��ϴ�." << endl;

	if ((iBuf & iHP) != 0)
		cout << "HP ������ �ֽ��ϴ�." << endl;

	if ((iBuf & iMP) != 0)
		cout << "MP ������ �ֽ��ϴ�." << endl;

	if ((iBuf & iCritical) != 0)
		cout << "Critical ������ �ֽ��ϴ�." << endl;

	/*
	else : if���� �ݵ�� ���� ����� �Ǿ�� �Ѵ�.
	if�� ������ false�� ��� else�� �ִٸ� else ���� ���� �ڵ尡 ���۵ȴ�.

	else if : if���� �ݵ��	���� ����� �Ǿ�� �Ѵ�.
	if�� �Ʒ� �;� �ϰ� else ���ٴ� ���� �־�� �Ѵ�.
	else if�� �ڽ��� ���� �ִ� ���ǽ��� false�� ��� ���� else if�� ���ǽ��� üũ�Ѵ�.
	else if�� ��� ����� �����ϴ�.
	*/

	if (false)
		cout << "if�� ������ true�Դϴ�." << endl;
	else
		cout << "if�� ������ false�Դϴ�." << endl;

	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> iNumber;

	if (10 <= iNumber && iNumber <= 20)
		cout << "10 ~ 20 ������ �����Դϴ�." << endl;

	else if (21 <= iNumber && iNumber <= 30)
		cout << "21 ~ 30 ������ �����Դϴ�." << endl;

	else if (31 <= iNumber && iNumber <= 40)
		cout << "31 ~ 40 ������ �����Դϴ�." << endl;

	else
		cout << "�� ���� �����Դϴ�." << endl;

	// Ctrl End ȭ�� ���� �Ʒ�
	// Ctrl Home ȭ�� ���� ��
	
	// ���� �߻�
	// typecasting, ����ȯ
	srand((unsigned int)time(0));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	// rand() = 0 ~  ���������� �ۿ� �ȳ���, �׷��� ���� �˰������� ���� ���� ����Ѵ�.
	// 100 ~ 200
	cout << (rand() % 101 + 100) << endl;
	cout << (rand() % 10000 / 100.f) << endl;
	
	int iUpgrade = 0;
	cout << "Upgrade �⺻ ��ġ�� �Է��ϼ��� : ";
	cin >> iUpgrade;

	// ��ȭ Ȯ���� ���Ѵ�.
	float	fPercent = rand() % 10000 / 100.f;

	// ��ȭ Ȯ�� : ���׷��̵尡 0 ~ 3 : 100% ����, 4 ~ 6 : 40%, 7 ~ 9 : 10%, 10 ~ 13 : 1%, 14 ~ 15 : 0.01%
	cout << "Upgrade : " << iUpgrade << endl;
	cout << "Percent : " << fPercent << endl;

	if (iUpgrade <= 3)
		cout << "��ȭ ����" << endl;

	else if (4 <= iUpgrade && iUpgrade <= 6) 
	{
		if (fPercent < 40.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}

	else if (7 <= iUpgrade && iUpgrade <= 9)
	{
		if (fPercent < 10.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}

	else if (10 <= iUpgrade && iUpgrade <= 13)
	{
		if (fPercent < 1.f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}

	else if (14 <= iUpgrade && iUpgrade <= 15)
	{
		if (fPercent < 0.01f)
			cout << "��ȭ ����" << endl;
		else
			cout << "��ȭ ����" << endl;
	}
// ���� 5 ~ 7ȭ

	return 0;
}