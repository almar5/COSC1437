#include <iostream>
#include <string>

using namespace std;

class WeenieDog {
private:
    string name;
    int age;
public:
    WeenieDog(string n, int a) : name(n), age(a) {}

    void bark() {
        cout << "Woof woof! I'm " << name << ", the weenie dog!" << endl;
    }

    void eat() {
        cout << "Yum yum! I love my dog food!" << endl;
    }

    void ageInHumanYears() {
        int humanAge = age * 7;
        cout << "I am " << humanAge << " years old in human years!" << endl;
    }
};

class Cat {
private:
    string name;
    string color;
public:
    Cat(string n, string c) : name(n), color(c) {}

    void meow() {
        cout << "Meow! I'm " << name << ", the " << color << " cat!" << endl;
    }

    void sleep() {
        cout << "Zzz... Don't disturb me, I'm sleeping." << endl;
    }

    void purr() {
        cout << "Purr purr... Life is good." << endl;
    }
};

class Hamster {
private:
    string name;
    string furColor;
public:
    Hamster(string n, string fc) : name(n), furColor(fc) {}

    void squeak() {
        cout << "Squeak squeak! I'm " << name << ", the hamster!" << endl;
    }

    void run() {
        cout << "Running on my wheel! Gotta stay in shape." << endl;
    }

    void hide() {
        cout << "Peekaboo! You can't see me in my cozy hideout." << endl;
    }
};

int main() {
    WeenieDog dog("Slinky", 5);
    dog.bark();
    dog.eat();
    dog.ageInHumanYears();

    Cat cat("Whiskers", "grey");
    cat.meow();
    cat.sleep();
    cat.purr();

    Hamster hamster("Nibbles", "brown");
    hamster.squeak();
    hamster.run();
    hamster.hide();

    return 0;
}
