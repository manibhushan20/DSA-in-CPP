#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character:";
    cin >> ch;
    if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "The character is vowel.";
        }
        else
        {
            cout << "The character is consonant.";
        }
    }
        else
        {
            cout << "The character is not an alphabet.";
        }
    
}