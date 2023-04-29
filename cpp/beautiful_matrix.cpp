#include <bits/stdc++.h>
using namespace std;
int main() {
    char cur;
    int x, y;
    x=y=0;
    while(cin >> cur) {
        if (cur=='1') {
            cout << (abs(2-x)+abs(2-y));
            break;
        }
        x++;
        if (x>4) { x=0; y++; }
    }
}