#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int num = 1;
    for(int i = 0; i < r; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < c; j++)
                cout << num++ << " ";
        } else {
            int temp = num + c - 1;
            for(int j = 0; j < c; j++)
                cout << temp-- << " ";
            num += c;
        }
        cout << endl;
    }
    return 0;
}
