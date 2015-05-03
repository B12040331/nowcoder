
#include <iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
	    ListNode *p = pHead, *q = new ListNode(0), *r;
	    while(p) {
            r = new ListNode(p->val);
            r->next = q->next;
            q->next = r;
            p = p->next;
	    }
	    r = q->next;
	    delete q;
	    return r;
	}
};

int main() {
    Solution solution;
    ListNode *head = new ListNode(1), *p = head, *q;
    for(int i=0; i<9; ++i) {
        q = new ListNode(i+2);
        p->next = q;
        p = q;
    }
    q = solution.ReverseList(head);
    while(q) {
        cout << q->val << " ";
        q = q->next;
    }
    return 0;
}
