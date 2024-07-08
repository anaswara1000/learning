class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
       
        vector<bool> rowsarr(m, false); 
        vector<bool> colsarr(n, false);


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rowsarr[i]=true;
                    colsarr[j]=true;
                }
            }
        }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rowsarr[i]|| colsarr[j]){
                matrix[i][j]=0;
            }
        }
    }

    }
};
