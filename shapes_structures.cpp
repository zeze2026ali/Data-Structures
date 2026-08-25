#include <iostream>
#include <cmath>
using namespace std;

// Struct to represent a 2D point
struct Point {
    int x;
    int y;
};

// Function to input point coordinates
void input_point(Point &p) {
    cin >> p.x >> p.y;
}

// Function to print point coordinates in p(x,y) format
void output_point(Point p) {
    cout << "p(" << p.x << "," << p.y << ")";
}

// Function to calculate distance between two points
float dis(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// Struct to represent a circle with a center point and radius r
struct Circle {
    Point center;
    float r;
};

// Function to input circle details
void input(Circle &c) {
    input_point(c.center);
    cin >> c.r;
}

// Function to output circle details
void output(Circle c) {
    output_point(c.center);
    cout << " r = " << c.r;
}

// Function to calculate circle area
double area(Circle c) {
    return 3.14 * c.r * c.r;
}

// Function to compare two circles and return the one with the larger area
Circle compare_circle(Circle c1, Circle c2) {
    if (area(c1) > area(c2))
        return c1;
    else
        return c2;
}

// Function to test point position relative to a circle (on, in, out)
void test_point(Circle c, Point p) {
    float d = dis(p, c.center);

    if (d == c.r)
        cout << "on";
    else if (d < c.r)
        cout << "in";
    else
        cout << "out";
}

int main() {
    // Array of 10 circles
    Circle A[10];
    for (int i = 0; i < 10; i++) {
        input(A[i]);
    }

    // Input target point
    Point p;
    input_point(p);

    // Find the circle whose center is closest to point p
    Circle min = A[0];
    for (int i = 1; i < 10; i++) {
        if (dis(A[i].center, p) < dis(min.center, p)) {
            min = A[i];
        }
    }

    // Output closest circle details
    output(min);
    cout << endl;

    // Test point position relative to closest circle
    test_point(min, p);
    cout << endl;

    // Find circle with the largest area
    Circle max = A[0];
    for (int i = 1; i < 10; i++) {
        if (area(A[i]) > area(max)) {
            max = A[i];
        }
    }

    // Output center of the largest circle
    output_point(max.center);
    cout << endl;

    return 0;
}
