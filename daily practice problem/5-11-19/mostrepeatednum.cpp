#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(0));
int minrange=5 , maxrange=10, length=10;
int counter , maxcounter=0 , mainnum;
int arr[length];

//ARRAY FILLING
for(int i=0; i<length; i++)
    arr[i]={rand()%(maxrange-minrange+1) + minrange};

//PRINTING ARRAY
for(int x=0; x<length; x++)
    cout << arr[x] << endl;

//FINDING MOST OCCURING NUMBER
for (int z=0; z<length; z++)
    {
    counter=0;
    for (int y=z+1; y<length; y++)
        {
        if(arr[y] == arr[z])
            {
            counter=counter+1;
            if(counter > maxcounter)
                {
                mainnum = arr[z];
                counter = maxcounter;
                }
            }
        }
    }
    cout << "Most Repeated number is: " <<  mainnum;
}


