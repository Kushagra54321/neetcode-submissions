class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto lb = lower_bound(nums.begin(), nums.end(), target);
    int lb_index = lb - nums.begin(); // Iterator se index nikalne ke liye

    // 2. Upper Bound (First element > target)
    auto ub = upper_bound(nums.begin(), nums.end(), target);
    int ub_index = ub - nums.begin();
    if(lb!=nums.end() && *lb==target){
        return lb_index;
    }
        // int low=0;
        // int high=nums.size()-1;
        // int mid=0;
        // while(low <= high){
        //     int mid =low+(high-low)/2;
        //     if(nums[mid]==target){
        //         return mid;
        //     }
        //     else if(nums[mid] < target){
        //         low=mid+1;
        //     }else{
        //         high=mid-1;
        //     }
        // }
        return -1;
    }
};
