#include <cctype>
#include <iostream>
#include <string>


void isVowel(char letter){
    switch (std::tolower(letter)) {
    case 'a' : case 'o': case 'u': case 'i' : case 'e':
    std::cout<<"Vowel"<<std::endl;
    break;
    default:
    std::cout << "Not Vowel"<<std::endl;
   }
}
int main(){
char letter;
std::cout<<"Enter letter: "<<std::endl;
std::cin>>letter;
isVowel(letter);
    return 0;
}
