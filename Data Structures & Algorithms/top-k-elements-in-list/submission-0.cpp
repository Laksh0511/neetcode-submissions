class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq; //element,freq

        for(int num:nums){ //count freq
            freq[num]++;
        }
        //min heap(freq,element)
        priority_queue<pair<int,int>,//type of element stored in heap (freq,element)
        vector<pair<int,int>>, //how stored internally (rare change)
        greater<pair<int,int>> //converts to min heap
        > pq;

        for(auto it: freq){
            pq.push({it.second,it.first}); //push freq and element because heap compares 1st value of pair (it.second)

            if(pq.size()>k){//remove if more than k elements
                pq.pop();//remove smallest(min heap)
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second); //push element
            pq.pop(); //remove smallest (min heap)
        }
        return ans;
    }
};
