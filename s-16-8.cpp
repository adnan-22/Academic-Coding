#include<iostream>
using namespace std;
class number_read
{
protected:
	int no;
public:
	void get_datax(int x)
	{
		no = x;
	}
	void display_input(void)
	{
		cout << "The no is : " << no << endl;
	}
};
class digit_print

{
private:
	
public:
	void teller(int m)
	{
		switch (m)
		{
		case 0:cout << "zero "; break;
		case 1:cout << "one "; break;
		case 2:cout << "two "; break;
		case 3:cout << "three "; break;
		case 4:cout << "four "; break;
		case 5:cout << "five  "; break;
		case 6:cout << "six "; break;
		case 7:cout << "seven "; break;
		case 8:cout << "eight "; break;
		case 9:cout << "nine "; break;
		}
	}
	void print_digit(int s)
	{
		int a=s, d[100], i = 0;
		while (a > 0)
		{
			d[i] = a % 10;
			a = a / 10;
			i++;
		}
		cout << "The number is  : ";
		for (int j = i; j >= 0; j--)
		{
			teller(d[j]);
		}
		cout << endl;
	}
};
class prime_no 
{
public:
	bool prime(int l)
	{
		if (l < 2)
			return (false);
		if (l % 2 == 0)
			return (false);
		else if (l < 4)
			return (true);
		for (int k = 3; k <= l / 2; k += 2)
		{
			if (l%k == 0)
				return(false);
			else
				return (true);
		}
	}
};
class Display :public number_read, public digit_print,public prime_no
{
public:
	void display(void)
	{
		if (prime(no))
			cout << "It is prime" << endl;
		else
		cout << "It is not prime" << endl;
	}

};
void main()
{
	cout << "enter a no:";
	int e;
	cin >> e;
	Display f;
	f.get_datax(e);
	f.display_input();
	f.print_digit(e);
	f.display();
}