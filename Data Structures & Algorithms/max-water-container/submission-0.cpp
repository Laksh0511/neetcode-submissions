class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;

        int maxArea=0;
        while(i<j){
            int d=j-i;
            int h=min(heights[i],heights[j]);

            maxArea=max(maxArea,d*h);
            
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
};
