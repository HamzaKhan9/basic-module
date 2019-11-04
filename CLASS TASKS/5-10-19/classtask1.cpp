#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int days;
    float fine;
    cout << "ENTER THE NUMBER OF DAYS BOOK IS USED="; cin >> days;
    if(days<=5)
    {
        fine=days*0.5;cout << "YOUR FINE IS=" << fine;
    }
    else if(days>5&&days<=10)
    {
        fine=((days-5)*1)+2.5; cout << "YOUR FINE IS=" << fine;
    }
    else if(days>10&&days<=30)
    {
        fine=((days-10)*5)+7.5;cout << "YOUR FINE IS=" << fine;
    }
    else
    {
        cout << "YOUR MEMBERSHIP IS CANCELLED";
    }
    return 0;
}
