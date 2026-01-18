class Solution {
public: // Desi_Developerr
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        // transpose 
        for(int i=0;i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // reverse
        for(int i=0; i<n; i++){
            // row id matrix[i]
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};