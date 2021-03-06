#include <iostream>
#include <string>
using namespace std;


class Animal{
    public:
        virtual void speak(){
            cout << "Animal is talking!" << endl;
        }
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "Cat is talking!" << endl;
        }
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "Dog is talking!" << endl;
        }
};

void DoSpeak(Animal* animal){
    animal->speak();
}

int main(int argc, char const *argv[])
{

    Cat cat;
    Dog dog;
    Animal* a1 = &cat; //base class and derived class can be intechangable
    Animal* a2 = &dog;
    DoSpeak(a1);
    DoSpeak(a2);

    return 0;
}

