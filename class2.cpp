#include<iostream>

// 1 type of function
void sayHello();

// 2 type of function
void printSum(int a, int b);

// 3 type of function
int getSub();

// 4 type of function
int calculation(int a, int b);

int main(){
    // Switch Case
    // int day;
    // std::cout<<"Enter Day Number:";
    // std::cin>>day;

    // switch(day){
    //    case 1:
    //     std::cout<<"Monday";
    //     break;
    //    case 2:
    //     std::cout<<"Tuesday";
    //     break;
    //    case 3:
    //     std::cout<<"Wednesday";
    //     break;
    //    case 4:
    //     std::cout<<"Thursday";
    //     break;
    //    case 5:
    //     std::cout<<"Friday";
    //     break;
    //    case 6:
    //     std::cout<<"Saturday";
    //     break;
    //    case 7:
    //     std::cout<<"Sunday";
    //     break;
    //    default:
    //     std::cout<<"Invalid Day";
    // }


    // Functions => Code Reusability
    // 4 Types
    // no return, no argument
    // no return but with argument
    // return but without argument
    // return & with argument

    // 1)
    // sayHello();
    // 2
    // printSum(4,7);
    // int num1,num2;
    // std::cout<<"Enter Number 1: ";
    // std::cin>>num1;
    // std::cout<<"Enter Number 2: ";
    // std::cin>>num2;
    // printSum(num1, num2);
    // 3
    // int result = getSub();
    // std::cout<<"Result is: "<<result*2;

    int num1,num2;
    std::cout<<"Enter Number 1: ";
    std::cin>>num1;
    std::cout<<"Enter Number 2: ";
    std::cin>>num2;
    // std::cout<<calculation(num1, num2);
    int result = calculation(num1, num2);
    std::cout<<"Result of calculation is: "<<result;
    return 0;
}

void sayHello(){
    std::cout<<"Hello, World";
}

void printSum(int a, int b){
    int result = a + b;
    std::cout<<"Result is: "<<result;
}

int getSub(){
    int result;
    result = 5-2;
    return result;
}

int calculation(int a, int b){
    return a + b;
}