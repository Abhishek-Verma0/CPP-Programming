// function overriding??
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "The animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->speak(); 
    delete animal;
    return 0;
}