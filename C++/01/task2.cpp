#include <iostream>


int main(){
    int x,y,z;
    std::cout<<" Please Enter 3 Numbers : "<<std::endl;
    std::cin>>x>>y>>z;
    int largest = std::max(z,std::max(x,y));
    std::cout<<"The Maximum Values= "<<largest<<std::endl;
}