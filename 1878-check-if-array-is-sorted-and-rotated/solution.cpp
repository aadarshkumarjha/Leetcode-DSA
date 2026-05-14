class Solution {
public:
    bool check(vector<int> &nums) {
        int count = 0;

        //modulo method
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(nums[i]>nums[(i+1)%n]){ //modulo to get to the 1st element
                count++;
            }
            
        }
        //normal method by me
        // for(int i = 1; i<n; i++){
        //     if(nums[i-1] > nums[i]){
        //         count++;
        //     }
        // }
        // if(nums[n-1]>nums[0])
        //     count++;
        
        
        return count<=1;
    }
    
};
