class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int aidx = m - 1;
        int bidx = n - 1;
        int idx = m + n - 1;
        while(aidx >= 0 && bidx >= 0){
            if(nums1[aidx] > nums2[bidx])
                nums1[idx--] = nums1[aidx--];
            else
                nums1[idx--] = nums2[bidx--];
        }
        while(aidx >= 0)
            nums1[idx--] = nums1[aidx--];
        while(bidx >= 0)
            nums1[idx--] = nums2[bidx--];
    }
};