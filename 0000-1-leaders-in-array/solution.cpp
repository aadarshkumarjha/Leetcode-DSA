vector<int> leadersInArray(vector<int> &arr) {
    vector<int> ans;
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i = n-1; i>=0; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }

    //no sorting as stated in the question
    reverse(ans.begin(), ans.end());
    return ans;
}