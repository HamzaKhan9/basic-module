#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a , b , c;
float rae, raue, iaue;
string re="REAL AND EQUAL";
string rue="REAL AND UNEQUAL";
string iue="IMAGINARY AND UNEQUAL";
cout << "ENTER THE CO-EFFECIENTS OF a="; cin >> a; cout << "\nENTER THE CO-EFFECIENTS OF b="; cin >> b; cout << "\nENTER THE CO-EFFECIENTS OF c="; cin >> c;
cout << "\n\n100 MEANS ROOTS ARE " << re << "\n010 MEANS ROOTS ARE " << rue << "\n001 MEANS ROOTS ARE " << iue;
rae=(b*b)-(4*a*c)==0;
raue=pow(b,2)-(4*a*c)>0;
iaue=pow(b,2)-(4*a*c)<0;
cout << "\n\n ******\n  " << rae << raue << iaue << "\n ******" ;
return 0;
}
