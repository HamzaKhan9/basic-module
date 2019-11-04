#include <iostream>
using namespace std;

int main(){

    //int number;
    int num;
    int sum=0;
    cout << "ENTER NUMBER: ";
    cin >> num;
    while(num>0)
    {

        sum=sum+num%10;
        num=num/10;
    }
    cout << sum;

    return 0;
}
