#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int menu;
float la1 , la2 , lb1 , lb2 , lc1 , lc2;
float qa , qb , qc ;
float lx , ly;
float x1 , x2;
cout << "*********************** EQUATION SOLVER *****************************";
cout << "\n\n       1. LINEAR EQUATION (anX + bnY = c)\n       2. QUADRATIC EQUATION (aX^2 + bX + c = 0) \n\n  PLEASE ENTER YOUR CHOICE: ";cin >> menu;
switch(menu)
{
    case 1:
    cout << "\n***************** LINEAR EQUATION (anX + bnY = c) *******************";
    cout << "\n\nENTER a1: "; cin >> la1;
    cout << "ENTER b1: "; cin >> lb1;
    cout << "ENTER c1: "; cin >> lc1;
    cout << "ENTER a2: "; cin >> la2;
    cout << "ENTER b2: "; cin >> lb2;
    cout << "ENTER c2: "; cin >> lc2;
    lx=(lb2*lc1-lb1*lc2)/(lb2*la1-lb1*la2);
    ly=(la1*lc2-la2*lc1)/(lb2*la1-lb1*la2);
    if((lb2*la1-lb1*la2)==0)
    {
        cout << "\n\n SOLUTION DOES NOT EXIST!";
    }
    else
    {
        cout << "\n\n     x = " << lx;
        cout << "\n     y = " << ly;
    }
    break;
case 2:
    cout << "************* QUADRATIC EQUATION (aX^2 + bX + c = 0) ****************";
    cout << "\n\nENTER a: "; cin >> qa;
    cout << "ENTER b: "; cin >> qb;
    cout << "ENTER c: "; cin >> qc;
    x1=(-qb+sqrt(pow(qb,2)-4*qa*qc))/(2*qa);
    x2=(-qb-sqrt(pow(qb,2)-4*qa*qc))/(2*qa);
    if (qa==0)
    {
        cout << "\n\n   SOLUTION DOES NOT EXIST!";
    }
    else if((pow(qb,2)-4*qa*qc)<0)
    {
        cout << "\n\n   SOLUTION IS NOT REAL!";
    }
    else
    {
        cout << "\n\n     x1 = " << x1 << "\n     x2 = " << x2;
    }
    break;

    }
    return 0;




}
