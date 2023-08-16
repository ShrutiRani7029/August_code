class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (s[i] == '*' && !st.empty()) {
                st.pop();
            } else if (s[i] != '*') {
                st.push(s[i]);
            }
        }

        string result(st.size(), ' ');
        int index = st.size() - 1;
        while (!st.empty()) {
            result[index--] = st.top();
            st.pop();
        }

        return result;
    }
};
