class Solution {
public:
    bool checkAllMapZero(unordered_map<char,int>&m1,unordered_map<char,int>&m2){
        if(m1.size()!=m2.size())return false;
        for(auto i = m1.begin(); i != m1.end(); i++){
            if(i->second!=m2[i->first]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        int i=0;
        int length=s2.length();
        unordered_map<char,int> mp1;
        for(int i=0;i<s1.length();i++){
            mp1[s1[i]]++;
        }
        unordered_map<char,int> mp2;
        for(int j=i;j<length;){
            if(j-i+1<s1.length()){
                mp2[s2[j]]++;
                j++;
            }else if(j-i+1==s1.length()){
                mp2[s2[j]]++;
                // cout<<s2[j]<<endl;
                bool ans=1;
                for(auto l=mp1.begin();l!=mp1.end();l++){
                    // cout<<l->first<<" "<<l->second<<" "<<mp2[l->first]<<endl;
                    if(l->second!=mp2[l->first]){
                        ans=0;
                    }
                }
                // cout<<ans<<"ans";
                if(ans==0){
                    mp2[s2[i]]--;
                    i++;
                    j++;
                    continue;
                }else if(ans==1){
                    return 1;
                }
            }
        }
        return false;
    }
};