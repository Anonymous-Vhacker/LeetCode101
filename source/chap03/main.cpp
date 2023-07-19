//
// Created by weh on 2023/7/19.
//
#include "solutions.h"

void test_167() {
    two_sum_ii_167::Solution c167_Solution;
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    cout << "input: " << endl;
    cout << "numbers = " << numbers << endl;
    cout << "target = " << target << endl;
    auto result = c167_Solution.twoSum(numbers, target);
    cout << "result = " << result << endl;
}

int main() {
    test_167();
    return 0;
}