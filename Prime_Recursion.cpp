#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//logic for finding prime number using recursion
bool isPrime(int x,int i=2)
{
	if(x<=2)
	{
		if(x==2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x%i==0)
	{
		return false;
	}
	if(i*i>x)
	{
	    return true;
    }
    isPrime(x,i+1);
}

int main()
{
	cout<<"Prime logic using recursion"<<"\n";
	int n;
	cout<<"Enter a number:"<<"\n";
	cin>>n;
	cout<<isPrime(n,2);
	cout<<"\n";
	
	//logic using iteration 
	cout<<"Prime logic using iteration"<<"\n";
	int i,count=0;
	cout<<"Enter a number:"<<"\n";
	cin>>n;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
        {
        	count++;
			break;
		}
	}
	if(count==1)
	{
		cout<<n<<" is not a prime number";
	}
	else if(n==1)
	{
		cout<<"not prime";
	}
	else
	{
		cout<<n<<" is a prime number";
	}
	return 0;
}
