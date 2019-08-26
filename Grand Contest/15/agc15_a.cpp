/**
 *  author: MahfuzAhmed
 *  created: 26.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    ll n, a, b; cin >> n >> a >> b;
    
    if(n < 2 && a != b){
        cout << 0 << "\n";
    }else if(n == 1 && a == b){
        cout << 1 <<"\n";
        
    }else{
        if(a > b){
            cout << 0 << "\n";
        }else{
            ll x = ((n-2)*a)+a+b;
            ll y = ((n-2)*b)+a+b;
            
            cout << (y-x)+1 << "\n";
        }
    }
    
    
    return 0;
}
