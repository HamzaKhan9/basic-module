#include <iostream>
using namespace std;

int main()
{
    int num1 , num2, pow=1 ;
    int i=0;
    cout << "ENTER NUMBER ON WHICH POWER IS RAISE TO: ";
    cin >> num1;
    cout << "ENTER POWER: ";
    cin >> num2;
    while(i<num2)
    {
        i=i+1;
        pow=pow*num1;

    }
    cout << endl << "ANSWER: " << pow;



}
