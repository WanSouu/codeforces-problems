#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, x;
    x=0;
    string y;
    for(cin >> num; num>0; num--) {
        cin >> y;
        x=(y[1]=='+') ? (x+1) : (x-1);
    }
    cout << x;
}