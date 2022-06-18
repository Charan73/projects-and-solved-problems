#include<bits/stdc++.h>
void sperm(int pos,string &str,vector<string>&ans){
    if(pos>=str.size()){
        ans.push_back(str);
    }
    for(int i=pos;i<str.size();i++){
        swap (str[i],str[pos]);
    sperm(pos+1,str,ans);
        swap(str[i],str[pos]);
    }
}


vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    sperm(0,str,ans);
    sort(ans.begin(),ans.end());
    return ans;
   
}
