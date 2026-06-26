class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        int k=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        while(k<n-2){
            if(k>0 && nums[k]==nums[k-1] ){
                k+=1;
                continue;
            }
            int i=k+1;
            int j=n-1;
            while(i<j){
                
                int sum=nums[i]+nums[j]+nums[k];

                if(sum>0){
                    j-=1;
                }
                else if(sum<0) i+=1;
                else{
                    ans.push_back({nums[k],nums[i],nums[j]});
                    i+=1;
                    j-=1;
                    while(i<j && nums[i]==nums[i-1]) i++;
                    while(i<j && nums[j]==nums[j+1]) j-=1;
                    
                }
            }
            k+=1;


        }
        return ans;
    }
};