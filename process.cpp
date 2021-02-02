#include <iostream>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{

    int value = 0;
    pid_t pid = fork(); //forking new process

    if (pid == 0)
    {
        cout << "this is the child process" << endl;
    }
    else if (pid > 0)
    {
        cout << "this is the parent process" << endl;
        for (int i = 0; i < 10; i++)
        {
            value++;
            cout << value << endl;
        }
    }
    else
    {
        cout << "the fork failed" << endl;
    }
    exit(0);
}