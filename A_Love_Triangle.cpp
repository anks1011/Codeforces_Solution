#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    	int n;
        cin>>n;
        vector<int> v(n+1);
        bool flag=false;
        for (int  i = 1; i <=n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=1;i<=n;i++)
        {
            int x=i;
            int y=v[x];
            int z=v[y];
            if(v[z]==x)
            {
                flag=true;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
             cout<<"NO"<<endl;
        }
        
    return 0;
    
}