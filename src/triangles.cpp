#include "include/triangles.hpp"
#include "include/point2d.hpp"
#include <iostream>
#include <cmath>

using namespace std;

// Constructor
Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3)
    : _t1(t1), _t2(t2), _t3(t3) {}

// Fungsi bantu hitung jarak (2D)
float distance(Point2D a, Point2D b) {
    return sqrt(
        pow(a.GetX() - b.GetX(), 2) +
        pow(a.GetY() - b.GetY(), 2)
    );
}

// Fungsi utama sesuai soal
void Triangle::TriangleType() {
    float a = distance(_t1, _t2);
    float b = distance(_t2, _t3);
    float c = distance(_t3, _t1);

    const float EPS = 1e-6;

    // sama sisi
    if (fabs(a - b) < EPS && fabs(b - c) < EPS) {
        cout << "sama sisi" << endl;
        return;
    }

    // siku-siku
    if (fabs(a*a + b*b - c*c) < EPS ||
        fabs(a*a + c*c - b*b) < EPS ||
        fabs(b*b + c*c - a*a) < EPS) {
        cout << "siku-siku" << endl;
        return;
    }

    // sama kaki
    if (fabs(a - b) < EPS ||
        fabs(a - c) < EPS ||
        fabs(b - c) < EPS) {
        cout << "sama kaki" << endl;
        return;
    }

    // selain itu
    cout << "sembarang" << endl;
}