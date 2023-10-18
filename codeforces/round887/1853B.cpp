#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a = -1, b = n + 1;
    int x = n,y;
    while (a + 1 < b) {
        y=(a+b)>>1;
        for (int i = 0; i < k-2; i++)
        {
            int c=x;
            x=y;
            y=c;
            
        }
        
    }
}
void binary(){
    
}