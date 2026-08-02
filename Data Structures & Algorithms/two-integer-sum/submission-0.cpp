class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices; //value,index

        for(int i=0;i<nums.size();i++){
            indices[nums[i]]=i; //store index of array(i) as value, and value of array as index

        }
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];

            if(indices.count(diff)&&indices[diff]!=i){//diff exists in hashmap and same element not used again
                return {i,indices[diff]};
            }
        }
    }
};
