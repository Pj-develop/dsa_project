#include <iostream>
using namespace std;

class Professor {
private:
    int ID;
    int salary;

public:
    Professor(int id = 0, int s = 0) {
        ID = id;
        salary = s;
    }

    void display() {
        cout << ID << " " << salary << endl;
    }

    bool isSalaryGreaterOrEqual() {
        return salary >= 20000;
    }
};

int main() {
    int N;
    cin >> N;

    Professor professors[N];

    for (int i = 0; i < N; i++) {
        int id, s;
        cin >> id >> s;
        professors[i] = Professor(id, s);
    }

    for (int i = 0; i < N; i++) {
        if (professors[i].isSalaryGreaterOrEqual()) {
            professors[i].display();
        }
    }

    return 0;
}
