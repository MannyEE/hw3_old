#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot);

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot)
{
    if (head == nullptr) {
        return;
    }

    if (head->val <= pivot) {
        smaller->next = head;
        head = head->next;
        return llpivot(head, smaller->next, larger, pivot);
    } else if (head->val > pivot) {
        larger->next = head;
        head = head->next;
        return llpivot(head, smaller, larger->next, pivot);
    }
}