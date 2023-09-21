class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> temp;
        nums1.insert(nums1.begin(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n==0)
        return 0;
        else if(n%2==0)
        return (double) (nums1[n/2 -1]+nums1[n/2])/2;
        else 
        return (double) nums1[n/2];
    }
};