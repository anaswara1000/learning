class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i;
  
        for(i=0;i<nums.size();i++){
            int a=nums[i];
            if(mp.find(a) == mp.end()){
                mp[a]=1;
            }
            else{
                mp[a]+=1;
            }
        }
        for(i=0;i<nums.size();i++){
            if(mp[nums[i]] > 1){
                return true;
            }
        }

        return false;

    }
};
