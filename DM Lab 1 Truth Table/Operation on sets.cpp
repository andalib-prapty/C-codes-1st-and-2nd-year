#include <iostream>
#include <set>
#include<algorithm>
using namespace std;
int main() {

    set<int> setA, setB;
    int sizeA, sizeB;

    cout << "Enter the size of Set A: ";
    cin >> sizeA;
    cout << "Enter the elements of Set A ";
    for (int i = 0; i < sizeA; ++i) {
        int element;
        cin >> element;
        setA.insert(element);
    }

    cout << "Enter the size of Set B: ";
    cin >> sizeB;
    cout << "Enter the elements of Set B: ";
    for (int i = 0; i < sizeB; ++i) {
        int element;
        cin >> element;
        setB.insert(element);
    }

    set<int> unionSet, intersectionSet, differenceSetA, differenceSetB, symmetricDifferenceSet;


    set_union(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(unionSet, unionSet.begin()));

    set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(intersectionSet, intersectionSet.begin()));

    set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(differenceSetA, differenceSetA.begin()));

    set_difference(setB.begin(), setB.end(), setA.begin(), setA.end(), inserter(differenceSetB, differenceSetB.begin()));

    set_symmetric_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), std::inserter(symmetricDifferenceSet, symmetricDifferenceSet.begin()))

    cout << "A union B: ";
    for (int element : unionSet) {
        cout << element << " ";
    }
    cout << endl;

    cout << "A intersects B: ";
    for (int element : intersectionSet) {
        cout << element << " ";
    }
    cout << endl;

    cout << "A - B: ";
    for (int element : differenceSetA) {
        cout << element << " ";
    }
    cout << endl;

    cout << "B - A: ";
    for (int element : differenceSetB) {
        cout << element << " ";
    }
    cout << endl;

    cout << "A symmetric difference B: ";
    for (int element : symmetricDifferenceSet) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
