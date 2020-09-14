//The sum and average of the given numbers using the for loop
#include<iostream>
using namespace std;
void main()
{
	float no,s=0,c;
	cout << "Enter numbers and '0' to find the sum & avg:" << endl;
	cin >> no;
	for(c=0; no != 0; c++)
	{	
		s = s + no;
		cin >> no;		
	}
	cout << "Sum of the given numbers is:" << s << endl;
	cout << "Average of the given numbers is:" << s / c << endl;
}



