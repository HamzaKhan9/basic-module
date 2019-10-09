#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string h; int a; char l; char g; int pre; int polamnt;
    cout << "Enter Person's Health (EXCELLENT/POOR): "; cin >> h;
    cout << "Enter Person's Age : "; cin >> a;
    cout << "Enter Person's Locality (C=city/V=Village): "; cin >> l;
    cout << "Enter Person's Gender (M=Male/F=Female): "; cin >> g;
    if((h=="EXCELLENT")&&(a>=25&&a<=35)&&(l=='C')&&(g=='M'))
    {
        pre=4000;
        polamnt=200000;
        cout << "\nRHE PERSON IS GRANTED THE FOLLOWING INSURANCE PACKAGE:-";
        cout  << "\nPREMIUM: "<< pre << "\nPolicy Amount: " << polamnt << "\n\n";
    }
    else if((h=="EXCELLENT")&&(a>=25&&a<=35)&&(l=='C')&&(g=='F'))
    {
        pre=3000;
        polamnt=100000;
        cout << "\nTHE PERSON IS GRANTED THE FOLLOWING INSURANCE PACKAGE:-";
        cout  << "\nPREMIUM: "<< pre << "\nPolicy Amount: " << polamnt << "\n\n";
    }
    else if((h=="POOR")&&(a>=35&&a<=50)&&(l=='V')&&(g=='M'))
    {
        pre=6000;
        polamnt=20000;
        cout << "\nRHE PERSON IS GRANTED THE FOLLOWING INSURANCE PACKAGE:-";
        cout  << "\nPREMIUM: "<< pre << "\nPolicy Amount: " << polamnt << "\n\n";
    }
    else
    {
        cout << "\nPERSON IS NOT GRANTED FOR ANY INSURANCE\n\n";
    }

     return 0;
}
