#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct Point {
    int x, y;

    bool operator < (const Point& p) const {
        return (y < p.y) || (y == p.y && x < p.x);
    }
};


Point p0;

int ccw(Point p1, Point p2, Point p3) {
    return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}

int distanceSquared(Point p1, Point p2) {
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}


bool polarAngleCompare(Point p1, Point p2) {
    int order = ccw(p0, p1, p2);
    if (order == 0) {

        return distanceSquared(p0, p1) < distanceSquared(p0, p2);
    }
    return order > 0;
}

std::vector<Point> convexHull(std::vector<Point>& points) {
    int N = points.size();
    if (N < 3) return {};

    std::swap(points[0], *std::min_element(points.begin(), points.end()));
    p0 = points[0];


    std::sort(points.begin() + 1, points.end(), polarAngleCompare);

    // Step 3: Initialize the convex hull
    std::vector<Point> hull = {points[0], points[1]};
    int M = 1;


    for (int i = 2; i < N; i++) {

        while (M > 0 && ccw(hull[M - 1], hull[M], points[i]) <= 0) {
            if (M > 1) M--;
            else i++;
        }
        M++;
        hull.push_back(points[i]); // Add the next point to the hull
    }

    // Resize the hull to the correct size
    hull.resize(M + 1);
    return hull;
}

int main() {
    std::vector<Point> points = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, {3, 0}, {0, 0}, {3, 3}};

    std::vector<Point> hull = convexHull(points);

    std::cout << "Points on the convex hull are:\n";
    for (const auto& p : hull)
        std::cout << "(" << p.x << ", " << p.y << ")\n";

    return 0;
}
