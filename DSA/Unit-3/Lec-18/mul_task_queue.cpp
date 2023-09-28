#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    int priority;
    int deadline;
    string name;

    // Constructor
    Task(int p, int d, string n) : priority(p), deadline(d), name(n) {}

    // Custom comparison operator for sorting tasks
    bool operator<(const Task& other) const {
        if (priority != other.priority)
            return priority > other.priority; // Higher priority first
        return deadline < other.deadline;     // Earlier deadline first
    }
};

int main() {
    int N;
    cin >> N;

    vector<Task> tasks;
    for (int i = 0; i < N; ++i) {
        int priority, deadline;
        string taskName;
        cin >> priority >> deadline >> taskName;
        tasks.push_back(Task(priority, deadline, taskName));
    }

    // Sort the tasks based on priority and deadline
    sort(tasks.begin(), tasks.end());

    cout << "Executed Tasks:" << endl;
    for (const Task& task : tasks) {
        cout << task.name << endl;
    }

    return 0;
}
