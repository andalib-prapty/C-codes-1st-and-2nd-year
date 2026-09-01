#include <iostream>
#include <cmath>
using namespace std;

class triangle {
private:
    int edge1, edge2, edge3;
    static int N;

public:
    triangle() {
        edge1 = 0;
        edge2 = 0;
        edge3 = 0;
    }
    void setEdge(int x, int y, int z) {
        edge1 = x;
        edge2 = y;
        edge3 = z;
        N++;
    }
    void Display() {
        cout << "The Edges are " << edge1 << " " << edge2 << " " << edge3 << endl;
        cout << "Area=" << Area() << endl;
        cout << "Perimeter=" << Perimeter() << endl;
    }
    int Area() {
        int s = (edge1 + edge2 + edge3) / 2;
        int a = sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
        return a;
    }
    int Perimeter() {
        int p = edge1 + edge2 + edge3;
        return p;
    }
    static int getN() {
        return N;
    }
    friend void compareArea(triangle &t1, triangle &t2) {
    int area1 = t1.Area();
    int area2 = t2.Area();

    if (area1 > area2) {
        cout << "Triangle 1 has a bigger area." << endl;
    } else if (area2 > area1) {
        cout << "Triangle 2 has a bigger area." << endl;
    } else {
        cout << "Both triangles have the same area." << endl;
    }
}
};


int triangle::N = 0;

int main() {
    triangle t1, t2;
    t1.setEdge(4, 3, 5);
    t2.setEdge(12, 5, 13);
    compareArea(t1, t2);
    t1.Display();
    t2.Display();
    return 0;
}
