#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(0));
int minrange=5 , maxrange=50, length=10;
int arr[length];
int maxnum=0;
int minnum=0;

//ARRAY FILLING
for(int i=0; i<length; i++)
    arr[i]={rand()%(maxrange-minrange+1) + minrange};

//PRINTING ARRAY
for(int x=0; x<length; x++)
    cout << arr[x] << endl;

    cout << endl << endl <<  "ASCENDING LIST\n";

//FINDING MINIMUM NUMBER
int detect;
for(int y=0;y<length;y++)
{
    minnum=INT_MAX;
    for(int z=y;z<length;z++)
    {
    if(minnum<arr[z]){
        minnum=arr[z];
        detect=z;
    }
    }
    int temp=arr[detect];
        arr[detect]=arr[y];
        arr[y]=temp;

}
for(int x=0; x<length; x++)
    cout << arr[x] << endl;
}

