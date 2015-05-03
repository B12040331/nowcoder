
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
	    vector<int> even, odd;
	    for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it) {
            if(*it & 1) {
                odd.push_back(*it);
            }
            else {
                even.push_back(*it);
            }
	    }
	    array.clear();
	    for(vector<int>::iterator it=odd.begin(); it!=odd.end(); ++it) {
            array.push_back(*it);
	    }
	    for(vector<int>::iterator it=even.begin(); it!=even.end(); ++it) {
            array.push_back(*it);
	    }
	}
};

int main() {
    Solution solution;
    vector<int> vec;
    for(int i=0; i<10; ++i) {
        vec.push_back(i);
    }
    solution.reOrderArray(vec);
    for(int i=0; i<10; ++i) {
        cout << vec[i] << " ";
    }
    return 0;
}
