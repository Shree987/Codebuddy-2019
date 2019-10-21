/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Largest Number (https://www.interviewbit.com/problems/largest-number/)

Following is the required Solution function

*/


bool compare(string a, string b){
    return a+b >= b+a;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> res;
    int i= A.size();
    string result="";
    bool all_zero = true;
    for(i=0; i<A.size(); i++){
        if(A[i]!=0){
            all_zero = false;
        }
        res.push_back(to_string(A[i]));
    }
    if(all_zero)    return "0";
    sort(res.begin(), res.end(),compare);
    for(i=0; i<A.size();i++){
        result+=res[i];
    }
    
    return result;
}
