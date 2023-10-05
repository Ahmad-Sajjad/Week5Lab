#include <iostream>
using namespace std;

string checkAlphabetCase(char alphabet);
main()
{
    char alphabet;
    string final;
    cout << "Enter a character (A/a): ";
    cin >> alphabet;
    checkAlphabetCase(alphabet);
    final = checkAlphabetCase(alphabet);
    cout << final;
}
string checkAlphabetCase(char alphabet)
{
    if (alphabet == 'a')
    {
        return "You have entered small a";
    }
    if (alphabet == 'A')
    {
        return "You have entered Capital A";
    }
}