#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, i, j, min;
    min=0;
    cin >> n >> k;
    while(cin >> i) {
        if (i<min || i<1) {
            break;
        }
        j++;
        if (j==k) {
            min=i;
        }
    }
    cout << j;
}