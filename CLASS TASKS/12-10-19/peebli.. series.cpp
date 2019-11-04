#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,ans;
    cout << "RNTER NUMBER: ";
    cin >> num;
    int root = sqrt(num);
    bool boolean=0;
    for(int i=2; i<root + 1; ++i)
    {
    ans=num%i;
    if(ans==0)
    {
        boolean=1;
        break;
    }
    }
    if(boolean=1)
    {
    cout << "IT IS NOT A PRIME NUMBER";
    }
    else
    {
        cout << "IT IS A PRIME NUMBER";
    }
}
