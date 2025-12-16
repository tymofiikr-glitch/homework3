#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool ok = false;

    for(int i = 1; i <= n/2; i++) {
        if(s.substr(0, i) == s.substr(n-i, i)) {
            char mid = s[i];
            bool good = true;
            for(int j = i; j < n-i; j++)
                if(s[j] != mid) good = false;
            if(good) ok = true;
        }
    }
    cout << (ok ? "Yes" : "No");
    return 0;
}
