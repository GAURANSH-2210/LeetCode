class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, n = 0;
        for(int i=0; i<nums.size()-n; i++){
            while(nums[nums.size()-1-n] == val && nums.size()-1-n > i){
                n++;
            }
            if(nums[i] != val){
                k++;
            }
            else if(nums.size()-1-n == i){
                break;
            }
            else{
                nums[i] = nums[nums.size()-1-n];
                k++;
                n++;
            }
        }
        return k;
    }
};