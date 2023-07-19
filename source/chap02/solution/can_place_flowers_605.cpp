//
// Created by weh on 2023/6/29.
//
#pragma once

#include "solutions.h"

namespace can_place_flowers_605 {
    bool Solution::canPlaceFlowers(vector<int> &flowerbed, int n) {
        int flowerCount = 0, prev = -2;
        int size = (int)flowerbed.size();
        for (int i = 0; i <size; i++) {
            if (flowerbed[i] == 1) {
                flowerCount += (i - prev - 2) / 2;
                prev = i;
            }
        }
        flowerCount += (size -1 - prev) / 2;
        return n <= flowerCount;
    }
} // non_overlapping_intervals_435