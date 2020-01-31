/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Different Bits Sum Pairwise (https://www.interviewbit.com/problems/different-bits-sum-pairwise/)

Following is the required Solution function
*/

string Solution::longestPalindrome(string A) {
    if(A=="")    cout<<"-1";
    int i,j,k,n=A.size();
    string B="";
    
    //Check for odd string
    int length=0, start=0;
    for(i=0;i<n;i++){
        j=k=i;
        while(k+1<n && j>=1 && A[j-1]==A[k+1]){
            k++;
            j--;
        }
        if(length == k-j+1 && start > j){
            start = j;
        }
        else if(length < k-j+1){
            start = j;
            length = k-j+1;
        }
    }
    
    //Check for odd string
    for(i=0;i<n-1;i++){
        if(A[i]!=A[i+1])    continue;
        j=i;
        k=i+1;
        while(k+1<n && j>=1 && A[j-1]==A[k+1]){
            k++;
            j--;
        }
        if(length == k-j+1 && start > j){
            start = j;
        }
        else if(length < k-j+1){
            start = j;
            length = k-j+1;
        }
    }
    i=start;
    while(length--){
        B+=A[i];
        i++;
    }
    return B;
}
