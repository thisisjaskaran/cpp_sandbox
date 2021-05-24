#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int var = 8;
    void *ptr = &var;
    cout << ptr << endl;

    char *buffer = new char[8];
    memset(buffer, 0, 8);

    char **double_ptr = &buffer;

    delete[] buffer;

    return 0;
}