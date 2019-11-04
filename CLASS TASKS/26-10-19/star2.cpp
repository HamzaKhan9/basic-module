#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num , space , z=1;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> num;
    int snum=num;
    for(int x=0;x<num;++x)
    {
        for(int i=snum;i>0;--i)
        {
            cout << " ";
        }
        snum=snum-1;
        for(int y=1;y<=z;++y)
        {
            cout << "*";
        }
        z=z+2;

        cout << endl;
    }
}
