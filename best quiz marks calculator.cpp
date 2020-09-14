#include<iostream>
using namespace std;
void main()
{	
	float a, b, c, d, b1, b2, b3, avg, at;
	int s;
	cout << "********backup calculator made by adnan amin siddiquee********"<<endl;
	cout << "\t press 1 For best 3 quiz out of 4 and performence avg" << endl;
	cout << "\t press 2 For best 2 quiz out of 3 and performence avg" << endl;
	cout << "\t press 3 for 3 quiz and performence avg" << endl;
	cout << "\t press 0 For exit" << endl;
	cin >> s;
	switch (s)
	{
	case 0:cout << "thank you for not using the code" << endl; break;
	case 1:
	{cout << "enter the attendence+class performence no(out of 10):";
	cin >> at;
	cout << "enter 4 quiz marks(by space & after input press enter):";
	cin >> a >> b >> c >> d;
	b1 = (a > b ? a : b);
	b2 = (b > c ? b : c);
	b3 = (c > d ? c : d);
	avg = (b1 + b2 + b3) / 3;
	cout << "The best quiz avg is : " << avg << endl;
	cout << "total backup is:" << avg + at << endl;
	}break;
	case 2:
	{cout << "enter the attendence+class performence no(out of 10):";
	cin >> at;
	cout << "enter 3 quiz marks(by space & after input press enter):";
	cin >> a >> b >> c;
	b1 = (a > b ? a : b);
	b2 = (b > c ? b : c);
	avg = (b1 + b2) / 2;
	cout << "The best quiz avg is : " << avg << endl;
	cout << "total backup is:" << avg + at << endl;
	}break;
	case 3:
	{cout << "enter the attendence+class performence no(out of 10):";
	cin >> at;
	cout << "enter 3 quiz marks(by space & after input press enter):";
	cin >> a >> b >> c;
	avg = (a + b + c) / 3;
	cout << "The best quiz avg is : " << avg << endl;
	cout << "total backup is:" << avg + at << endl;
	}break;
	}
}