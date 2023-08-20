#include <iostream>
using namespace std;
void add(int, int, int = 0);
int main()
{
    int a, b, c;
    cout << "Enter two numbers ";
    cin >> a >> b;
    add(a, b);
    cout << "Enter three numbers ";
    cin >> a >> b >> c;
    add(a, b, c);
    return 0;
}
void add(int a, int b, int c)
{
    cout << "addition of your numbers is: " << a + b + c<<endl;
}