#include<iostream>
using namespace std;
int a[5];
int  func(int & b)
{
    cout<<b<<endl;
}
int main()
{
    int an,b;
    an=9;
    b=8;
    int s=an+b;
    cout<<s<<endl;
    func(&a);
    return 0;
}

