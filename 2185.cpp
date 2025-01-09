class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        bool flag=true;
        for(int i=0;i<words.size();i++){
            flag=true;
            if(words[i].size()>=pref.size()){
                for(int j=0;j<pref.size();j++){
                    if(pref[j]!=words[i][j]){
                        flag=false;
                    }
                }
                if(flag==true){
                    count++;
                }
            }
        }
        return count;
    }
};
