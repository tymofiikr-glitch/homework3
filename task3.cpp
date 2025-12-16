#include <iostream>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    for(int i = 0; i < h; i++)
        cout << string(w, '*') << endl;

    return 0;
}
