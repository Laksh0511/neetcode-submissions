class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Brute force: compute all products except current idx
        /*int n=nums.size();
        vector<int> res(n);

        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    prod*=nums[j];
                }
            }
            res[i]=prod;
        }
        return res;*/

        //division
        int prod=1, zeroCount=0;
        for(int num:nums){
            if(num!=0){
                prod*=num;//cumulative prod
            }
            else{
                zeroCount++;
            }
        }

        if(zeroCount>1){ //return all zeroes
            return vector<int>(nums.size(),0);
        }

        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            if(zeroCount>0){
                res[i]= (nums[i]==0) ? prod:0;  //if zero, then that place is prod, else rest is zero
            }
            else{
                res[i]=prod/nums[i]; //divide that position
            }
        }
        return res;
    }
};
