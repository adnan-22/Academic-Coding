//The factorial of a given number(using do..while loop)
#include<iostream>
using namespace std;
void main()
{
	int n,no, f = 1;
	cout << "Enter a number:";
	cin >> n;
	no = n;
	cout << "The factorial of " << n << " is ";
	do
	{
		f = f*no;
		if (no != 1)
			cout << no << "*";
		else
			cout << no << "=";
		no--;
	} while (no > 0);
	cout <<f<<endl;
}
