/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Assign Mice to Holes (https://www.interviewbit.com/problems/assign-mice-to-holes/)

Following is the required Solution function
*/

 
int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i,Max = 0;
    for(i=0;i<A.size();i++){
        Max = max(Max, abs(A[i]-B[i]));
    }
    return Max;
}
