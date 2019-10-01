#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a1=3 , a2=2;
float b1=5 , b2=1;
float x=1.309;
float f;
f=a1*(cos(2*pow(x,1/2)))+b1*(sin(2*pow(x,1/2)))+a2*(cos(3*pow(x,1/3)))+b2*(sin(3*pow(x,1/3)));
cout << f;
return 0;
}
