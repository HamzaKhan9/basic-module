#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char input;
    cout << "ENTER AN UPPER CASE ALPHABET TO KNOW THAT IS IT A VOWEL OR NOT = "; cin >> input;
    switch(input)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "\n\n ITS A VOWEL";
    break;
    default :
        cout << "\n\n ITS A CONSONANT";
        }
        return 0;
}
