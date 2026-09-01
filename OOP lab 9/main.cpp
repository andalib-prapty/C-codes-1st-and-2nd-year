#include <iostream>
#include <queue>
using namespace std;

class Queue {
private:
    queue<int> data;

public:
    void enqueue(int value) {
        data.push(value);
    }

    void dequeue() {
        if (!data.empty()) {
            data.pop();
        } else {
            cout << "Queue is empty. Cannot dequeue." << endl;
        }
    }

    void front() {
        if (!data.empty()) {
            cout << "Front element: " << data.front() << endl;
        } else {
            cout << "Queue is empty." << endl;
        }
    }

    void back() {
        if (!data.empty()) {
            cout << "Rear element: " << data.back() << endl;
        } else {
            cout << "Queue is empty." << endl;
        }
    }

    bool empty() {
        return data.empty();
    }
};

void displayMenu() {
    cout << "**** Queue Menu ****" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Front" << endl;
    cout << "4. Rear" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your option: ";
}

int main() {
    Queue q;
    int option, value;

    do {
        displayMenu();
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter a value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.front();
                break;

            case 4:
                q.back();
                break;

            case 5:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }

    } while (option != 5);

    return 0;
}
