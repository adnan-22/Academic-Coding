//The sum of the even numbers using do..while loop
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
	do
	{	
		if (n % 2 == 0)
		{
			cout << n <<" ";
			s = s + n;
		}
		n++;
	} while ( n<=u );
	cout <<endl<< "sum of even numbers:" << s<<endl;
}

