class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet(nums.begin(),nums.end());
        int longest=0;

        for(int n:nums){
            //start?
            if(numSet.find(n-1)==numSet.end()){ //if x exists then iterator to element, else returns numset.end. ie n-1 not in set then start of sequence
                int length=0;
                while(numSet.find(n+length)!=numSet.end()){//n+1,n+2,n+3...
                    length++;
                }
                longest=max(length,longest);//update
            }
        }
        return longest;
    }
};
