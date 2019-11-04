#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(0));
int minrange=5 , maxrange=20, length=15;
int RepNum=0;
int arr[length];
int maxnum=0;
int minnum=INT_MAX;

//ARRAY FILLING
for(int i=0; i<length; i++)
    arr[i]={rand()%(maxrange-minrange+1) + minrange};

//PRINTING ARRAY
for(int x=0; x<length; x++)
    cout << arr[x] << endl;

//FINDING MINIMUM NUMBER
bool b=0;
for (int z=0; z<length; z++)
    {
        for (int y=z+1; y<length; y++)
        {
            if(arr[z]==arr[y])
            {
                RepNum=RepNum+1;

            }
        }

    }
    cout << endl << RepNum;
//cout << "maximum number is " << maxnum;
//cout << "\nminimum number is " << minnum;
}


