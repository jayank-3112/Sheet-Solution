#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here. 
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	int intersection_count=0;
	int union_count=0;
	int i=0;
	int j=0;
	pair <int,int> ans;
	// intersection
	while(i<n&&j<m)
	{
		if(arr1[i]==arr2[j])
		{
			intersection_count++;
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	//union
	i=0;
	j=0;
	while(i<n&&j<m)
	{
		if(arr1[i]==arr2[j])
		{
			union_count++;
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			union_count++;
			i++;
		}
		else
		{
			union_count++;
			j++;
		}
	}
	if(!(i<n))
	{
		union_count=union_count+(m-j);
	}
	else
	{
		union_count=union_count+(n-i);
	}
	ans.first=intersection_count;
	ans.second=union_count;
	return ans;

}