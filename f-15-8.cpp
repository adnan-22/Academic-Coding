#include<iostream>
using namespace std;
class rectangle
{
protected:
	float height, width;
public:
	void getdata_rec(float h, float w)
	{
		height=h;
		width=w;
	}
	float display_arearec()
	{
		return (width*height);
	}
};
class sphere
{
protected:
	float radius;
public:
	void getdata_sph(float r)
	{
		radius = r;
	}
	double display_areasph()
	{
		return (4 * 3.14*radius*radius);
	}
};
class Result :public rectangle, public sphere
{
public:
	void display()
	{
		cout<< display_arearec()<<endl;
		cout<< display_areasph()<<endl;
	}
};
void main()
{
	Result T;
	T.getdata_rec(3, 5);
	T.getdata_sph(2);
	T.display();
}