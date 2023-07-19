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


#endif //SOLUTIONS_H
