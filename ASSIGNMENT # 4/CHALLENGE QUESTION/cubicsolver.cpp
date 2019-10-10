#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a , b , c , d;
    double f , g, h , i , j , k , l , m , n , p , r , s , t , u , v , w , x;
    double c1x1 , c1x2 , c1x3 , c2x1 , c3x1 , c3x2 , c3x3;
    cout << "\n\n***************************** CUBIC EQUATION SOLVER *********************************";
    cout << "\n\n                           ENTER CO-EFFICIENT a: "; cin >> a;
    cout << "                           ENTER CO-EFFICIENT b: "; cin >> b;
    cout << "                           ENTER CO-EFFICIENT c: "; cin >> c;
    cout << "                           ENTER CONSTANT d: "; cin >> d;

    //ALL THE SUPPOSIONS STARTS HERE;
    f=((3*c/a)-(pow(b,2)/pow(a,2)))/3;
    g=((2*pow(b,3)/pow(a,3))-(9*b*c/pow(a,2))+(27*d/a))/27;
    h=(pow(g,2)/4)+(pow(f,3)/27);
    i=sqrt((pow(g,2)/4)-h);
    j=cbrt(i);
    k=acos(-(g/(2*i)));
    l=j*(-1);
    m=cos(k/3);
    n=sqrt(3)*sin(k/3);
    p=(b/(3*a))*(-1);
    r=-(g/2)+(sqrt(h));
    s=cbrt(r);
    t=-(g/2)-sqrt(h);
    u=cbrt(t);
    v=-(s+u)/2-(b/(3*a));
    w=((s-u)*sqrt(3))/2;
    c1x1=(2*j*(cos(k/3)))-(b/(3*a));
    c1x2=l*(m+n)+p;
    c1x3=l*(m-n)+p;
    c2x1=(s+u)-(b/(3*a));
    c3x1=cbrt(d/a)*(-1);
    c3x2=c3x1;
    c3x3=c3x1;
    //ALL THE SUPPOSITIONS ARE DONE HERE

    if((f==0)&&(g==0)&&(h==0))
    {
            cout << "\n\n************************ ALL THREE ROOTS ARE REAL AND EQUAL *************************";
            cout << "\n\n                                   x1 = " << c3x1;
            cout << "\n                                   x2 = " << c3x1;
            cout << "\n                                   x3 = " << c3x1;
    }
    else if(h<=0)
    {
            cout << "\n\n********************** ALL THREE ROOTS ARE REAL AND UNEQUAL *************************";
            cout << "\n\n                                   x1 = " << c1x1;
            cout << "\n                                   x2 = " << c1x2;
            cout << "\n                                   x3 = " << c1x3;
    }
    else if(h>0)
    {
            cout << "\n\n*************** 1 ROOT IS REAL AND REMAINING TWO ROOTS ARE IMAGINARY ****************";
            cout << "\n\n                           x1 = " << c2x1;
            cout << "\n                           x2 = " << v << " + i." << w;
            cout << "\n                           x3 = " << v << " - i." << w;
    }
    return 0;
}
