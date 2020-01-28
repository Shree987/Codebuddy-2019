/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Longest Substring Without Repeat (https://www.interviewbit.com/problems/longest-substring-without-repeat/)

Following is the required Solution function
*/

int Hash(char c){
    if(c>='a' && c<='z')    return c-'a';
    else if(c>='A' && c<='Z')    return c-'A'+26;
    else return c-'0'+52;
}

int Solution::lengthOfLongestSubstring(string A) {
    long len=0;
    int i,j,start,n = A.size();
    vector<int> index(62,-1);
    start=0;
    for(i=0;i<n;i++){
        if(index[Hash(A[i])]==-1){
            len = len > i-start+1 ? len : i-start+1;
            index[Hash(A[i])]=i;
        }
        else if(index[Hash(A[i])]>=start){
            len = len > i-start ? len : i-start;
            start = index[Hash(A[i])]+1;
            index[Hash(A[i])]=i;
        }
        else{
            len = len > i-start+1 ? len : i-start+1;
            index[Hash(A[i])]=i;
        }
    }
    return len;
} 

