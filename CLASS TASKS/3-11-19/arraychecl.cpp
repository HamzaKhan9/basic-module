#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(0));
int minrange=5 , maxrange=30, length=10;
int arr[length];
int minnum=INT_MAX;

//ARRAY FILLING
for(int i=0; i<length; i++)
    arr[i]={rand()%(maxrange-minrange+1) + minrange};

//PRINTING ARRAY
for(int x=0; x<length; x++)
    cout << arr[x] << endl;

//FINDING MINIMUM NUMBER
for (int z=0; z<length; z++)
    if(minnum>arr[z])
        minnum=arr[z];

cout << "minimum number is " << minnum;
}
