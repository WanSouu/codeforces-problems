#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, k, j, i, p;
    cin >> x;
    for(k = j = 0; cin >> i; k++) {
        j=j+i;
        if (k==2) {
            if (j>=2) {
                p=p+1;
            }
            k=-1;
            j=0;
            
        }
    }
    cout << p;
}