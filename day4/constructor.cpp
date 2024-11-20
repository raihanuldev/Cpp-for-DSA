#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int rol;
    int year;
    Student(int r,int y){
        rol = r;
        year = y;
    }
};

int main()
{
    Student Rahim(789144,2024);
    cout <<Rahim.rol;
    return 0;
}