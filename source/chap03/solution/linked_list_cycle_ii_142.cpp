//
// Created by weh on 2023/7/24.
//
#include "solutions.h"

namespace linked_list_cycle_ii_142 {
    ListNode *Solution::detectCycle(ListNode *head) {
        ListNode * fast = head, * slow = head;
        do {
            if (!fast || !fast->next)
                return NULL;
            else {
                fast = fast->next->next;
                slow = slow->next;
            }
        } while (fast != slow);
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
} // linked_list_cycle_ii_142