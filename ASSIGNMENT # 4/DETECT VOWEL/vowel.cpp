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
        cout << "\n\n ITS A VOWEL";
    break;
    case 'E':
        cout << "\n\n ITS A VOWEL";
    break;
    case 'I':
        cout << "\n\n ITS A VOWEL";
    break;
    case 'O':
        cout << "\n\n ITS A VOWEL";
    break;
    case 'U':
        cout << "\n\n ITS A VOWEL";
    break;
    default :
        cout << "\n\n ITS A CONSONANT";
        }
        return 0;
}
