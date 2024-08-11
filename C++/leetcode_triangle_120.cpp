class Solution {
public:
    int least(vector<vector<int>>&triangle,int n,vector<vector<int>>&dp,int i){
        if(n==triangle.size()){
            return 0;
        }
        if(dp[n][i]!=-1) return dp[n][i];
        int ith=triangle[n][i] + least(triangle,n+1,dp,i);
        int inext=triangle[n][i]+least(triangle,n+1,dp,i+1);
        return dp[n][i]=min(ith,inext);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return least(triangle,0,dp,0);
    }
};
