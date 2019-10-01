#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float amount;
float a100 , af100 , amin100;
float a50 , af50 , amin50;
float a10;
cout << "\n\n   ENTER AMOUNT TO PAID=" ; cin >> amount;
a100=amount/100;
af100=floor(a100);
amin100=amount-af100*100;
a50=amin100/50;
af50=floor(a50);
amin50=amin100-af50*50;
a10=amin50/10;

cout << "\n\n   NUMBER OF NOTES OF 100=" << af100;
cout << "\n   NUMBER OF NOTES OF 50=" << af50;
cout << "\n   NUMBER OF NOTES OF 10=" << a10; cout << "\n\n" ;
return 0;
}
