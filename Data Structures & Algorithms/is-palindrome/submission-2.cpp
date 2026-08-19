class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            cout<<"s[i]: "<<s[i]<<" s[j]: "<<s[j];
            if(tolower(s[i])!=tolower(s[j])&&isalnum(s[i])&&isalnum(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
