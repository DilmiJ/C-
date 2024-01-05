#include<iostream>
using namespace std;

class Student {
private:
    int studentno;
    int mark1;
    int mark2;
    int mark3;

public:
    void setstudentno(int no);
    void assignmark(int m1, int m2, int m3);
    float calcavg();
};

void Student::setstudentno(int no) {
    studentno = no;
}

void Student::assignmark(int m1, int m2, int m3) {
    mark1 = m1;
    mark2 = m2;
    mark3 = m3;
}

float Student::calcavg() {
    float avg = (mark1 + mark2 + mark3) / 3.0; 
    return avg;
}

int main() {
    
    Student student;
    student.setstudentno(123);
    student.assignmark(85, 90, 78);

    cout << "Average marks: " << student.calcavg() << endl;

    return 0;
}
