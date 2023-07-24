//
// Created by weh on 2023/7/24.
//
#include "solutions.h"

namespace merge_sorted_array_88 {
    void Solution::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int p1 = m-1, p2 = n-1, pos = m+n-1;
        while (p1 >= 0 && p2 >= 0) {
            nums1[pos--] = nums1[p1] > nums2[p2] ? nums1[p1--] : nums2[p2--];
        }
        while (p2 >= 0) {
            nums1[pos--] = nums2[p2--];
        }
    }
} // merge_sorted_array_88