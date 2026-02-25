class Solution {
public:
    vector<int> generateRow(int numRows) {
        long long ans = 1; vector<int> ansRows;
        ansRows.push_back(1);

        for(int col=1; col<= numRows; col++){
            ans= ans*(numRows-col+1);
            ans=ans/col;
            ansRows.push_back(ans);
        }
        return ansRows;
        
    }

    vector<vector<int>>generate(int N){
        vector<vector<int>> ans;
        for(int i=0; i<N; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};