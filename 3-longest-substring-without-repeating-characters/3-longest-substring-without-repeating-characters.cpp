class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1){
            return s.length();
        }
        unordered_map<char,bool> ch;
        int maxLength=0;
        int len=s.length();
        int i=0;
        for(int j=i;j<len;){
            ch[s[j]]=1;
            if(ch.size()==j-i+1){
                maxLength = max(maxLength,j-i+1);
                j++;
            }else{
                ch.erase(s[i]);
                i++;
            }
        }
        return maxLength;
    }
};