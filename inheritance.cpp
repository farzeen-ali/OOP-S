// Parent Class => (inherit) Child Class
// 4: Single, Multilevel, Multiple, Hierarchical

#include<iostream>

class Animal{
    public:
        void eat(){
            std::cout<<"Eats"<<std::endl;
        }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout<<"Barks"<<std::endl;
        }
};

int main(){
    Dog d;
    d.eat();
    d.bark();
    return 0;
}