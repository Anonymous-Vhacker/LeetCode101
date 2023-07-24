//
// Created by weh on 2023/7/19.
//

#ifndef SOLUTIONS_H
#define SOLUTIONS_H

#include <iostream>
#include <vector>
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

namespace two_sum_ii_167 {
    class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target);
    };
} // two_sum_ii_167

namespace merge_sorted_array_88 {
    class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
    };
} // merge_sorted_array_88

#endif //SOLUTIONS_H
