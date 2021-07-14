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
void solve()
{
     string a;
       cin>>a;
       bool flag=true;
       deque<char> dq;
       int l=a.length();
       char m='a';
       for(int i=0;i<l;i++)
       {
           m=max(m,a[i]);
           dq.push_back(a[i]);
       }
       for(char i=m;i>='a';i--)
       {
            if(dq.size()==0)
       {
           cout<<"NO"<<"\n";
       return;
       }
           if(dq.front()==i)
           {
               dq.pop_front();
           }
           else if(dq.back()==i)
           {
               dq.pop_back();
           }
           else
           {
               cout<<"NO"<<"\n";
               return;
           }
       }
       if(dq.size()==0)
       {
           cout<<"YES"<<"\n";
       }
       else
       {
            cout<<"NO"<<"\n";
       }

}
int32_t main()
{
    c_p_c();
    w(x)
    {
      solve();
    }
    return 0;
}