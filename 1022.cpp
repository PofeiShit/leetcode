class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string m = "()";
        string tmp, ans;
        deque<string> v1;
        map<string, int> t;
        if(n == 0){
            ans = "";
            v1.push_back(ans);
        } else {
            v1.push_back(m);
            t[m] = 1;
            for(int i = 1; i < n; i++){
                int sz = v1.size();
                for(int k = 0; k < sz; k++){
                    for(int j = 0; j < v1[0].size(); j++){
                          tmp = v1[0];
                          tmp.insert(j, m);
                          if(t[tmp] == 0){
                            v1.push_back(tmp);
                            t[tmp] = 1;
                          }
                    } 
                    v1.pop_front();
                }
            }
        }
        sort(v1.begin(), v1.end());
        return vector<string>(v1.begin(), v1.end());
    }
};