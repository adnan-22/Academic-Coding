//The factorial of a given number(using for loop)
#include<iostream>
using namespace std;
void main()
{
	int n,no, f = 1;
	cout << "Enter a number:";
	cin >> n;
	no = n;
	cout << "The factorial of " << n << " is ";
	for (no; no > 0; no--)
	{
		f = f*no;
		if (no != 1)
			cout << no << "*";
		else
			cout << no << "=";
	}
	cout << f<<endl;
}

