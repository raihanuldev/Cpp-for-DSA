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

Student* fun()
{
    Student*rakib = new Student(7891242,23);
    return rakib;
}

int main()
{   
    Student* rakib = fun();
    cout <<rakib->rol <<" " << rakib->year;
    return 0;
}