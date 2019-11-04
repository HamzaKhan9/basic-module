#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1 ;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> num1;
    for(int x=0;x<num1;++x)
    {
        for(int i=0;i<x+1;++i)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}
