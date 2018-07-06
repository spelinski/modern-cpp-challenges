#include <iostream>

int sum_of_divisibles_up_to_number(unsigned int up_to_number) {
    auto sum = 0;
    for(auto i=0u; i <= up_to_number; ++i) {
        if((i%3==0) or (i%5==0)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    auto number_to_go_to = 0;
    std::cout << "insert number to go to\n";
    std::cin >> number_to_go_to;
    std::cout << sum_of_divisibles_up_to_number(number_to_go_to) << "\n";
    return 0;
}
