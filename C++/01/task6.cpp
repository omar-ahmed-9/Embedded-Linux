#include <iostream>
#include <string>
int main(){
int number;
std::cout<<"Enter The Number: "<<std::endl;
std::cin>>number;
std::string xx = std::to_string(number);;
int sum= 0;
for(char digitChar : xx){
int digit = digitChar - '0';
sum = sum + digit;
}
std::cout<<"The Summition = "<<sum<<std::endl;
    return 0;
}