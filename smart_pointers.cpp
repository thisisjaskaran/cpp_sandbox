#include<iostream>
#include<memory> //for smart pointers

using namespace std;

class Entity
{
public:
    Entity()
    {
        cout<<"Created Enitity"<<endl;
    }
    ~Entity()
    {
        cout << "Destroyed Enitity" << endl;
    }
    void Print()
    {
        cout<<"Print"<<endl;
    }
};
int main()
{
    {
        shared_ptr<Entity> e0;
        {
            unique_ptr<Entity> entity=make_unique<Entity>();
            // unique_ptr<Entity> e0=entity; //cannot do this, pointer is 'unique'!

            shared_ptr<Entity> sharedEntity=make_shared<Entity>();

            e0=sharedEntity; //shared pointers keep a refcount, which is how many copies it has

            weak_ptr<Entity> weakEntity=sharedEntity; // weak pointers do the same thing as shared pointers except they don't increase the refcount
            entity->Print();
        }
    }
    return 0;
}