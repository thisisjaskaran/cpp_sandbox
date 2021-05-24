#include <iostream>

using namespace std;

int main()
{
    int var = 8;
    void *ptr = &var;
    cout << ptr << endl;
    return 0;
}