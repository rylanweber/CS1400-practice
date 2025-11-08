#include <iostream>
#include <vector>

using namespace std;

class Animal {
    public:
        void speak() {
            cout << "insert animal sound\n";
        }
        ~Animal() {
            cout << "animal DELETED\n";
        }
};
class Dog : public Animal {
    void speak() {
        cout << "woof\n";
    }
    ~Dog() {
        cout << "dog DELETED\n";
    }
};
class Cat : public Animal {
    void speak() {
        cout << "meow\n";
    }
    ~Cat() {
        cout << "cat DELETED\n";
    }
};

int main() {
    vector<Animal*> pets;
    pets.push_back(new Dog());
    pets.push_back(new Cat());

    for(Animal* pet : pets) {
        pet->speak();
    };

    for(Animal* pet : pets) {
        delete pet;
    };

    return 0;
};