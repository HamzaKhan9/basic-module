#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a1=150 , a2=220;
float b1=3.0 , b2=11.0;
float x=1.7 , y=3.15;
float num1=a1/b1 , num2=a2/b2;
float sum1=a1+b1 , sum2=a2+b2;
float j;
float z;
z=(30+(sum1/sum2))*3.142/180;
j=(pow(x,log(num1)))+(pow(y,log(num2)))-(1/z);
cout << j;
return 0;
}
