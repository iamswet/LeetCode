class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxv=INT_MIN;
        long long curr;
        for(int i=0;i<nums.size()-2;i++){
            curr=nums[i];
            for(int j=i+1;j<nums.size()-1;j++){
                curr=nums[i]-nums[j];
                for(int k=j+1;k<nums.size();k++){
                    if((curr*nums[k])>maxv){
                        maxv=curr*nums[k];
                    }
                }
            }
        }
        if(maxv<0){
            return 0;
        }
        return maxv;
    }
};
