#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[100][100];
    int top = 0, left = 0, bottom = r-1, right = c-1;
    int num = 1;

    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) a[top][i] = num++;
        top++;

        for(int i = top; i <= bottom; i++) a[i][right] = num++;
        right--;

        for(int i = right; i >= left; i--) a[bottom][i] = num++;
        bottom--;

        for(int i = bottom; i >= top; i--) a[i][left] = num++;
        left++;
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
