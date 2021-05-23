#include<iostream>
#include <cstring>
using namespace std;
struct A{
 int *roll=new int [4];
 string *name=new string[4];
 int *age=new int [4];
};
int main()
{
    A a;
    for(int i=0;i<4;i++)
    {
        cin>>a.roll[i]>>a.name[i]>>a.age[i];
    }
    int p;
    cout<<"\nnumber of further entries:-";
    cin>>p;
    int *q=new int [4+p];
    string *s=new string[4+p];
    int *t=new int [4+p];
    for(int i=0;i<4;i++)
    {
        q[i]=a.roll[i];
        s[i]=a.name[i];
        t[i]=a.age[i];
    }
    delete [] a.roll;
    delete [] a.name;
    delete [] a.age;
    for(int i=4;i<4+p;i++)
    {
        cin>>q[i]>>s[i]>>t[i];
    }
    a.roll=q;
    a.name=s;
    a.age=t;
    delete [] q;
    delete [] s;
    delete [] t;
    cout<<endl;
    for(int j=0;j<4+p;j++)
    {
        cout<<a.roll[j]<<"  |  "<<a.name[j]<<"  |  "<<a.age[j]<<"\n";
    }
    delete [] a.roll;
    delete [] a.name;
    delete [] a.age;
    return 0;

}
