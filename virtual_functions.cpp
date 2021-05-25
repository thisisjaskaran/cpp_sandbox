/*

We use virtual functions when we want a function in the base class to be able to be overwritten if it has to be in a derived class.
In that case, the base class function has to be made 'virtual'

Virtual function (v-table) is memory expensive.

Virtual functions have a big runtime cost.

‘override’ has to be written in the derived class functions. It was introduced in C++11

*/

#include<iostream>

using namespace std;

class Entity
{
public:
    virtual string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
    string m_Name;
public:
    Player(const string& name) : m_Name(name){}
    string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
    cout << entity->GetName() << endl;
}
int main()
{
    Entity* e=new Entity();
    PrintName(e);

    Player* p=new Player("Cherno");
    PrintName(p);

    Entity* entity=p;
    cout<<entity->GetName()<<endl;
    return 0;
}