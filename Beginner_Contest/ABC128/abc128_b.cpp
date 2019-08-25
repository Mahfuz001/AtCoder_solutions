/**
 *  author: MahfuzAhmed
 *  created: 25.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;

vector<pair<pair<string,int>,int>> v2;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    
    
    
    for(int i=0;i<n;i++){
        string s; int x; cin >> s >> x;
        
        v2.push_back(make_pair(make_pair(s, -x), i));
    }
    
    sort(v2.begin(), v2.end());
    
    for(auto a:v2){
        cout << a.second+1 << "\n";
    }
    
    
    
    return 0;
}
