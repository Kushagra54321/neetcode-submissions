class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int r=1;
        int k=1;
        int n=nums.size();
        while(r<n){
            if(nums[l] != nums[r]){
                swap(nums[l+1],nums[r]);
                l++;
                k++;
            }
            r++;
        }
        return  k;
    }
};