#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mid = n / 2;

    for(int i = 0; i < n; i++) {
        int spaces = abs(mid - i);
        int stars = n - 2 * spaces;

        cout << string(spaces * 2, ' ');
        for(int j = 0; j < stars; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
