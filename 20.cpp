stack<char> st;

        for (char c : s) {
            // if opening bracket → push
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // if stack empty → invalid
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                // check matching pair
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();