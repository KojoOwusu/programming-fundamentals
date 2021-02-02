#include <iostream>
#include "./mystring.h"

using std::cin;
using std::cout;
using std::endl;

//definitions for my string methods
namespace my
{
    int strlen(const char *s)
    {
        int count = 0;
        int i = 0;
        while (s[i] != '\0')
        {
            count++;
            i++;
            //cout << s[i] << endl;
        }
        return count;
    }

    int strcmp(const char *l, const char *r)
    {
        int i = 0;
        while (l[i] != '\0')
        {
            if (l[i] == r[i])
                i++;
            else
            {
                return 1;
            }
        }
        return 0;
    }
    //          0  1  2  3  4   5
    //strcat    [h][e][l][l][0][\0][][][][]
    char *strcat(char *l, const char *r)
    {
        //getsize of first + second //new buffer/container

        int size = strlen(l) + strlen(r) + 1;
        char *newContainer = new char[size];
        int endindex = strlen(l);
        for (int i = 0; i < size; i++)
        {
            if (i < endindex)
            {
                newContainer[i] = l[i];
            }
            else
            {
                newContainer[i] = r[i - endindex];
            }
        }
        newContainer[size - 1] = '\0';
        std::memcpy(l, const_cast<char *>(newContainer), size);
        delete[] newContainer;
        return l;
    }

    char *strcpy(char *l, const char *r)
    { //if r is shorter than l, r is longer than l

        if (strlen(l) >= strlen(r))
        {
            int i = 0;
            while (l[i] != '\0')
            {
                if (i <= strlen(r))
                {
                    l[i] = r[i];
                    i++;
                }
                else
                {
                    l[i] = '\0';
                }
            }
            return l;
        }
        else
        {
            int size = strlen(r);
            char *temp = new char[size];
            int i = 0;
            while (r[i] != '\0')
            {
                temp[i] = r[i];
                i++;
            }
            std::memcpy(l, const_cast<char *>(temp), size);
            delete[] temp;
            return l;
        }
    }

    char *toupper(char *s)
    {
        int i = 0;
        while (s[i] != '\0')
        {
            if ((int)s[i] >= 97 && (int)s[i] <= 122)
            {
                s[i] = (int)s[i] - 32;
            }
            i++;
        }
        return s;
    }
} // namespace my
