#include<iostream>
using namespace std;
void main()
{
	int l, h, n = 0,sum=0;
	cout << "enter lower limit:";
	cin >> l;
	cout << "enter higher limit:";
	cin >> h;
	while (l <= h)
	{		if (l % 2 == 0)
		{
			n++;
			cout << l <<" is a even no between the range"<<endl;
			sum = sum + l;
		}
	l++;
	}
	cout << "total even no :" << n<<endl;
	cout << "sum of all even no:" << sum << endl;

}