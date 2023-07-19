//
// Created by weh on 2023/6/29.
//
#pragma once

#include <algorithm>
#include "solutions.h"

namespace queue_reconstruction_by_height_406 {
    vector<vector<int>> Solution::reconstructQueue(vector<vector<int>> &people) {
        vector<vector<int>> result;
        sort(people.begin(), people.end(), [](const vector<int>& p1, const vector<int>& p2){
            if (p1[0] > p2[0])
                return true;
            else if (p1[0] == p2[0])
                return p1[1] < p2[1];
            else
                return false;
        });
        for (const auto & i : people) {
            result.insert(result.begin() + i[1], i);
        }
        return result;
    }
} // queue_reconstruction_by_height_406