class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int total = n*m;
        
        int rowStart = 0;
        int rowEnd = n - 1;
        int colStart = 0;
        int colEnd = m - 1;
        int count = 0;

        vector<int> ans;

        while(count<total){
            for(int i = colStart; i <= colEnd; i++){
                ans.push_back(matrix[rowStart][i]);
                count++;
            }
            rowStart += 1;
            if(count == total){
                break;
            }

            for(int i = rowStart; i <= rowEnd; i++){
                ans.push_back(matrix[i][colEnd]);
                count++;
            }
            colEnd -= 1;
            if(count == total){
                break;
            }

            for(int i = colEnd; i >= colStart; i--){
                ans.push_back(matrix[rowEnd][i]);
                count++;
            }
            rowEnd -= 1;
            if(count == total){
                break;
            }

            for(int i = rowEnd; i >= rowStart; i--){
                ans.push_back(matrix[i][colStart]);
                count++;
            }
            colStart += 1;

            if(count == total){
                break;
            }
        }

        return ans;
    }
};