//
// Created by weh on 2023/6/29.
//
#pragma once

#include "solutions.h"

namespace best_time_to_buy_and_sell_stock_ii_122 {
    int Solution::maxProfit(vector<int> &prices) {
        int count = 0;
        for (int i = 1; i < prices.size(); ++i)
            if (prices[i] > prices[i-1])
                count += prices[i] - prices[i-1];
        return count;
    }
} // best_time_to_buy_and_sell_stock_ii_122
