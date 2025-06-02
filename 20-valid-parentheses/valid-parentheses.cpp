#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mapping = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (mapping.count(c)) {
                // It's a closing bracket
                if (st.empty() || st.top() != mapping[c]) {
                    return false;
                }
                st.pop();
            } else {
                // It's an opening bracket
                st.push(c);
            }
        }

        return st.empty();
    }
};
