class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(int k = 1; k<n; k++){
            if(nums[k] != nums[i]){
                nums[i+1] = nums[k];
                i++;
            }
        }
        return i+1;
    }
};
