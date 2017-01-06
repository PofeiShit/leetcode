class Solution {
public:
    int longestValidParentheses(string s) {
        int len = 0, tmp = 0;
        stack<int> index;
        stack<char> st;
        vector<int> vec1;
        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case '(':
                   st.push('(');
                   index.push(i);
                   break;
                case ')':
                    if(!st.empty() && st.top() == '('){
                        vec1.push_back(index.top());
                        vec1.push_back(i);
                        index.pop();
                        st.pop();
                    }
                    break;
            }
        }
       if(!vec1.empty()){
            sort(vec1.begin(), vec1.end());
            int sz = vec1.size();
            for(int i = 0; i < sz - 1; i++){
             //   cout << vec1[i] << '\t' << vec1[i + 1] << endl;
                if(vec1[i] + 1 == vec1[i + 1]){
                    tmp++;
                    if(tmp > len)
                        len = tmp;
                } else 
                    tmp = 0;
            }
            return ++len;
        }
        return 0;
    }
};