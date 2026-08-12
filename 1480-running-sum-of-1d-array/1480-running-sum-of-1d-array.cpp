class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumArray(nums.size(), 0);
        for(int i=0; i<nums.size(); i++){
            if(i==0){
                sumArray[i] = nums[i];
            }
            else{
                sumArray[i] = sumArray[i-1]+nums[i];
            }
        }
        return sumArray;
    }
};