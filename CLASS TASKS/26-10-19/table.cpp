
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1 , num2 , prime;
    cout << "ENTER THE STARTING RANGE: ";
    cin >> num1;
    cout << "ENTER THE ENDING RANGE: ";
    cin >> num2;
    for(int x=num1;x<num2+1;++x)
    {
        for(int i=1;i<11;++i)
    {
            cout << x << "*" << i << "=" << x*i << " ";
    }
    cout << endl;
    }
}
