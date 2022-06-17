bool isPalindrome(int l,int r,string &s)
{
    if(l>=r)return true;
	if(s[l]!=s[r])return false;
    return isPalindrome(l+1,r-1,s);
}
bool  isPalindrome(string &s){
    return isPalindrome(0,s.size()-1,s);
}
