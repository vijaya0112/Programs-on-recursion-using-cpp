#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
int isFactorial(int n)
{
	if(n<=1)
	{
		dp[n]=1;
		return 1;
	}
	if(dp[n]!=0)
	{
		return dp[n];
	}
	return dp[n]= n*isFactorial(n-1);
}
int main()
{
	int n;
	cout<<"Enter n value";
	cin>>n;
	cout<<isFactorial(n)<<"\n";
	for(int i=0;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
    return 0;
	
}
