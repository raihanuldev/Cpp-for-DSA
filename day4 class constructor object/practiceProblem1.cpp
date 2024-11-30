#include <bits/stdc++.h>
using namespace std;


class Student {
    public:
    char names[200];
    int roll;
    char section;
    int math_marks;
    char cls[20];

    Student(char* n,int r,char s,int Marks,char* clss){
        strcpy(names, n);
        roll = r;
        section = s;
        math_marks = Marks;
        strcpy(cls,clss);
    }
};

int main()
{
    Student s1("Rahim",789122,'a',11,"Five");
    Student s2("Ajom",789122,'a',76,"five");
    Student s3("habib",789122,'a',111,"five");

    if(s1.math_marks>s2.math_marks && s1.math_marks > s3.math_marks){
        cout <<"Name "<<s1.names <<endl;
        cout <<"Roll "<<s1.roll <<endl;
        cout <<"Highest Mark "<<s1.math_marks <<endl;
    }
    if(s2.math_marks>s1.math_marks && s2.math_marks > s3.math_marks){
        cout <<"Name "<<s2.names <<endl;
        cout <<"Roll "<<s2.roll <<endl;
        cout <<"Highest Mark "<<s2.math_marks <<endl;
    }
    if(s3.math_marks>s1.math_marks && s3.math_marks > s2.math_marks){
        cout <<"Name "<<s3.names <<endl;
        cout <<"Roll "<<s3.roll <<endl;
        cout <<"Highest Mark "<<s3.math_marks <<endl;
    }
    return 0;
} 