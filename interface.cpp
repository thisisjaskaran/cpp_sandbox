/*

An interface is a class consisting of unimplemented methods. So that each derived class is forced to write those methods.

So, an interface is a class with a pure virtual function.

The '=0' makes the function a pure virtual function.

*/

#include<iostream>

using namespace std;

class Printable
{
public:
    virtual string GetClassName()=0;
};  

class Entity : public Printable
{
// private:
    // string e_Name;
public:
    // Entity(const string& name) : e_Name(name) {}
    virtual string GetName() {return "Entity";};
    string GetClassName() override {return "Entity";}
};

class Player : public Entity
{
private:
    string m_Name;
public:
    Player(const string& name) : m_Name(name){}
    string GetName() override { return m_Name; }
    string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)
{
    cout <<"Player Name : "<< entity->GetName() << endl;
}

void PrintClassName(Printable* obj)
{
    cout<<"Class Name : "<<obj->GetClassName()<<endl;
}

int main()
{
    Entity* e=new Entity();
    PrintName(e);

    Player* p=new Player("Cherno");
    PrintName(p);

    PrintClassName(e);
    PrintClassName(p);

    return 0;
}