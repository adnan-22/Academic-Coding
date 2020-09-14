#include<iostream>
#include<cmath>
void teller(int);
using namespace std;
void main()
{
	int a,d[100],i=0;
	cout << "Enter a Number : ";
	cin >> a;
	while (a > 0) 
	{
		d[i] = a % 10;
		a = a / 10;
		i++;
	}
	cout << "The number is  : ";
	for (int j = i;  j>=0; j--)
	{
		teller(d[j]);
	}
	cout << endl;
}
void teller(int x)
{
	switch (x)
	{
	case 0:cout << "zero "; break;
	case 1:cout << "one "; break;
	case 2:cout << "two "; break;
	case 3:cout << "three "; break;
	case 4:cout << "four "; break;
	case 5:cout << "five  "; break;
	case 6:cout << "six "; break;
	case 7:cout << "seven "; break;
	case 8:cout << "eight "; break;
	case 9:cout << "nine "; break;
	}
}


output:
Enter a Number : 56789
The number is  : five  six seven eight nine
Press any key to continue . . .

