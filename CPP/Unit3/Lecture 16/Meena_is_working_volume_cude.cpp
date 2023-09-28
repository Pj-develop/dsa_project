#include <iostream>
using namespace std;

class Box {
private:
    double width;
    double height;
    double depth;

public:
    Box() : width(0.0), height(0.0), depth(0.0) {}

    Box(double w, double h, double d) : width(w), height(h), depth(d) {}

    Box(double len) : width(len), height(len), depth(len) {}

    double volume() {
        return width * height * depth;
    }
};

int main() {
    double w1, h1, d1;
    double len2;
    Box mybox1;
    Box mybox2;
    Box mycube;

    cin >> w1 >> h1 >> d1;
    cin >> len2;

    mybox2 = Box(w1, h1, d1);
    mycube = Box(len2);

    double volume1 = mybox1.volume();
    double volume2 = mybox2.volume();
    double volumecube = mycube.volume();

    cout << "Volume of mybox1 is " << volume1 << endl;
    cout << "Volume of mybox2 is " << volume2 << endl;
    cout << "Volume of mycube is " << volumecube << endl;

    return 0;
}
