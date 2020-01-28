/*

Name : Shreeraksha R Aithal (@Shree987)
Question: 4 Sum (https://www.interviewbit.com/problems/4-sum/)

Following is the required Solution function
*/

 vector<vector<int> > Solution::fourSum(vector<int> &A, int B){
    int i,j,k,m,n=A.size(),target;
    vector<vector<int>> C;
    vector<int> D(4);
    if(n<4) return C;
    sort(A.begin(), A.end());
    for(i=0;i<n;i++){
        if(i>0 && A[i]==A[i-1]) continue;
        D[0]=A[i];
        for(j=i+1;j<n-1;j++){
            if(j>i+1 && A[j]==A[j-1])    continue;
            D[1]=A[j];
            k=j+1;
            m=n-1;
            target = B - A[i] - A[j];
            while(k<m){
                if(A[k]+A[m] < target){
                    k++;
                }
                else if(A[k]+A[m] > target){
                    m--;
                }
                else{
                    D[2]=A[k];
                    D[3]=A[m];
                    C.push_back(D);
                    k++;
                    m--;
                    while(k<m && A[k]==A[k-1])  k++;
                    while(k<m && A[m]==A[m+1])  m--;
                }
            }
            
        }
    }
    return C;
}

