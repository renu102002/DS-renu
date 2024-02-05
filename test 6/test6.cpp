#include <iostream>
using namespace std;

int main() {
    string cars[5] = { "volvo", "toyota", "ford", "tesla", "honda" };
    int n = sizeof(cars) / sizeof(string);

    for (int i = 0; i < n; i++) {
        cout << cars[i] << "\n";
    }

    return 0;
}
