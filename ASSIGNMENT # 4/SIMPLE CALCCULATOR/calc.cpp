#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
    int menu;
    double add , anum1 , anum2;
    double sub , snum1 , snum2;
    double mult , mnum1 , mnum2;
    double div , dnum1 , dnum2;
    double power , pnum1 , pnum2;
    cout << "\n\n                          SIMPLE CACLCULATOR";
    cout << "\n\n                          1. ADDITION";
    cout << "\n                          2. SUBTRACTION";
    cout << "\n                          3. MULTIPLICATION";
    cout << "\n                          4. DIVISION";
    cout << "\n                          5. RAISE TO THE POWER";
    cout << "\n                          6. EXIT";
    cout << "\n\n                      PLEASE ENTER A NUMBER FROM 1 TO 6 = "; cin >> menu;
    switch (menu)
    {
     case 1:
         system("cls");
     cout << "\n\n                                  ADDITION OF TW NUMBERS";
     cout << "\n            ENTER FIRST NUMBER = "; cin >> anum1;
     cout << "\n            ENTER SECOND NUMBER = "; cin >> anum2;

     cout << "\n                ANSWER = " <<anum1 + anum2;
     break;
     case 2:
     cout << "\n\n                                  SUBTRACTION OF TWO NUMBERS";
     cout << "\n            ENTER FIRST NUMBER = "; cin >> snum1;
     cout << "\n\n          ENTER SECOND NUMBER = "; cin >> snum2;
     sub = snum1 - snum2;
     cout << "\n                ANSWER = " << sub;
     break;
     case 3:
        cout << "\n\n                               MULTIPLICATION OF TWO NUMBERS";
        cout << "\n         ENTER FIRST NUMBER = "; cin >> mnum1;
        cout << "\n         ENTER SECOND NUMBER = "; cin >> mnum2;
        mult = mnum1 * mnum2;
        cout << "\n             ANSWER = " << mult;
    break;

    case 4:
        cout << "\n\n                               DIVISION OF TWO NUMBERS";
        cout << "\n         ENTER DIVIDEND = "; cin >> dnum1;
        cout << "\n         ENTER DIVISOR = "; cin >> dnum2;
        div = dnum1 / dnum2;
        cout << "\n             ANSWER = " << div;
    break;

    case 5:
        cout << "\n\n                               RAISE TO THE POWER";
        cout << "\n         ENTER BASE = "; cin >> pnum1;
        cout << "\n         ENTER EXPONENT = "; cin >> pnum2;
        power = pow(pnum1,pnum2);
        cout << "\n             ANSWER = " << power;
    break;

    default:
        cout << "\n\n               SHUTTING DOWN CALCULATOR";
    }
    cout << "\n\n                   THANKUOU FOR USING CALCULATOR";
    return 0;
}
