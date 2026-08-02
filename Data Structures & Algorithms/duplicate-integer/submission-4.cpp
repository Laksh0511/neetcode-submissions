class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen; //seen hashset

        for(int num:nums){
            if(seen.count(num)){
                return true;// num already in set
            }
            seen.insert(num);//insert into set
        }
        return false;//duplicate not found
    }
};