#include <iostream>
using namespace std;
int main()
{
    int stick , num=0;
    while(num<21)
    {
    cout << "PICK YOUR CHOICE OF MATCHSTICKS FROM 1-4: ";
    cin >> stick;
    num=num+stick;
    if(stick==1){
        num=num+4;
        cout << "COMPUTER PICKS 4 STICKS\n";
        }
        else if(stick==2)
        {
        num=num+3;
        cout << "COMPUTER PICKS 3 STICKS\n";
        }
        else if(stick==3)
        {
        num=num+2;
        cout << "COMPUTER PICKS 2 STICKS\n";
        }
        else if(stick==4)
        {
        num=num+1;
        cout << "COMPUTER PICKS 1 STICKS\n";
        }
        if(num==21){break;}
        cout << "STICKS TOTAL PICKED" << num;
    }
    cout << "you picked the last matchstick";
}
