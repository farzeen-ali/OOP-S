#include<iostream>
// A => B => C
class GrandParent{
    public:
        void sayHello(){
            std::cout<<"Hello"<<std::endl;
        }
};
class Parent : public GrandParent{
    public:
        void greetings(){
            std::cout<<"Good Morning"<<std::endl;
        }
};
class Child : public Parent{
    public:
        void sayGoodBye(){
            std::cout<<"Good Bye"<<std::endl;
        }
};

int main(){
    Child c;
    c.sayHello(); // Grand Parent Class
    c.greetings(); // Parent Class
    c.sayGoodBye(); // Child Class
    return 0;
}

