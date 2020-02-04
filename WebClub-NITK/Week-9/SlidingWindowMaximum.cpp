/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Sliding Window Maximum (https://www.interviewbit.com/problems/sliding-window-maximum/)

Following is the required Solution function
*/

vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int i,j,k,n=A.size();
    vector<int> res;
    if(n<=B){
        res.push_back(*max_element(A.begin(), A.end()));
    }
    else if(B==1)   return A;
    else{
        priority_queue <pair<int, int>> q;
        pair<int, int> p;
        for(i=0;i<B-1;i++){
            q.push(make_pair(A[i],i));
        }
        j=0;
        while(i<n){
            q.push(make_pair(A[i],i));
            p = q.top();
            while(p.second < j){
                q.pop();
                p = q.top();
            }
            j++;
            res.push_back(p.first);
            i++;
        }
    }
    return res;
}
