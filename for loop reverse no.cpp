#include<iostream>
using namespace std;
void main()
{
	int c=1, n,d=0,r;
	cout << "enter a no:";
	cin >> n;
	for (n; n > 0; n = n / 10)
	{	
		r = n % 10;
		d = (d * 10) + r;
		c++;
	}
	cout << "revesed no:" << d<<endl;
	cout << "total digit:" << c<<endl;
}



enter a no:456789
revesed no:987654
total digit:7
Press any key to continue . . .