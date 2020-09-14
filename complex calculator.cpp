#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double a1,b1,a2,b2,As,Bs,aS,bS,r1,r2,the1,the2,thed,rd,ad,bd,them,rm,am,bm;
    cout<<"Enter the real part of first complex No:";
    cin>>a1;
    cout<<"Enter the imaginary part of first complex No:";
    cin>>b1;
    cout<<"Enter the real part of second complex No:";
    cin>>a2;
    cout<<"Enter the imaginary part of second complex No:";
    cin>>b2;
    As=a1+a2;
    Bs=b1+b2;
    aS=a1-a2;
    bS=b1-b2;
    cout<<"the sum is: real part="<<As<<" imaginary part="<<Bs<<endl;
    cout<<"the subtraction is: real part="<<aS<<" imaginary part="<<bS<<endl;
    r1=sqrt(a1*a1+b1*b1);
    r2=sqrt(a2*a2+b2*b2);
    the1=atan(b1/a1);
    the2=atan(b2/a2);
    thed=the1-the2;
    rd=r1/r2;
    ad=rd*cos(thed);
    bd=rd*sin(thed);
    cout<<"the division is: real part="<<ad<<" imaginary part="<<bd<<endl;
    them=the1+the2;
    rm=r1*r2;
    am=rm*cos(them);
    bm=rm*sin(them);
    cout<<"the multiplication is: real part="<<am<<" imaginary part="<<bm<<endl;

}
