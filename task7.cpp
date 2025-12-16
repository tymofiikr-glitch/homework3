#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v, angle;
    cin >> v >> angle;

    const double g = 9.81;
    double rad = angle * M_PI / 180;

    double distance = (v*v * sin(2 * rad)) / g;
    cout << distance;

    return 0;
}
