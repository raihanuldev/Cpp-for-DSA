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

Student fun()
{
    Student rakib = Student(789122,23);
    return rakib;
}

int main()
{   
    Student rakib = fun();
    cout <<rakib.rol;
    return 0;
}