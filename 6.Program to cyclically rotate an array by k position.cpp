#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    vector <int> input(n);
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int k;
    cin>>k;
    vector <int> temp(n);
    for(int i=0;i<n;i++)
    {
        temp[i]=input[(i+k)%n];
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}