#include<bits/stdc++.h>

using namespace std;
int main(){
    int a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    long long res = a* (b +c) + b * (a + c);
    cout << res << endl;
}