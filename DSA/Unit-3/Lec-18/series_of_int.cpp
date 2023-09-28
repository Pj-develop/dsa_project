#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n; // Number of elements in the queue

    queue<int> q;
    
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        q.push(element); // Enqueue elements into the queue
    }

    int sum = 0;

    while (!q.empty()) {
        sum += q.front(); // Calculate the sum of elements in the queue
        q.pop(); // Dequeue elements
    }

    if (sum == 0) {
        cout << "Queue is empty." << endl;
    } else {
        cout << sum << endl;
    }

    return 0;
}
