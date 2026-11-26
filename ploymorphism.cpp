// Polymorphism => many + forms
// Method Overloading => Compile time polymorphism
// Method Overriding => Runtime Polymorphism

// Method Overloading
#include<iostream>

class Calculator{
    public:
        int add(int a, int b){
            return a + b;
        }
        double add(double a, double b){
            return a + b;
        }
};

int main(){
    Calculator c;
    std::cout<<"Integer Sum: "<< c.add(3, 5)<<std::endl;
    std::cout<<"Decimal Sum: "<< c.add(3.3, 5.6)<<std::endl;
}