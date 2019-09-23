/**
 *  author: MahfuzAhmed
 *  created: 26.08.2019
**/

#include <iostream>
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
    
    int a; cin >> a;
    string s; cin >> s;
    
    if(a < 3200)
        cout << "red\n";
    else
        cout << s << "\n";
    
    
    return 0;
}
