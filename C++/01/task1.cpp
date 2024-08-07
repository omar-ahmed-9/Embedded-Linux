#include <iomanip>
#include <ios>
#include <iostream>
#include <ratio>
int main(int argc, const char** argv) {
 std::cout << "ASCII Code Table:" << std::endl;
    std::cout << "=================" << std::endl;
    std::cout << "Character" <<std::setw(15)  <<"ASCII Value" << std::endl;
    std::cout << "------------------------" << std::endl;
   for (int i = 0; i < 128; ++i) {
        std::cout <<static_cast<char>(i)<<std::setw(12)<<"|"<<std::setw(20) << i << std::endl;
    }
    return 0;
}