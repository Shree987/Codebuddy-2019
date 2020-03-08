/*
Name : Shreeraksha R Aithal (@Shree987)
Question: Gas Station (https://www.interviewbit.com/problems/gas-station/)
Following is the required Solution function
*/

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int i,k=0,n=A.size(),index;
    for(i=0;i<n;i++){
        k+=A[i]-B[i];
    }
    if(k<0)     return -1;
    i=k=index=0;
    while(index<n){
        k += A[i]-B[i];
        if(index==(i+1)%n){
            if(k>=0)  return index; 
            else    return -1;
        }
        if(k<0){
            if(index>i)     return -1;
            index = (i+1)%n;
            k = 0;
        }
        i = (i+1)%n;
    }
    return -1;
}