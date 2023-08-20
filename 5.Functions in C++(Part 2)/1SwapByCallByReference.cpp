#include<iostream>
int swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
using namespace std;
int main() {
int a,b;
cout<<"Enter First and Second Number: ";
cin>>a>>b;
swap(a,b);
cout<<"Numbers after swap"<<endl;
cout<<a<<" "<<b;
return 0;
}