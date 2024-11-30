#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int rol;
    int year;
    Student(int rol, int year)
    {
        this->rol = rol;
        this->year = year;
    }
};

int main()
{
    Student Rahim(789144, 2024);
    Student* rahim = new Student(1223,2024);
    cout << Rahim.rol <<endl;
    cout <<rahim->rol;
    return 0;
}

// this hocce ekta keyword |>