#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int mnum , num ;
    int total=0;
    cout << "ENTER NUMBER: ";
    cin >> mnum;
    num=mnum;
    while(num>0)
    {
            total=total+pow(num%10,3);
            num=num/10;
    }
    cout << total << endl << mnum;
    if(total==mnum)
    {
        cout << endl << "THIS NUMBER IS AN AMSTRONG NUMBER";
    }
    else
    {
        cout << endl << "THIS NUMBER IS NOT AN AMSTRONG NUMBER";
    }


}
