#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char ch;
    int x;
    cout << "\n\nENTER THE CHARACTER YOU WANT TO KNOW IS UPPER CASE LETTER, LOWER CASE LETTER, DIGIT OR A SPECIAL CHARACTER = ";
    cin >> ch;
    x= int(ch);
    if(x>=48&&x<=57)
    {
        cout << "\n\n       IT'S A DIGIT";
    }
    else if(x>=97&&x<=112)
    {
        cout << "\n\n       IT'S A LOWER CASE LETTER";
    }
    else if(x>=65&&x<=90)
    {
        cout << "\n\n       IT'S AN UPPER CASE LETTER";
    }
    else
    {
        cout << "\n\n       IT'S A SPECIAL SYMBOL";
    }
    return 0;
}

