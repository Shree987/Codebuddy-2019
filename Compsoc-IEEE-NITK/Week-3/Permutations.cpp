/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Permutations (https://www.interviewbit.com/problems/permutations/)

Following is the required Solution function

*/


void dp(vector<vector<int>> &v1, vector<int> &v, vector<int> &A, int n){
    int i;
    if(n==A.size()){
        v1.push_back(v);
    }
    else{
        int i;
        v[n]=A[n];
        dp(v1,v,A,n+1);
        for(i=n+1;i<A.size();i++){
            swap(A[i],A[n]);
            v[n]=A[n];
            dp(v1,v,A,n+1);
            swap(A[i],A[n]);
        }
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> v1; 
    vector<int> v = A;
    dp(v1,v,A,0);
    return v1;
}
