#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int totalMark;

    Student(int id, string name, char section, int totalMark) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMark = totalMark;
    }

    // Method to compare two students
    bool isBetterthan(Student other) {
        if (this->totalMark > other.totalMark) return true;
        if (this->totalMark == other.totalMark) {
            if (this->id < other.id) return true;
        }
        return false;
    }
};

int main() {
    int tcase;
    cin >> tcase;
    
    for (int i = 0; i < tcase; i++) {
        Student bestStudent(-1, "", ' ', -1);
        
        
        for (int j = 0; j < 3; j++) {
            int id, marks;
            string name;
            char section;

            cin >> id >> name >> section >> marks;

            Student currentStudent(id, name, section, marks);

            if (currentStudent.isBetterthan(bestStudent)) {
                bestStudent = currentStudent;
            }
        }

        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.section << " " << bestStudent.totalMark << endl;
    }

    return 0;
}
