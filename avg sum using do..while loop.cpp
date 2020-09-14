//The sum and average of the given numbers using the do..while loop
#include<iostream>
using namespace std;
void main()
{
	float no,s=0,c = 0;
	cout << "Enter numbers and '0' to find the sum & avg:" << endl;
	cin >> no;
	do
	{	
		s = s + no;
		cin >> no;
		c++;
	} while (no!=0);
	cout << "Sum of the given numbers is:" << s << endl;
	cout << "Average of the given numbers is:" << s / c << endl;
}

