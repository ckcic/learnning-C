
#include <iostream>

using namespace std;

int main()
{
	/*
	*
	**
	***
	****
	*****
	*/

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	/*
	*****
	****
	***
	**
	*
	*/

	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	/*
	    *
	   ***
	  *****
	 *******
	*/
	
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3 - i; ++j)
		{
			cout << " ";
		}

		for (int j = 0; j < i * 2 + 1; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	/*
	�������� 2�ܺ��� 9�ܱ��� ����Ѵ�.
	*/

	for (int i = 2; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}

	cout << endl;

	/*
	2�� 3�� 4��
	5�� 6�� 7��
	8�� 9�� 10��
	*/

	for (int i = 2; i < 11; i += 3)
	{
		for (int j = 1; j <= 9; ++j)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
			cout << i + 1 << " * " << j << " = " << (i + 1) * j << "\t";
			cout << i + 2 << " * " << j << " = " << (i + 2) * j << endl;
		}
	}

	cout << endl;

	/*
	   *
	  ***
	 *****
	*******
	 *****
	  ***
	   *
	*/
	int iLine = 7;
	int iCount = 0;

	for (int i = 0; i < iLine; i++)
	{
		iCount = i;
		if (i > iLine / 2)
		{
			iCount = iLine - 1 - i;
		}

		for (int j = 0; j < iLine/2 - iCount; ++j)
		{
			cout << " ";
		}

		for (int j = 0; j < iCount * 2 + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
}