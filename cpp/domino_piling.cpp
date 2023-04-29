#include <bits/stdc++.h>
using namespace std;
int main() {
    int w,h,area;
    cin >> w >> h;
    area=w*h;
    cout << (area%2==0 ? area/2 : (area+1)/2-1);
}