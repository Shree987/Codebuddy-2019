/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Stairs (https://www.interviewbit.com/problems/stairs/)

Following is the required Solution function

*/


int Solution::climbStairs(int A) {
    int n = A;
    vector<int> a(n+1,-1);
    a[0]=1;
    a[1]=2;
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    return a[n-1];
}
