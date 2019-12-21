/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Distribute Candy (https://www.interviewbit.com/problems/distribute-candy/)

Following is the required Solution function
*/

int Solution::candy(vector<int> &A) {
    if (A.size() == 0)  return 0;
    int i,n=A.size(),count=0;
    vector<int> asc(n,0), desc(n,0);
    asc[0] = 1;
    for(i=1;i<n;i++){
        if(A[i]>A[i-1])     asc[i]=asc[i-1]+1;
        else    asc[i]=1;
    }
    desc[n-1]=1;
    for(i=n-2;i>=0;i--){
        if(A[i]>A[i+1])     desc[i]=desc[i+1]+1;
        else    desc[i]=1;  
    }
    for (int i = 0; i < A.size(); i++) {
        count += max(asc[i],desc[i]);
    }
    return count;
}