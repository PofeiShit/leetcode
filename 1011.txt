class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
        if(sz < 2)
            return 0;
        int l = 0, r = sz - 1, sum = -1, s = 0;
        while(l < r){
            s = min(height[l], height[r]) * (r - l);
            sum = max(sum, s);
            if(height[l] < height[r]) ++l;
            else --r;
        }
        return sum;
    }
};