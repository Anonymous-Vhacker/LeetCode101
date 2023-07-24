//
// Created by weh on 2023/7/19.
//
#pragma once
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

void test_88() {
    merge_sorted_array_88::Solution c88_Solution;
    int m = 3, n = 3;
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    cout << "input: " << endl;
    cout << "nums1 = " << nums1 << ", m = " << m << endl;
    cout << "nums2 = " << nums2 << ", n = " << n << endl;
    c88_Solution.merge(nums1, m , nums2, n);
    cout << "result: " << nums1 << endl;
}

void test_142() {
    linked_list_cycle_ii_142::Solution c142_Solution;
    vector<int> head = {3,2,0,-4};
    CircleList list;
    list = CreateCircleLinkList(head, 1);
    PrintCircleLinkList(list);
    auto cirPoint = c142_Solution.detectCycle(list.head);
    if (cirPoint)
        cout << "circle point value: " << cirPoint->val << endl;
    else
        cout << "not circle" << endl;
    DestroyCircleLinkList(list);
}

int main() {
//    test_167();
//    test_88();
    test_142();
    return 0;
}