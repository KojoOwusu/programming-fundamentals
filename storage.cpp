#include <iostream>
#include <cstring>
#include <memory>

using std::cin;
using std::cout;
using std::endl;

//function to dynamically allocate int

int *dynamic_int()
{
    int *num = new int{};
    cout << "Enter number " << endl;
    cin >> *num;
    return num;
}

char *toggle()
{
    static char STATE[] = "OFF";
    if (strcmp(STATE, "ON"))
    {
        strcpy(STATE, "ON");
    }
    else
    {
        strcpy(STATE, "OFF");
    }
    return STATE;
}

int main()
{
    /*
    int *num = dynamic_int();
    cout << "You entered " << *num << endl;
    delete num;
*/
    cout << toggle() << endl;
    cout << toggle() << endl;

    //dynamically allocating array
    std::unique_ptr<int[]> numArray(new int[]{10, 20, 30, 40, 50, 60});
    for (int i = 0; i < 6;)
    {
        cout << numArray[i] << endl;
        i += 1;
    }
}
