#include<iostream>
using namespace std;
void main()
{
	float x, s = 0, i = 1;
	char c;
	for ( ; ; )
	{
		cout << "enter no:";
		cin >> x;
		s = s + x;
		cout << "enter choice(for delet d,for new input n,for avg a):";
		cin >> c;
		if (c == 'n')
			i++;
		else if (c == 'a')
		{
			cout << "avg is:" << s / i << endl;
			break;
		}
		else if (c == 'd')
		{
			s = s - x;
		}	
		else
		{
			cout << "wrong choice" << endl;
			break;
		}
	}
	cout << "you can't write code in exam";
}