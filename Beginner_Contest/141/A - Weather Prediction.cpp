/**
 *  author: mahfuzz
 *  created: 19.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int max_n = 1000005;
typedef long long ll;


int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    string s; getline(cin, s);
    
    if(s == "Sunny")
        printf("Cloudy\n");
    else if(s == "Cloudy")
        printf("Rainy\n");
    else
        printf("Sunny\n");
    
    return 0;
}
