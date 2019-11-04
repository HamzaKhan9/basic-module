#include <iostream>
using namespace std;
int main(){
for(int y=0;y<=3;++y)
{
    for(int x=0;x<=6;++x)
    {
        if(x>=3-y && x<=y+3)
            cout << "*";
        else cout << " ";
    }
    cout << endl;
}
}
