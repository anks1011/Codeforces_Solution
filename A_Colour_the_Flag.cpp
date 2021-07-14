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
        int n,m;
        cin>>n>>m;
    	vector<string> v(n);
        char v1[n][m];
        char v2[n][m];
        for( int i = 0; i < n; i++ ){
            if( i%2 == 0 ){
                v1[i][0] = 'R';
                for( int j = 1; j < m; j++ ){
                    if(v1[i][j-1] == 'R')v1[i][j] = 'W';
                    else v1[i][j] = 'R';
                }
            }
            else{
                v1[i][0] = 'W';
                for( int j = 1; j < m; j++ ){
                    if(v1[i][j-1] == 'R')v1[i][j] = 'W';
                    else v1[i][j] = 'R';
                }
            }
        }
        for( int i = 0; i < n; i++ ){
            if( i%2 == 1 ){
                v2[i][0] = 'R';
                for( int j = 1; j < m; j++ ){
                    if(v2[i][j-1] == 'R')v2[i][j] = 'W';
                    else v2[i][j] = 'R';
                }
            }
            else{
                v2[i][0] = 'W';
                for( int j = 1; j < m; j++ ){
                    if(v2[i][j-1] == 'R')v2[i][j] = 'W';
                    else v2[i][j] = 'R';
                }
            }
        }
        for( int i = 0; i < n; i++ ){
            cin >> v[i];
        }
        int pos1 = 1, pos2 = 1;
        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < m; j++ ){
                if( v[i][j] != '.' ){
                    if( v[i][j] != v1[i][j] )pos1 = 0;
                }
            }
        }
        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < m; j++ ){
                if( v[i][j] != '.' ){
                    if( v[i][j] != v2[i][j] )pos2 = 0;
                }
            }
        }
        if( pos1 ){
            cout << "YES\n";
            for( int i = 0; i < n; i++ ){
                for( int j = 0; j < m; j++ ){
                    cout << v1[i][j];
                }
                cout << "\n";
            }
        }
        else if( pos2 ){
            cout << "YES\n";
            for( int i = 0; i < n; i++ ){
                for( int j = 0; j < m; j++ ){
                    cout << v2[i][j];
                }
                cout << "\n";
            }
    }
     else{
            cout << "NO\n";
        }
    }
    return 0;
}