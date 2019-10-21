/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Max Distance (https://www.interviewbit.com/problems/max-distance/)

Following is the required Solution function

*/


int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> V;
    vector<int> MAX;
    int i,j,Max=-1;
    for(i=0; i<A.size(); i++){
        V.push_back(make_pair(A[i],i));
    }
    sort(V.begin(), V.end());
    MAX.resize(V.size());
    MAX[V.size()-1]=V[V.size()-1].second;
    for(i = V.size()-2; i>=0; i--){
        MAX[i] = max(MAX[i+1],V[i].second);
    }
    for(i=0;i<V.size();i++){
        Max = max(Max, MAX[i]-V[i].second);
    }
    return Max;
}
