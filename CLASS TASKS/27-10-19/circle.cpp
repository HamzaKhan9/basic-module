#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x , y;
for(y=0;y<=8;++y)
{
    for(x=0;x<=4;++x)
    {
        if(x==sqrt((36-9*pow(y,2))/4))
           cout << "*";
           else
            cout << " ";
    }
    cout << endl;
}
}
