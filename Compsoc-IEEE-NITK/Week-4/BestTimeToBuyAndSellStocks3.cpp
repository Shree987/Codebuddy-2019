/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Best Time to Buy and Sell Stocks III (https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-iii/)

Following is the required Solution function

*/


int Solution::maxProfit(const vector<int> &A) {
    int i,minimum, maximum,n=A.size(), profit, partition;
    if(n<2)    return 0;
    if(n==2)    return max(0, A[1]-A[0]);
    
    vector<int> prefix(n);
    vector<int> suffix(n+1);
    
    prefix[0]=0;
    minimum = A[0];
    
    for(i=1;i<n;i++){
        minimum = min(minimum, A[i]);
        prefix[i] = max(prefix[i-1], A[i]-minimum);
    }
    
    suffix[n-1]=suffix[n]=0;
    maximum = A[n-1];
    
    for(i=n-2;i>=0;i--){
        maximum = max(maximum, A[i]);
        suffix[i] = max(suffix[i+1], maximum-A[i]);
    }
    profit = prefix[n-1];
    
    for(partition = 0; partition<n; partition++){
        profit = max(profit, suffix[partition+1]+prefix[partition]);
    }
    
    return profit;
}