#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUFFERSIZE 1024

using std::cin;
using std::cout;
using std::endl;

// implementation of linux CP command
int main(int argc, char *argv[])
{
    // should look like cp text.cpp file.cpp
    const char *sourcefilePath = argv[1];
    const char *destinationPath = argv[2];
    size_t bytesread;

    char buffer[BUFFERSIZE];

    int fd = open(sourcefilePath, O_RDWR);
    if (fd < 0)
    {
        perror("The source file does not exist");
        exit(1);
    }
    bytesread = read(fd, buffer, BUFFERSIZE);
    int fd2 = open(destinationPath, O_RDWR | O_CREAT, 0644);
    if (fd2 > 0)
    {
        write(fd2, buffer, strlen(buffer));
    }
    else
    {
        cout << "error destination file fakap!" << endl;
    }
    close(fd);
    close(fd2);
}