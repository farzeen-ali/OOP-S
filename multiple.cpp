#include<iostream>

class Walker{
    public:
        void walk(){
            std::cout<<"Walks"<<std::endl;
        }
};
class Swimmer{
    public:
        void swim(){
            std::cout<<"Swims"<<std::endl;
        }
};
class Duck : public Swimmer, public Walker{
    public:
        void display(){
            std::cout<<"Duck Features: "<<std::endl;
        }
};

int main(){
    Duck d;
    d.display();
    d.walk();
    d.swim();
    return 0;
}