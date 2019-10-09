#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "ENTER THE NUMBER YOU WANT TO KNOW THAT IT IS EVEN OR ODD="; cin >> num;
    if(num%2==0)
    {
        cout << "\nTHE NUMBER IS EVEN";
    }
    else
    {
        cout << "\nTHE NUMBER IS ODD";
    }
    return 0;
}

