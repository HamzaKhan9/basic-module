#include <iostream>
using namespace std;
int main()
{
int num;
string x="*";
cout << "NUMBER OF ROWS TO PRINT= ";
cin >> num;
if(num>0&&num<21)
{
    for(int a=1;a<=num;a++)
    {

    cout << x << "\n"  ;
    x=x+"*";
    }
}
else
{
    cout << "ENTER A NUMBER BETWEEN 1-20";
}
return 0;
}
