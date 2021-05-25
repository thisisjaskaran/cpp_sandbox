#include<iostream>

using namespace std;

class Entity
{
private:
    int m_X, m_Y;
    mutable int var=0;
public:
    Entity(int x,int y)
    {
        m_X=x;
        m_Y=y;
    }
    int GetX() const // promise to not modify any class variable in this function
    {
        var=2; // mutable bypasses previous promise
        return m_X;
    }
    int GetX()
    {
        return m_X;
    }
    void SetX(int x)
    {
        m_X=x;
    }
};

void PrintEntity(const Entity& e)
{
    cout<<e.GetX()<<endl;
}
int main()
{
    const int MAX_AGE=90;

    const int* const a=new int; // both pointer value, and value of pointed variable will be const

    const int* b=new int; // you can change pointed variable's value, but not reassign the pointer, i.e., make it point elsewhere
    int const* c=new int; // *exactly* the same as const int* c = new int;

    int* const d=new int; //can be reassigned, but pointed value can't be changed

    // *a=2;
    // a=(int*)&MAX_AGE; // method to bypass const promise

    Entity e(2,2);
    PrintEntity(e);
    return 0;
}