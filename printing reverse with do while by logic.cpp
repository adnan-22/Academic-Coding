#include <iostream>

using namespace std;

int main()
{
    int no,d,r=0,c=0;
    cout<<"enter a no:";
    cin>>no;

    do
    {
      d=no%10;
      r=(r*10)+d;
      no=no/10;
      c++;
    }while(no>0);
    cout<<"in reverse:"<<r<<endl;
    cout<<"total digit:"<<c<<endl;
}


output:

enter a no:3456789
in reverse:9876543
total digit:7

Process returned 0 (0x0)   execution time : 4.878 s
Press any key to continue.