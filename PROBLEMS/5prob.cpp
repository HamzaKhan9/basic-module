#include <iostream>
#include <cmath>
using namespace std;
int main(){
int num , rem=0 , i=0;
double ans=0;
cout << "ENTER ANY POSITIVE INTEGER: ";
cin >> num;
while(num>=1) {
    rem=num%2;
    ans=ans+(rem*pow(10.0,i));
    num=num/2;
    i=i+1;
}
    cout << ans;
}
