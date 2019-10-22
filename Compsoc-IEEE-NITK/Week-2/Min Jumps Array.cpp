/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Min Jumps Array (https://www.interviewbit.com/problems/min-jumps-array/)

Following is the required Solution function

*/


int Solution::jump(vector<int> &A) {
    vector<int> steps(A.size(),-1);
    queue<pair<int, int>> mini;
    pair<int, int> p;
    int i,j,n=A.size(),m;
    steps[0]=0;
    mini.push(make_pair(A[i],1));
    for(i=1;i<n;i++){
        while(!mini.empty()){
            p = mini.front();
            if(i>p.first){
                mini.pop();
            }
            else    break;
        }
        if(mini.empty()){
            return -1;
        }
        steps[i]=p.second;
        mini.push(make_pair(i+A[i], steps[i]+1));
    }
    return steps[n-1];
}