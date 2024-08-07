#include <cmath>
#include <iostream>
int main() {
 int a,b,c;
 std::cout<<"Enter Value of A = "<<std::endl;
 std::cin>>a;
 std::cout<<"Enter Value of B = "<<std::endl;
 std::cin>>b;
 std::cout<<"Enter Value of C = "<<std::endl;
 std::cin>>c;
int SqA = std::pow(a, 2);
int SqB = std::pow(b, 2);
int SqC = std::pow(c, 2);
int longest = std::max(c , std::max(a,b));
 if (SqA + SqB == SqC && longest == c)
    std::cout<<"This Is Right Angle Triangle"<<std::endl;
 else 
 std::cout<<"This Is Not Right Angle Triangle"<<std::endl;
 
    return 0;
}