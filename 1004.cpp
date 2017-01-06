class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int len = nums1.size();
        if(len % 2 == 0)
            return (double(nums1[len / 2]) + double(nums1[len / 2 - 1])) / 2;
        else 
            return double(nums1[len / 2]);
    }
};