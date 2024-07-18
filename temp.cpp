
#include<iostream>

int main()
{

int num1 =5;
 std::cout<<" num1 : "<<num1<<std::endl;
int num2 =10;
 std::cout<<" num2 : "<<num2<<std::endl;

int temp = num1;
num1 = num2;
num2 = temp;

 std::cout<<" temp : "<<temp<<std::endl;
 std::cout<<" num1 : "<<num1<<std::endl;
 std::cout<<" num2 : "<<num2<<std::endl;
 
    
    return 0;
}