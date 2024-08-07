#include <bitset>
#include <cmath>
#include <iostream>
#include <string>


void toBinary(unsigned deciNum){
std::cout<<std::bitset<8>{deciNum}<<std::endl;
}

int binaryToDecimal(std::string binaryno) {
    int decimal = 0;
    int power = 0;
    for (int i = binaryno.length() - 1; i >= 0; --i) {
        int bit = binaryno[i] - '0';
        decimal += bit * pow(2, power);
        power++;
        }
        return decimal;

}    
int main(){
unsigned x;
std::string binaryno;
std::cout<<"Enter The Decimal Value :"<<std::endl;
std::cin>>x;
toBinary(x);
std::cout<<"Enter The Binary Number :"<<std::endl;
std::cin>>binaryno;
 int decimalNumber = binaryToDecimal(binaryno);

std::cout<<decimalNumber<<std::endl;
    return 0;
}
