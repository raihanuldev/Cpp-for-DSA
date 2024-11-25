#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int totalMark;

    Student(string name,int roll,int totalMark)
    {
        (*this).name = name;
        this->roll = roll;
        this->totalMark = totalMark;
    }
    void show(){
        cout <<"Take Love From "<<name<<" ID NUmber: "<<roll<<endl;
    }
};

int main()
{
    Student raihan("raihan Sharif",789144,567);
    Student sahel("sahel",789144,567);

    sahel.show();
    raihan.show();
    return 0;
}