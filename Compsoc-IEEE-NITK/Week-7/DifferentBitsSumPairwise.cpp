/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Different Bits Sum Pairwise (https://www.interviewbit.com/problems/different-bits-sum-pairwise/)

Following is the required Solution function
*/

long long MOD = 1000000007L;
int Solution::cntBits(vector<int> &A) {
    long long j,n = A.size(), num=0, cnt=0;
    n = A.size();
    for(int i=0;i<32;i++){
        num=0;
        for(j=0;j<n;j++){
            if((A[j] & (1<<i)))        num++;
        }
        cnt = (cnt + ((num)%MOD)*((n-num)%MOD*2)%MOD )%MOD;
    }
    return cnt;
}
