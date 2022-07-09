#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void deleteNode(ListNode* node) {
    ListNode* tmp = node, * prev = nullptr;

    while (tmp != nullptr) {
        if (tmp->next == nullptr) {
            prev->next = nullptr;
            delete tmp;
            break;
        }
        else if (tmp->next != nullptr) {
            tmp->val = tmp->next->val;
        }

        tmp = tmp->next;

        if (prev == nullptr) {
            prev = node;
        }
        else {
            prev = prev->next;
        }
    }
}

int main()
{
    return 0;
}