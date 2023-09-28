#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int customerNumbers[100];
    int queueSize = 0;

    for (int i = 0; i < n; i++) {
        customerNumbers[queueSize] = i + 1;
        queueSize++;
        cout << "Created " << i + 1 << endl;
    }

    for (int i = queueSize - 1; i >= 0; i--) {
        cout << "Destroyed " << customerNumbers[i-1] << endl;
    }

    return 0;
}
