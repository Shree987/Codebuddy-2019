/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Ways to Decode (https://www.interviewbit.com/problems/ways-to-decode/)

Following is the required Solution function
*/

int Solution::numDecodings(string A) {    
    int i,j,n = A.size();
    if(A[0]=='0')        return 0;
    if(n==1)    return 1;
    else{
        vector<int> B(n, 1);
        i = 2;
        if(A[1] == '0'){
            if(A[0] == '1' || A[0]=='2')    B[1] = 1;
            else    return 0;
        }
        else    B[1] = (A[0] == '1' || A[0]=='2') ? 2 : 1;
        for(i=2;i<n;i++){
            if(A[i]=='0'){
                if(A[i-1] == '1' || A[i-1] == '2')  B[i] = B[i-2];
                else    return 0;
            }
            else{
                if(A[i-1] == '1')  B[i] = B[i-2] + B[i-1];
                else if(A[i] <= '6' && A[i-1] == '2')  B[i] = B[i-2] + B[i-1];
                else    B[i] = B[i-1];
            }
        }
        return B[n-1];
    }
}