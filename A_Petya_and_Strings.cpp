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
    {
       string s1;
       string s2;
       cin >> s1 >> s2;
       int n=s1.length();
       int m=s2.length();
       int i=0;
       int matches=0;
       int a=0;
       int b=0;
       while(i<n)
       {
          if(s1[i]<92)
          {
              s1[i]=s1[i]+32;
          }
          if(s2[i]<92)
          {
              s2[i]=s2[i]+32;
          }
          i++;
       }
       i=0;
       
       if(s1==s2) 
       {
           cout<<"0"<<endl;
       }
       else if(s1>s2)
       {
           cout<<"1"<<endl;
       }    
       else
       {
           cout<<"-1"<<endl;
       }

    }
    return 0;
}