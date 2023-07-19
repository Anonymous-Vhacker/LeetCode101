//
// Created by weh on 2023/6/28.
//
#pragma once

#include <algorithm>
#include "solutions.h"

namespace assign_cookies_455 {
    int Solution::findContentChildren(vector<int> &g, vector<int> &s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j])
                i++;
            j++;
        }
        return i;
    }
} // assign_cookies_455