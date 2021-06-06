#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//logic for finding fibonacci series using recursion
int fibonacci(int n)
{
	if((n==1)||(n==0))
	{
		return (n);
	}
	else
	{
	    return (fibonacci(n-1)+fibonacci(n-2));
	}
}
int main()
{
	int n;
	int i=0;
	cout<<"Enter n value:";
	cin>>n;
	cout<<"Fibonacci Series:";
	while(i<n)
	{
		cout<<" "<<fibonacci(i);
		i++;
	}
	
	//logic using iteration
	int n1=0,n2=1,n3,number;    
    cout<<"\nEnter the number of elements: ";    
    cin>>number;    
    cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
    for(i=2;i<number;i++) //loop starts from 2 because 0 and 1 are already printed    
    {    
        n3=n1+n2;    
        cout<<n3<<" ";    
        n1=n2;    
        n2=n3;    
    }    
    return 0;  
}  
	

