// Polymorphism => Method Overriding

#include<iostream>
class Animal{
    public:
        virtual void sound(){
            std::cout<<"Animal Sound Method!"<<std::endl;
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            std::cout<<"Dog Sound Method!"<<std::endl;
        }
};

int main(){
    Animal* ptr;
    Dog d;
    ptr = &d;
    ptr->sound();
}