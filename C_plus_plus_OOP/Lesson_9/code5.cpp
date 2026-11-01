#include <iostream>
using namespace std;

// Class Template
template <class T>
class StudentData
{
private:
    T data;

public:
    void setData(T d)
    {
        data = d;
    }

    T getData()
    {
        return data;
    }
};

int main()
{
    // Student ID
    // Using int for student ID
    StudentData<int> studentID;
    studentID.setData(12345);

    // Student GPA
    // Using double for student GPA
    StudentData<double> studentGPA;
    studentGPA.setData(3.85);

    cout << "Student ID: " << studentID.getData() << endl;
    cout << "Student GPA: " << studentGPA.getData() << endl;
    return 0;
}



