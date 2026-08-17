class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n);
        vector<int> suff(n);
        vector<int> res(n);

        pref[0]=1; //nothing to the left
        suff[n-1]=1; //nothing to the right

        for(int i=1;i<n;i++){ //calculate prod to the left
            pref[i]=pref[i-1]*nums[i-1]; //prev prefix*prev number
        }

        for(int i=n-2;i>=0;i--){ //prod to the right
            suff[i]=suff[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++){
            res[i]=pref[i]*suff[i];
        }
        return res;
    }
};
