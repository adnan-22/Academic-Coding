//a program to test a number if it is prime number or not.(using while loop)
#include<iostream>
using namespace std;
void main()
{
	int a, b=1, c=0;
	cout << "Enter a intiger:";
	cin >> a;
	while (b <= a)
	{
		if (a%b == 0)
		{
			c++;
		}
		b++;
	}
	if (c == 2)
		cout << a << " is a prime no"<<endl;
	else
		cout << a << " is not a prime no"<<endl;
}