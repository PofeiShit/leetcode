class Solution {
public:
    static bool comp(vector<string> a, vector<string> b){
        if(a.size() < b.size())
            return true;
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); ++i){
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto itr = m.begin(); itr != m.end(); ++itr){
            sort(itr->second.begin(), itr->second.end());
            ans.push_back(itr->second);
        }
        sort(ans.begin(), ans.end(), comp);
        return ans;
    }
};