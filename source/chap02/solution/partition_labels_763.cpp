//
// Created by weh on 2023/6/29.
//
#pragma once

#include <map>
#include <algorithm>
#include "solutions.h"

namespace partition_labels_763 {
    vector<int> Solution::partitionLabels(std::string s) {
        vector<int> result;
        map<char, int> sMap;
        int start = 0, end = 0;
        for (auto i = 0; i < s.length(); ++i) {
            sMap[s[i]] = i;
        }
        for (auto i = 0; i < s.length(); ++i) {
            end = max(sMap[s[i]], end);
            if (i == end) {
                result.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return result;
    }
} // partition_labels_763
