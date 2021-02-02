#include <iostream>
#include <string>
#include <cstring>
#include "./mystring.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //std::string Word;
    //cout << "Enter string. " << endl;
    //getline(cin, Word);
    //const char *newWord = Word.c_str();
    //for (int i = 0; i < strlen(newWord); i++)
    //{
    //   cout << newWord[i] << endl;
    //}

    //cout << "The length of the string is " << my::strlen(newWord) << endl;
    const char Password[] = "HASTA LA VISTA";
    char Passwordholder[15];
    char secondpart[10];
    char lastpart[10];

    do
    {
        cout << "Enter First part of password" << endl;
        cin >> Passwordholder;
        my::strcat(Passwordholder, " ");
        cout << "Enter Second part" << endl;
        cin >> secondpart;
        my::strcat(secondpart, " ");
        cout << "Enter last part" << endl;
        cin >> lastpart;
        my::strcat(secondpart, lastpart);
        my::strcat(Passwordholder, secondpart);
        my::toupper(Passwordholder);
        Passwordholder[14] = '\0';
        if (!my::strcmp(Passwordholder, Password))
        {
            cout << "You may go for some coffee 😉" << endl;
        }
        else
        {
            cout << "Try again!" << endl;
        }
    } while (my::strcmp(Passwordholder, Password));

    //cout << my::toupper(const_cast<char *>(newWord)) << endl;
}