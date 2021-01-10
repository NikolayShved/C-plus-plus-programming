#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

void izdvoichnoivdesyatichnuy()
{
	string ch1;
	int ch2, k, konechnoechislo = 0;
	cout << "Enter a number in binary notation:" << endl;
	cin >> ch1;
	k = ch1.size() - 1;
	cout << "Decimal number:" << endl;
	for (int i = 0; i < ch1.size(); i++)
	{
		if (ch1[i] == '1')
		{
			ch2 = pow(2.0, k);
			konechnoechislo += ch2;
			k--;
		}
		else
		{
			k--;
		}
	}
	cout << konechnoechislo << endl;
}

void izdesyatichnoyvdvoichnuy()
{
	vector <int> ch2;
	int ch1, k = 0;
	cout << "Enter a number in decimal notation:" << endl;
	cin >> ch1;
	cout << "Number in binary notation:" << endl;
	if (ch1 == 0)
	{
		cout << ch1;
	}
	while (ch1)
	{
		ch2.push_back(ch1 % 2);
		ch1 /= 2;
	}
	for (int i = ch2.size() - 1; i >= 0; i--)
	{
		cout << ch2[i];
	}
	cout << endl;
}

void izdesyatichnoyvschesnadzaterichnuy()
{
	int ch1, k = 0, a = 1;
	cout << "Enter a number in decimal notation:" << endl;
	cin >> ch1;
	cout << "Hexadecimal number:" << endl;
	if (ch1 == 0)
	{
		cout << ch1;
	}
	while (ch1 >= a)
	{
		k++;
		a = pow(16.0, k);
	}
	int s1;
	for (int i = (k - 1); i >= 0; i--)
	{
		if (i > 0)
		{
			s1 = ch1 / pow(16.0, i);
		}
		else
		{
			s1 = ch1 % 16;
		}
		if (s1 > 9)
		{
			switch (s1)
			{
			case 10:
			{
				cout << 'À';
				break;
			}
			case 11:
			{
				cout << 'B';
				break;
			}
			case 12:
			{
				cout << 'C';
				break;
			}
			case 13:
			{
				cout << 'D';
				break;
			}
			case 14:
			{
				cout << 'E';
				break;
			}
			case 15:
			{
				cout << 'F';
				break;
			}
			}
		}
		if ((s1 <= 9) && (s1 >= 0))
		{
			cout << s1;
		}
		ch1 %= (int)pow(16.0, i);
	}
	cout << endl;
}

void izschestnadzaterichnoyvdesyatichnuy()
{
	string ch1;
	char *symbols;
	int k, symb = 0;
	cout << "Enter a number in hexadecimal notation:" << endl;
	cin >> ch1;
	k = ch1.size();
	symbols = new char[k];
	vector <int> a;
	cout << "Decimal number:" << endl;
	for (int i = 0; i < k; i++)
	{
		if ((ch1[i] == '0') || (ch1[i] == '1') || (ch1[i] == '2') || (ch1[i] == '3') || (ch1[i] == '4') || (ch1[i] == '5') || (ch1[i] == '6') || (ch1[i] == '7') || (ch1[i] == '8') || (ch1[i] == '9'))
		{
			symbols[symb] = ch1[i];
			a.push_back(atoi(symbols));
		}
		symb = 0;
		if (ch1[i] == 'A')
		{
			a.push_back(10);
		}
		if (ch1[i] == 'B')
		{
			a.push_back(11);
		}
		if (ch1[i] == 'C')
		{
			a.push_back(12);
		}
		if (ch1[i] == 'D')
		{
			a.push_back(13);
		}
		if (ch1[i] == 'E')
		{
			a.push_back(14);
		}
		if (ch1[i] == 'F')
		{
			a.push_back(15);
		}
	}
	int p = 0, konechnoechislo = 0;
	for (int i = k - 1; i >= 0; i--)
	{
		a[i] = a[i] * pow(16.0, p);
		p++;
		konechnoechislo += a[i];
	}
	cout << konechnoechislo << endl;
}

int main()
{
	while (true)
	{
		int zivra;
		cout << "To convert a binary number to decimal - enter the number 1" << endl;
		cout << "To convert a hexadecimal number to decimal - enter the number 2" << endl;
		cout << "To convert a decimal number to binary - enter the number 3" << endl;
		cout << "To convert a decimal number to hexadecimal - enter the number 4" << endl;
		cin >> zivra;
		switch (zivra)
		{
		case 1:
		{
			izdvoichnoivdesyatichnuy();
			break;
		}
		case 2:
		{
			izschestnadzaterichnoyvdesyatichnuy();
			break;
		}
		case 3:
		{
			izdesyatichnoyvdvoichnuy();
			break;
		}
		case 4:
		{
			izdesyatichnoyvschesnadzaterichnuy();
			break;
		}
		default:
		{
			cout << "Input Error!!! You must enter a number from 1 to 4 !!! Try again!!!" << endl;
		}
		}
	}
	system("PAUSE");
	return 0;
}