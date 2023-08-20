#include<iostream>
using namespace std;
int max(int,int);
double max(double,double);
int main() {
int a,b;
cout<<"Enter two integer numbers: ";
cin>>a>>b;
cout<<"Maximum is "<<max(a,b)<<endl;
double c,d;
cout<<"Enter two real numbers: ";
cin>>c>>d;
cout<<"Maximum is "<<max(c,d);
return 0;
}
int max(int a,int b)
{
    return (a>b?a:b);
}
double max(double a,double b)
{
    return (a>b?a:b);
}