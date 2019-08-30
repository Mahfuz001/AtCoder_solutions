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

int n;
int arr[55];

bool check(){
    
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1])
            return false;
    }
    
    return true;    
}




int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    
    cin >> n;
    
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    if(check()){
        cout << "YES\n";
        return 0;
    }
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            swap(arr[i], arr[j]);
            
            if(check()){
                cout << "YES\n";
                return 0;
            }
            
            swap(arr[i], arr[j]);
        }
    }
    
    cout << "NO\n";
    
    return 0;
}
