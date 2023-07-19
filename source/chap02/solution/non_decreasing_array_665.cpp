//
// Created by weh on 2023/6/30.
//
#pragma once

#include "solutions.h"

namespace non_decreasing_array_665 {
    bool Solution::checkPossibility(vector<int> &nums) {
        int size = (int)nums.size();
        if (size < 3)
            return true;
        bool changed = nums[0] > nums[1];
        for (int i = 1; i < size-1; ++i) {
            if (nums[i] > nums[i+1]) {
                if (changed)
                    return false;
                if (nums[i+1] < nums[i-1])
                    nums[i+1] = nums[i];
                else
                    nums[i] = nums[i+1];
                changed = true;
            }
        }
        return true;
    }
} // non_decreasing_array_665
