#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPallin(int L,int R,string s)
{
	if(L>R)
	{
		return true;
	}
	else if(s[L]!=s[R])
	{
		return false;
	}
	return isPallin(L+1,R-1,s);
}
int main()
{
	string s;
	cout<<"Enter a string:"<<"\n";
	cin>>s;
	int n=s.size();
	cout<<isPallin(0,n-1,s);
	return 0;
}
