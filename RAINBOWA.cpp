//Problem: RAINBOWA 
//https://www.codechef.com/problems/RAINBOWA

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        
        int i=0;
        int j=n-1;
        int flag=1;
        
        if(a[i]!=1)
            flag=0;
        else
        {
            while(i<j)
            {
                if(a[i]!=a[j])
                {
                    flag=0;
                    break;
                    
                }
                if((a[i]!=a[i+1]) && (a[i]+1) !=a[i+1])
                {
                    flag=0;
                    break;
                }
                i++;
                j--;
            }
                if(a[i]!=7)
                    flag=0;
            
        }
	    if(flag)
	        cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
	}
	return 0;
}
