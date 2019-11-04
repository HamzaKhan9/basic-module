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

    int root=sqrt(x);
    bool boolean=0;
    for(int i=2;i<root+1;++i)
    {
        prime=x%i;
        if(prime==0)
        {
            boolean=1;
            break;
        }
    }
    if(boolean==0)
        cout << endl << x;
    //else
        //cout << "THIS IS A PRIME NUMBER";
    }
}
