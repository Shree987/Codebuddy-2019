/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Zigzag String (https://www.interviewbit.com/problems/zigzag-string/)

Following is the required Solution function
*/

 
string Solution::convert(string A, int B) {
    if(B==1)    return A;
    string result=A;
    int i,j,k,m,itr;
    m = B*2 - 2;
    itr=0;
    for(i=0;i<B && i<A.size();i++){
        j=i;
        k = 2*(B-i-1);
        while(j<A.size()){
            result[itr]=A[j];
            itr++;
            if(i!=0 && i!=B-1 && j+k<A.size()){
                result[itr]=A[j+k];
                itr++;
            }
            j+=m;
        }
    }
    return result;
}
