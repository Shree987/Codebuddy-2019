/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Combinations (https://www.interviewbit.com/problems/combinations/)

Following is the required Solution function

*/


void dp(vector<vector<int>> &v1, vector<int> &v, int A, int B, int i, int n){
    if(i>=B){
        v1.push_back(v);
        return ;
    }
    if(n>A) return;
    else{
        v[i]=n;
        dp(v1, v, A, B, i+1, n+1);
        dp(v1, v, A, B, i, n+1);
    }
}
vector<vector<int>> Solution::combine(int A, int B) {
    vector<vector<int>> v1;
    vector<int> v(B, -1);
    dp(v1,v,A,B,0,1);
    return v1;
}