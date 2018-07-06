#include <iostream>
#include <numeric>
#include <vector>


int recursive_lcm_function(std::vector<int> list_of_numbers, int passed_number) {
    int current_number = list_of_numbers.back();
    list_of_numbers.pop_back();
    if(list_of_numbers.empty()) {
        return std::lcm(current_number, passed_number);
    }
    auto returned_value = recursive_lcm_function(list_of_numbers, current_number);
    return std::lcm(passed_number, returned_value);
}

int calculate_lcm_from_vector(std::vector<int> list_of_numbers) {
    if(list_of_numbers.size() < 2) {
        return 0;
    }
    auto number_to_pass_in = list_of_numbers.back();
    list_of_numbers.pop_back();
    return recursive_lcm_function(list_of_numbers, number_to_pass_in);
}

int main() {
    //need to look at why the static anyalsis didn't like first_test={9,9};
    std::vector<int> first_test;
    first_test.push_back(9);
    first_test.push_back(9);
    std::cout << "LCM of 9,9 is " << calculate_lcm_from_vector(first_test) << "\n";

    std::vector<int> second_test;
    second_test.push_back(8);
    second_test.push_back(8);
    second_test.push_back(10);
    std::cout << "LCM of 8,8,10 is " << calculate_lcm_from_vector(second_test) << "\n";
    return 0;
}