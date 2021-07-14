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
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}
int32_t main()
{
    c_p_c();
  w(x)
  {
     int n;
     cin>>n;
    if (n%2==0 && isSquare(n/2))
    cout<<"YES"<<endl;
  else if (n%4==0 && isSquare(n/4))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  }
  
    return 0;
}