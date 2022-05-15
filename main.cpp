#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b,x;
	    cin>>a>>b;
	    x=a+b;
	    int n,count[26]={0};
	    for(int i=0;i<x.length();i++)
	    {
	        count[x[i]-'a']++;
	    }
	    cin>>n;
	    string s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s;
	        for(int j=0;j<s.length();j++)
	        {
	            count[s[j]-'a']--;
	        }
	        
	    }
	    int flag=0;
	    for(int i=0;i<26;i++)
	    {
	        if(count[i]<0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
