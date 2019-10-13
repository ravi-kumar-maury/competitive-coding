#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
int main() {
    ll t,n,the_shit,maxx;
    
    cin>>t;
    while(t--)
    {   maxx=0;
        unordered_map<ll,ll>m;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        m[a[n-1]]=1;
        for(int i=n-2;i>=0;i--)
        {   
            for(int j=1;j<=sqrt(a[i]);j++)
            {
                
                if(a[i]%j==0)
		       {
		        if(m[j]>0 ){m[j]++;maxx=max(maxx,m[j]);
		        if(a[i]/j==j)continue;}  
		        if(m[a[i]/j]>0){m[a[i]/j]++;maxx=max(maxx,m[a[i]/j]);}
			}
		      
            }
	    if(m[a[i]]==0)m[a[i]]=1;
          
            
        }
        if(maxx==0){cout<<0<<"\n";continue;}
        cout<<maxx-1<<"\n";
    }
    
	return 0;
}

