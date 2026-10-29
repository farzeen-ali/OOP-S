#include<iostream>
#include<string>

// naming convention
// Camel Case => firstName (variables, objects)
// Pascal Case => FirstName (Class)

class Student{
    public:
        std::string name;
        int rollNo;
        float marks;

        void displayStudentInfo(){
            std::cout<<"-------- Student Info --------"<<std::endl;
            std::cout<<"Student Name: "<< name << std::endl;
            std::cout<<"Student Roll no: "<< rollNo << std::endl;
            std::cout<<"Student Marks: "<< marks << std::endl;
        }
};

int main(){
    Student ali;
    Student farzeen;

    ali.name = "Ali";
    ali.marks = 78.5;
    ali.rollNo = 123;

    ali.displayStudentInfo();

    farzeen.name = "Farzeen";
    farzeen.marks = 88.5;
    farzeen.rollNo = 321;

    farzeen.displayStudentInfo();
    return 0;
}