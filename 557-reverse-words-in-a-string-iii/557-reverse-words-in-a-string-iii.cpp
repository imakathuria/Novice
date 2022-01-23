class Solution {
public:
    string rev(string s,int i,int j){
        while(i<j){
            swap(s[i++],s[j--]);
        }
        return s;
    }
    string reverseWords(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch==' '){
                int ii=j,jj=i-1;
                while(ii<jj){
                    swap(s[ii++],s[jj--]);
                }
                j=i+1;
            }
        }
        int l=s.size()-1;
        while(j<l){
            swap(s[j++],s[l--]);
        }
        
        return s;
    }
};