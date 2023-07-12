int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;
    int n=arr.size();
    for(int i=1;i<n;i++)
    ans=ans^i;
    for(int i=0;i<n;i++)
    ans=ans^arr[i];
    return ans;
}
