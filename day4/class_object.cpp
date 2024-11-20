#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:   //access modifer public,private,protected
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    int a; // build in function
    Student cr,secounCR;
    cin >>cr.name >>cr.roll>>cr.gpa;
    cin >>secounCR.name >>secounCR.roll>>secounCR.gpa;
    cout << cr.name <<" " <<cr.gpa <<" " <<cr.roll <<endl;
    cout << secounCR.name <<" " <<secounCR.gpa <<" " <<secounCR.roll <<endl;
    return 0;
}