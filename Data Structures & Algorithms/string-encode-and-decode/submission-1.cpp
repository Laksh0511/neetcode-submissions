class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string s:strs){
            res+=to_string(s.length())+"#"+s; //length+delimiter+string
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;

        while(i<s.size()){
            int j=i;

            //find #
            while(s[j]!='#'){
                j++;
            }
            //length of string
            int len=stoi(s.substr(i,j-i)); //i:start index, //j:length
            //move to first char of string;
            j++;

            //read from j to length
            res.push_back(s.substr(j,len));
            //move to next string
            i=j+len;
        }
        return res;
    }
};
