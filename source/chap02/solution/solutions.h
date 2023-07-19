//
// Created by weh on 2023/6/28.
//
#pragma once

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>
#include <utility>
using namespace std;

namespace py_pr{
    template<typename T>
    inline ostream& out_put(ostream& o, const T & x){
        return o<<x;
    }
    inline ostream& out_put(ostream& o, const char* & x){
        return o<<"\""<<x<<"\"";
    }
    inline ostream& out_put(ostream& o, const char & x){
        return o<<"\'"<<x<<"\'";
    }
    template<typename T1,typename T2>
    inline ostream& out_put(ostream& o, const pair<T1,T2> & x){
        out_put(o,x.first);
        o<<": ";
        out_put(o,x.second);
        return o;
    }
} // py_pr

template <typename T>
ostream& operator<<(ostream &o, const vector<T> &x) {
    o<<"[";
    for (auto it=x.begin(); it!=x.end(); ++it) {
        if (it != x.begin())
            o<<", ";
        py_pr::out_put(o, *it);
    }
    o<<"]";
    return o;
}


namespace assign_cookies_455 {
    class Solution {
    public:
        int findContentChildren(vector<int>& g, vector<int>& s);
    };
} // assign_cookies_455

namespace candy_135 {
    class Solution {
    public:
        int candy(vector<int>& ratings);
    };
} // candy_135

namespace non_overlapping_intervals_435 {
    class Solution {
    public:
        int eraseOverlapIntervals(vector<vector<int>>& intervals);
    };
} // non_overlapping_intervals_435

namespace can_place_flowers_605 {
    class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n);
    };
} // can_place_flowers_605

namespace minimum_number_of_arrows_452 {
    class Solution {
    public:
        int findMinArrowShots(vector<vector<int>>& points);
        int findMinArrowShots2(vector<vector<int>>& points);
    };
} // minimum_number_of_arrows_452

namespace partition_labels_763 {
    class Solution {
    public:
        vector<int> partitionLabels(string s);
    };
} // partition_labels_763

namespace best_time_to_buy_and_sell_stock_ii_122 {
    class Solution {
    public:
        int maxProfit(vector<int>& prices);
    };
} // best_time_to_buy_and_sell_stock_ii_122

namespace queue_reconstruction_by_height_406 {
    class Solution {
    public:
        vector<vector<int>> reconstructQueue(vector<vector<int>>& people);
    };
} // queue_reconstruction_by_height_406

namespace non_decreasing_array_665 {
    class Solution {
    public:
        bool checkPossibility(vector<int> &nums);
    };
} // non_decreasing_array_665

#endif //SOLUTION_H
