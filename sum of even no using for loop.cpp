//The sum of the even numbers using for loop
#include<iostream>
using namespace std;
void main()
{
	int l,u,n, s = 0;
	cout << "Enter lower limit:";
	cin >> l;
	cout << "Enter upper limit:";
	cin >> u;
	n = l;
	cout << "even numbers are ";
	for (n = l; n <= u; n++)
	{
		if (n % 2 == 0)
		{
			cout << n << " ";
			s = s + n;
		}
	}
	cout <<endl<< "sum of even numbers:" << s<<endl;
}

