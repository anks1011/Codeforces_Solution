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
       int a[n];
       int m1=INT_MIN;
       int m2=INT_MAX;
       for (int i = 0; i <n; i++)
       {
           cin>>a[i];
           if(a[i]>m1)
           {
               m1=i;
           }
           if(a[i]<m2)
           {
               m2=i;
           }
       }
       int ans=min(min(max(m1,m2)+1,(n-1)-min(m1,m2)+1),min( (n - 1) - m1+ m2 + 2,
            (n - 1) - m2 + m1 + 2));
            cout<<ans<<endl;
       
   }
  
    return 0;
}