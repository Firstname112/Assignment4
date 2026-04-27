#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;

int main(int argc, char ** argv)
{
    vector<Triangle> triangles;

    for (int i = 0; i < 3; i++) {
        float x1, y1, z1;
        float x2, y2, z2;
        float x3, y3, z3;

        cout << "Segitiga ke-" << i + 1 << endl;

        cout << "Masukkan titik A (x y z): ";
        cin >> x1 >> y1 >> z1;

        cout << "Masukkan titik B (x y z): ";
        cin >> x2 >> y2 >> z2;

        cout << "Masukkan titik C (x y z): ";
        cin >> x3 >> y3 >> z3;

        Point2D p1(x1, y1, z1);
        Point2D p2(x2, y2, z2);
        Point2D p3(x3, y3, z3);

        triangles.push_back(Triangle(p1, p2, p3));
    }

    cout << "\nHasil:\n";

    for (int i = 0; i < triangles.size(); i++) {
        cout << "Segitiga ke-" << i + 1 << ": ";
        triangles[i].TriangleType(); // karena return void
        cout << endl;
    }


    return 0;
}