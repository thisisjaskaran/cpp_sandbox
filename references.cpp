#include<iostream>

using namespace std;

void Increment(int *value)
{
    (*value)++;
}
int main()
{
    int a=5;
    Increment(&a);
    cout<<a<<endl;
    int& ref=a;
    ref=2;
    cout<<ref<<endl;
    return 0;
}