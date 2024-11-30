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
    Student rakib(78931242,23);
    Student* p = &rakib;
    return p;
}

int main()
{   
    Student* p = fun();
    cout <<p->rol <<" " <<p->year;
    return 0;
}