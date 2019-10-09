#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int cx , cy , px , py;
    float r , d;
    cout  << "\n\nENTER X-COORDIATE OF CENTRE = "; cin >> cx; cout << "ENTER Y-COORDINATE OF CENTRE = "; cin >> cy;
    cout << "\nENTER RADIUS OF THE CIRCLE = "; cin >> r;
    cout << "\n\nENTER X-COORDINATE OF POINT = "; cin >> px; cout << "ENTER Y-COORDINATE OF POINT = "; cin >> py;
    d=sqrt((pow(px-cx,2))+(pow(py-cy,2)));
    if(d<r)
    {
        cout << "\nTHE POINT IS INSIDE THE CIRCLE";
    }
    else if(d==r)
    {
        cout << "\nRHE POINT IS ON THE CIRCLE";
    }
    else if(d>r)
    {
        cout << "\nTHE POINT IS OUTSIDE THE CIRCLE";
    }
    return 0;
}
