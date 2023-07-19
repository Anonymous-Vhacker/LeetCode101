//
// Created by weh on 2023/6/29.
//
#pragma once

#include <numeric>
#include "solutions.h"

namespace candy_135 {
    int Solution::candy(vector<int> &ratings) {
        vector<int> candies(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i] > ratings[i-1])
                candies[i] = candies[i-1] + 1;
        }
        for (int i = ratings.size()-2; i >= 0; i--) {
            if (ratings[i] > ratings[i+1] && candies[i] <= candies[i+1])
                candies[i] = candies[i+1] + 1;
        }
        return accumulate(candies.begin(), candies.end(), 0);
    }

} // candy_135
