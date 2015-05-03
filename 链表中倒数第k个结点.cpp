
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
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	    ListNode* p = pListHead;
	    int i = 0, j = 0;
        while(p) {
            ++i;
            p = p->next;
        }
        p = pListHead;
        while(p) {
            if(j == i-k) {
                return p;
            }
            p = p->next;
            ++j;
        }
        return NULL;
	}
};

int main() {
    ListNode *head = new ListNode(0);
    ListNode *p = head, *q = NULL;
    for(int i=0; i<10; ++i) {
        q = new ListNode(i+1);
        p->next = q;
        p = q;
    }
    Solution solution;
    cout << solution.FindKthToTail(head, 1)->val << endl;
    return 0;
}
