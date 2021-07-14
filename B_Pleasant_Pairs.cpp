#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
 

void c_p_c()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}
int32_t main()
{
    c_p_c();
    w(x)
    {
        int n;
        cin>>n;
        int v[2*n+1];
        int a[n];
        for(int i=0;i<=2*n;i++)
        {
            v[i]=1000000;
        }    
       for(int i=0;i<n;i++)
      {
        cin>>a[i];
        v[a[i]]=i+1;
        }
       int count=0;
       for(int i=3;i<2*n;i++)
       {
        for(int j=1;j<=sqrt(i);j++)
        {
            if(i%j==0 && i!=j*j)
            {
                if(v[j]+v[i/j]==i)
                {
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    }
    return 0;
}