/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Container With Most Water (https://www.interviewbit.com/problems/container-with-most-water/)

Following is the required Solution function
*/

int Solution::maxArea(vector<int> &A) {
    int start=0, end=A.size()-1, MAX = 0;
    while(start<end){
        MAX = max(MAX, (end-start)*min(A[start],A[end]));
        if(A[start]<=A[end]){
            start++;
        }
        else{
            end--;
        }
    }
    return MAX;
}