//
// Created by weh on 2023/6/29.
//
#pragma once

#include <algorithm>
#include "solutions.h"

namespace minimum_number_of_arrows_452 {
    int Solution::findMinArrowShots(vector<vector<int>> &points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){return a[1] < b[1];});
        int size = (int)points.size();
        int prev = 0, removeCount = 0;
        for (int i = 1; i < size; ++i) {
            if (points[i][0] <= points[prev][1]) {
                removeCount++;
            } else {
                prev = i;
            }
        }
        return size - removeCount;
    }

    int Solution::findMinArrowShots2(vector<vector<int>> &points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){return a[1] < b[1];});
        int size = (int)points.size();
        int prev = 0, needCount = 1;
        for (int i = 1; i < size; ++i) {
            if (points[i][0] > points[prev][1]) {
                prev = i;
                needCount++;
            }
        }
        return needCount;
    }
} // minimum_number_of_arrows_452