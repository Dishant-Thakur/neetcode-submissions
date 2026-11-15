class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> arr(n, vector<int>(n,0));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < matrix[i].size(); j++){
                arr[j][i] = matrix[i][j];
            }
        }
        
        for(int i = 0; i < n; i++){
            int end = n-1;
            for(int j = 0; j < arr[i].size()/2; j++){
                swap(arr[i][j], arr[i][end--]);
            }
        }
        matrix = arr;
    }
};