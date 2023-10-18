#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
#include <bitset>
#include <numeric>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int ans=0;
    vector<int> a(n);
    cin>>a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        a[i]-=ans;
        if(a[i]<a[i-1]){
            ans+=a[i-1];
        }
    }
    
    cout<<ans<<endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}