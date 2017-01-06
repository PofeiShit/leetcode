class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int wordsNum = words.size();
        int wordsLen = words[0].length();
        int len = s.length(), j;
        vector<int> ans;
        map<string, int> wordsFre;
        for(int i = 0; i < wordsNum; i++)
            ++wordsFre[words[i]];
        map<string, int> wordsCount;
        
        for(int i = 0; i <= len - (wordsNum * wordsLen); i++){
            wordsCount.clear();
            for(j = 0; j < wordsNum; j++){
                string tmp = s.substr(i + j * wordsLen, wordsLen);
                
                if(wordsFre.find(tmp) != wordsFre.end()){
                    ++wordsCount[tmp];
                    if(wordsCount[tmp] > wordsFre[tmp])
                        break;
                } else
                    break;
            }
            if(j == wordsNum)
                ans.push_back(i);
        }
        return ans;
    }
};