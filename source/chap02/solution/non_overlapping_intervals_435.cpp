//
// Created by weh on 2023/6/29.
//
#pragma once

#include <algorithm>
#include "solutions.h"

namespace non_overlapping_intervals_435 {
    int Solution::eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [] (const vector<int>& a, const vector<int>& b){return a[1] < b[1];});
        int prev = 0, removeCount = 0;
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] < intervals[prev][1]) {
                removeCount++;
            } else {
                prev = i;
            }
        }
        return removeCount;
    }
} // non_overlapping_intervals_435