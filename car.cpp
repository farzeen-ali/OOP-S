#include<iostream>
#include<string>

class Car {
    public:
        std::string brand;
        int year;

        void showCarDetails(){
            std::cout<<"------- Car Details ------ "<<std::endl;
            std::cout<<"Car Brand: "<< brand<< std::endl;
            std::cout<<"Model Year: "<< year<< std::endl;
        }
};

int main(){
    Car c1;

    std::cout<<"Enter Car Brand: ";
    std::cin>> c1.brand;
    std::cout<<"Enter Manufacturing Year: ";
    std::cin>> c1.year;

    c1.showCarDetails();
}
