#include <iostream>
using namespace std;

int main() {
    string cars[4] = { "volvo", "BMW", "Tesla", "Ford" };

    for (int i = 0; i < 4; i++) {
        cout << cars[i] << ",\n";
    }

    return 0;
}
