#include<iostream>
using namespace std;
int add(int,int,int);
int add(int,int);
int main() {
int a, b,c;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"addition is "<<add(a,b)<<endl;
cout<<"Enter three numbers: ";
cin>>c;
cout<<"addition is "<<add(a,b,c);
return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int add(int a,int b)
{
    return a+b;
}