/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Coins In A Line (https://www.interviewbit.com/problems/coins-in-a-line/)

Following is the required Solution function
*/

int Solution::maxcoin(vector<int> &A) {
    int n, i, j, k, a, b;
    n = A.size();
    vector<vector<int>> B(n);
    for(i=0;i<n;i++){
        B[i].resize(n);
    }
    for(i=0;i<n;i++){
        B[i][i]=A[i];
        if(i<n-1)   B[i][i+1]=max(A[i], A[i+1]);
    }
    for(k=2;k<n;k++){
        for(i=0;i<n-k;i++){
            j = k+i;
            a = A[j] + min(B[i+1][j-1], B[i][j-2]);
            b = A[i] + min(B[i+1][j-1], B[i+2][j]);
            if(B[i+1][j] > B[i][j-1]){
                B[i][j] = a;
            }
            else if(B[i+1][j] < B[i][j-1]){
                B[i][j] = b;
            }
            else    B[i][j] = min(a,b);
        }
    }
    return B[0][n-1];
}