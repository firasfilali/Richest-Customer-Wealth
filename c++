class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum;
        int curr_sum=INT_MIN;
        
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];   
            }
                curr_sum=max(curr_sum,sum);
        }
       
        return curr_sum;
    }
};
