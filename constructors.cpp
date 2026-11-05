#include<iostream>
#include<string>

// Constructor => Special Method
// Same Name Class
// No Return Type (infact void)
// Automatically Call (Object Create)

// Types => 3 Types => 1) Default Constructor 2) Parameterized Constructor 3) Copy Constructor

class Student{
    public:
        std::string name;
        int rollNo;

        // Default Constructor
        Student(){
            name = "Guest";
            rollNo = 000;
            std::cout<<"Default Constructor"<<std::endl;
        }

        // Paramterized Constructor
        Student(std::string n, int r){
            name = n;
            rollNo = r;
            std::cout<<"Paramterized Constructor"<<std::endl;
        }

        // Copy Constructor
        Student(const Student &obj){
            name = obj.name;
            rollNo = obj.rollNo;
            std::cout<<"Copy Constructor"<<std::endl;
        }

        void displayInfo(){
            std::cout<<"Name: "<<name<<", RollNo: "<<rollNo<<std::endl;
        }

};

int main(){
    Student s1;
    s1.displayInfo();

    Student s2("Farzeen", 10);
    s2.displayInfo();

    Student s3 = s2;
    s3.displayInfo();
}