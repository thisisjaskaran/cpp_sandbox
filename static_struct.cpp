#include<iostream>

using namespace std;

struct Entity
{
    int x,y;
    static void print()
    {
        cout<<x<<","<<y<<endl;
    }
};

// int Entity::x;
// int Entity::y;

int main()
{
    Entity e;
    e.x=2;
    e.y=3;

    Entity e1;
    e1.x=5;
    e1.y=8;

    // Entity::x = 5;
    // Entity::y = 8;

    e.print();
    e1.print();
    Entity::print();

    return 0;
}