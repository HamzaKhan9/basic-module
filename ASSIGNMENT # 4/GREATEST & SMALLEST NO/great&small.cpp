#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float num1 , num2 , num3;
    cout << "ENTER FIRST NUMBER: "; cin >> num1;
    cout << "ENTER SECOND NUMBER: "; cin >> num2;
    cout << "ENTER THIRD NUMBER: "; cin >> num3;
    if(num1>num2&&num1>num3)
    {
        cout << "\nFIRST NUMBER IS THE GREATEST NUMBER WHICH IS " << num1;
    }
    else if(num2>num1&&num2>num3)
    {
        cout << "\nSECOND NUMBER IS THE GREATEST NUMBER WHICH IS " << num2;
    }
    else
    {
        cout << "\nTHIRD NUMBER IS THE GREATEST WHICH IS " << num3;
    }
    if(num1<num2&&num1<num3)
    {
        cout << "\nFIRST NUMBER IS THE SMALLEST NUMBER WHICH IS " << num1;
    }
    else if(num2<num1&&num2<num3)
    {
        cout << "\nSECOND NUMBER IS THE SMALLEST NUMBER WHICH IS " << num2;
    }
    else
    {
        cout << "\nTHIRD NUMBER IS THE SMALLEST NUMBER WHICH IS " << num3;
    }
    return 0;
}
