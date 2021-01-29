#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

const int ARRAYSIZE = 5;

extern int global;
int local = 1234;

//sort function
void alpha_Sort(char *Arr[], size_t SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            char TEMP[50];
            if ((int)Arr[i][0] > (int)Arr[j][0])
            {
                strcpy(TEMP, Arr[i]);
                strcpy(Arr[i], Arr[j]);
                strcpy(Arr[j], TEMP);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    //std::cout << global << std::endl;
    //std::cout << local << std::endl;
    //doSomething();
    char *array[ARRAYSIZE]; //array contains addresses of DMA
    //buffer for strings
    char BUFFER[50];

    /*
    cout << "enter " << ARRAYSIZE << " strings!" << endl;
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cin >> std::setw(50) >> BUFFER;
        char *Space = new char[strlen(BUFFER)];
        strcpy(Space, BUFFER);
        array[i] = Space;
    }

    //Alphanumeric sort
    alpha_Sort(array);

    for (int i = 0; i < ARRAYSIZE; i++)
    {
        cout << array[i] << endl;
        delete[] array[i];
    }
    */
    alpha_Sort(argv, argc);
    cout << "sort commandline arguments" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
}
