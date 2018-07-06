#include <iostream>

unsigned int greatest_common_divisor(unsigned int first_number, unsigned int second_number) {
    for(auto i=first_number; i>0; --i) {
        if((first_number%i==0) and (second_number%i==0)) {
            return i;
        }
    }
    return 0;
}

int main(){
    auto first_num = 0u;
    auto second_num = 0u;
    std::cout << "insert first number \n";
    std::cin >>  first_num;
    std::cout << "insert second number \n";
    std::cin >>  second_num;
    std::cout << "GCD is " << greatest_common_divisor(first_num, second_num) << "\n";

    return 0;
}