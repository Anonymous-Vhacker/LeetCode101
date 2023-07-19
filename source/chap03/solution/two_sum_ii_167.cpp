//
// Created by weh on 2023/7/19.
//
#include "solutions.h"

namespace two_sum_ii_167 {
    vector<int> Solution::twoSum(vector<int> &numbers, int target) {
        int l = 0, r = numbers.size()-1;
        while (l < r) {
            if (numbers[l] + numbers[r] > target)
                --r;
            else if (numbers[l] + numbers[r] < target)
                ++l;
            else
                break;
        }
        vector<int> result = {l+1, r+1};
        return result;
    }
} // two_sum_ii_167