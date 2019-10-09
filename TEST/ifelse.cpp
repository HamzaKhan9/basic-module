#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float m;
    cout << "ENTER YOUR PERCENTAGE="; cin >> m;
    if (m>=60&&m<70)
    {
        cout << "GRADE B";
    }
    else if(m>=70&&m<85)
    {
        cout << "GRADE A";
    }
    else if(m>=50&&m<60)
    {
        cout << "GRADE C";
    }
    else if(m>=85)
    {
        cout << "GRADE A1";
    }
    else if(m>=40&&m<50)
    {
        cout << "GRADE D";
    }
    else
    {
        cout << "FAIL";
    }
    return 0;
}
