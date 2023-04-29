#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, i, len;
    std::string word;
    cin >> x;
    while(cin >> word) {
        len=(word.length());
        if (len>10) {
            cout << (word[0]);
            cout << (len-2);
            cout << (word[len-1]);
        }else {
            for(i = 0; i < len; i++) {
                cout << char(word[i]);
            }
        }
        cout << "\n";
    }
}
