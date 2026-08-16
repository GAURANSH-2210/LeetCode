class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solutionArray(2);
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    solutionArray[0] = i;
                    solutionArray[1] = j;
                    return solutionArray;
                }
            }
        }
        return{};
    }
};