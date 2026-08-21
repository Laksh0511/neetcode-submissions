class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        cout<<res.size()<<endl;

        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
        }
        
        for(int j=0;j<nums.size();j++){
            res.push_back(nums[j]);
        }
        return res;
    }
};