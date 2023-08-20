#include <iostream>
#include <cmath>
using namespace std;
float area(float);
float area(float, float);
float area(float, float, float);
int main()
{
    float r;
    cout << "Enter radius of circle ";
    cin >> r;
    cout << "Area of Circle = " << area(r)<<endl;
    float ln, br;
    cout << "Enter length and breadth for area of rectangle ";
    cin >> ln >> br;
    cout << "Area of rectangle = " << area(ln, br)<<endl;
    float a, b, c;
    cout << "Enter three sides of a triangle ";
    cin >> a >> b >> c;
    cout << "Area of Triangle = " << area(a, b, c);
    return 0;
}
float area(float r)
{
    return (r * r * 3.14);
}
float area(float ln, float br)
{
    return (ln * br);
}
float area(float a, float b, float c)
{
    float s;
    s = (a + b + c) / 2.0;
    return (sqrt(s * (s - a) * (s - b) * (s - c)));
}