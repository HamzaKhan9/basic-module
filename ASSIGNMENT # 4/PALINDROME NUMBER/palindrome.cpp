#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num , num1 , num2 , num4 , num5;
    cout << "\nENTER A FIVE DIGIT NUMBER WHICH YOU WANT TO KNOW IS PALINDROME OR NOT ="; cin >> num;
    num5=num%10;
    num4=(num/10)%10;
    num2=(num/1000)%10;
    num1=(num/10000)%10;
    if(num1==num5&&num2==num4)
    {
        cout << "\n\nTHE ABOVE NUMBER IS A PALINDROME NUMBER";
    }
    else
    {
        cout << "\n\nTHE ABOVE NUMBER IS NOT A PALINDROME NUMBER";
    }
    return 0;
}
