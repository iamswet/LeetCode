class Solution {
public:
    int maxScore(string s) {
        int max=0,curr;
        int zer=0,on;
        for(int i=0;i<(s.size()-1);i++){
            if(s[i]=='0'){
                zer++;
            }
            on=0;
            for(int j=i+1;j<s.size();j++){
                if(s[j]=='1'){
                    on++;
                }
            }
            curr=zer+on;
            if(curr>max){
                max=curr;
            }
        }
        return max;
    }
};
