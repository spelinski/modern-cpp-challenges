#include <iostream>

unsigned int greatest_common_divisor(unsigned int smaller_number, unsigned int larger_number) {
    for(auto i=smaller_number; i>0; --i) {
        if((smaller_number%i==0) and (larger_number%i==0)) {
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

    if(first_num < second_num) {
        std::cout << "GCD is " << greatest_common_divisor(first_num, second_num) << "\n";
    } else {
        std::cout << "GCD is " << greatest_common_divisor(second_num, first_num) << "\n";
    }

    return 0;
}