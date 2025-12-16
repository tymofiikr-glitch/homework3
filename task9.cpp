#include <iostream>
using namespace std;

int main() {
    double sum;
    cin >> sum;

    if(sum > 1000) sum *= 0.95;
    else if(sum > 500) sum *= 0.97;

    cout << sum;
    return 0;
}
