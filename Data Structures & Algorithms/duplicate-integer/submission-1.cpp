class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int count = 1; 
            for(int j = 0; j < n; j++){
                if(j==i) continue;
                else if(nums[i] == nums[j]){
                    count++;
                }
                if(count>1) return true;
            }
        }
        return false;
    }
};