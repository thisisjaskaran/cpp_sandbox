#include<iostream>

using namespace std;

class Singleton
{
private:
    static Singleton* s_instance;
public:
    static Singleton& Get()
    {
        return *s_instance;
    }
    void Hello()
    {}
};

Singleton* Singleton::s_instance=nullptr;

void foo()
{
    static int i=0;
    i++;
    cout<<i<<endl;
}

int main()
{
    Singleton::Get().Hello();
    return 0;
}