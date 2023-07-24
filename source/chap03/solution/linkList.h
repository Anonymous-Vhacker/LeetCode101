//
// Created by weh on 2023/7/24.
//

#ifndef CHAP03_LINKLIST_H
#define CHAP03_LINKLIST_H

#pragma once
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    explicit ListNode(int x) : val(x), next(NULL) {}
};

struct CircleList {
    int len;
    int circlePoint;
    ListNode *head;
    CircleList() : len(0), circlePoint(0), head(NULL) {}
};

static ListNode* CreateLinkList(vector<int> &list) {
    auto * head = new ListNode(0);
    ListNode * tail = head;
    for (auto &it: list) {
        auto * newNode = new ListNode(it);
        tail->next = newNode;
        tail = tail->next;
    }
    ListNode * p = head;
    head = head->next;
    delete p;
    return head;
}

static void DestroyLinkList(ListNode* head) {
    while (head != NULL) {
        ListNode* p = head->next;
        delete head;
        head = p;
    }
}

static void PrintLinkList(ListNode* head) {
    cout << "list = [";
    ListNode * p = head;
    bool first = true;
    while (p) {
        if (!first)
            cout << ", ";
        first = false;
        cout << p->val;
        p = p->next;
    }
    cout << "]" << endl;
}

static CircleList CreateCircleLinkList(vector<int> &list, int circlePoint) {
    CircleList l = CircleList();
    auto * head = new ListNode(0);
    ListNode * tail = head;
    if (circlePoint > int(list.size())) {
        return l;
    }
    for (auto &it: list) {
        auto * newNode = new ListNode(it);
        tail->next = newNode;
        tail = tail->next;
    }

    ListNode * p = head;
    head = head->next;
    delete p;
    p = head;
    for (int i = 0; i < circlePoint; ++i)
        p = p->next;
    tail->next = p;

    l.len = int(list.size());
    l.circlePoint = circlePoint;
    l.head = head;
    return l;
}

static void DestroyCircleLinkList(CircleList list) {
    ListNode * p = list.head;
    ListNode * q;
    for (int i = 0; i < list.len; ++i) {
        if (p) {
            q = p->next;
            delete p;
            p = q;
        }
    }
}

static void PrintCircleLinkList(CircleList list) {
    cout << "len = " << list.len << ",circlePoint = " << list.circlePoint << endl;
    cout << "list = [";
    ListNode * p = list.head;
    for (int i = 0; i < list.len; ++i) {
        if (i > 0)
            cout << ", ";
        cout << p->val;
        p = p->next;
    }
    cout << "]" << endl;
}

#endif //CHAP03_LINKLIST_H
