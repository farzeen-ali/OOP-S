#include<iostream>
#include<string>

// Getters & Setters
// Getters => Values Get
// Setters => Values Set

class Employee {
    private:
        std::string name;
        double salary;
    public:
        void setName(std::string n){
            name = n;
        }
        std::string getName(){
            return name;
        }

        void setSalary(double s){
           if(s > 0){
            salary = s;
           } else {
            std::cout<<"Salary can't be negative!"<<std::endl;
            salary = 0;
           }
        }
        double getSalary(){
            return salary;
        }
};

int main(){
    Employee e1;

    e1.setName("Ali");
    e1.setSalary(10000.00);

    std::cout<<"Employee Name: "<<e1.getName()<<std::endl;
    std::cout<<"Employee Salary: "<<e1.getSalary()<<std::endl;
    return 0;
}
