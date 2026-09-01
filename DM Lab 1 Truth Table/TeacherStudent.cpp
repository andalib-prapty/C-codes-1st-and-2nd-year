#include <iostream>
#include <map>
#include <string>

using namespace std;

const int MAX= 100;
struct Courses {
    string courseL[MAX];
    int courseCount = 0;
};

map<string, Courses> instructorCourses;
map<string, Courses> studentCourses;

void AddCourseToPerson(Courses& person, const string& course) {
    if (person.courseCount < MAX) {
        person.courseList[person.courseCount] = course;
        person.courseCount++;
    } else {
        cout << "Maximum number of courses reached for this person." << endl;
    }
}

void Instructor() {
    string name, course;
    cout << "Enter Instructor Name: ";
    cin >> name;
    cout << "Enter Course: ";
    cin >> course;
    AddCourseToPerson(instructorCourses[name], course);
}

void Enrollment() {
    string name, course;
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Course: ";
    cin >> course;
    AddCourseToPerson(studentCourses[name], course);
}

void Query() {
    string studentName, instructorName;
    cout << "Enter Student Name: ";
    cin >> studentName;
    cout << "Enter Instructor Name: ";
    cin >> instructorName;

    bool commonFound = false;
    for (int i = 0; i < instructorCourses[instructorName].courseCount; i++) {
        for (int j = 0; j < studentCourses[studentName].courseCount; j++) {
            if (instructorCourses[instructorName].courseList[i] == studentCourses[studentName].courseList[j]) {
                cout << "Common Course: " << instructorCourses[instructorName].courseList[i] << endl;
                commonFound = true;
                break;
            }
        }
    }

    if (!commonFound) {
        cout << "No common courses found." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "1. Instructor" << endl;
        cout << "2. Enrollment" << endl;
        cout << "3. Query" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: Instructor(); break;
            case 2: Enrollment(); break;
            case 3: Query(); break;
            case 4: cout << "Exiting program." << endl; break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

