#include<iostream>

using namespace std;

class Entity
{
private:
    int m_X, m_Y;
public:
    int GetX() const
    {
        return m_X;
    }
    void SetX(int x)
    {
        m_X=x;
    }
}
int main()
{
    const int MAX_AGE=90;

    const int* const a=new int; // both pointer value, and value of pointed variable will be const

    const int* b=new int; // you can change pointed variable's value, but not reassign the pointer, i.e., make it point elsewhere
    int const* c=new int; // *exactly* the same as const int* c = new int;

    int* const d=new int; //can be reassigned, but pointed value can't be changed
    
    *a=2;
    a=(int*)&MAX_AGE; // method to bypass const promise
    return 0;
}