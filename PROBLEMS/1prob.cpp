#include <iostream>
using namespace std;
int main()
{
    int num , mnum , total=1;
    int i=0;
    cout << "ENTER YOUR NUMBER: ";
    cin >> num;
    mnum=num;
    while(i<num)
    {
        total=total*mnum;
        mnum=mnum-1;
        i=i+1;
    }
    cout << endl <<"FACTORIAL VALUE: " << total;
}
