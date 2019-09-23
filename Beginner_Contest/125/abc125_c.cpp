/**
 * 	author: krayr
 * 	created: 18.05.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, s, n) for(int i = s; i < int(n); i++)

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
	int n; cin >> n;
	vector<int> vec(n);
	
	forn(i, 0, n) cin >> vec[i];
	
	sort(vec.begin(), vec.end());
	
	
	for(int i = vec[1]; i > 0; i--){
		int c = 0;
		for(int j = 0; j < n; j++){
			if(vec[j] % i != 0) c++;
		}
		
		if(c < 2){
			cout << i << "\n";
			break;
		}
	}
    

    return 0;
}
