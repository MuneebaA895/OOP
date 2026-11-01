// Independent Friend Function Example in C++
#include<iostream>
#include<string>
using namespace std;

class ExamDepartment{
    private:
       string studentName;
       int studentAttendance;

    public:
       // Constructor to initialize student details
       ExamDepartment(string name, int attendance){ 
            studentName= name;
            studentAttendance = attendance; // Attendance percentage
       }

       // Declaring a friend function inside the ExamDepartment Class
       friend void facultyAccess(ExamDepartment &student1);
};


//Definition of friend function (OUTSIDE class)
void facultyAccess(ExamDepartment &student1){
    char choice;
    cout<<"......Attendance is Accessed by Faculty......"<<endl;
    cout<<"Student Name: "<<student1.studentName<<endl;
    cout<<"Student Attendance: "<<student1.studentAttendance<<endl;

    cout<<"Do you want to increase student attendance to 75 %? Enter Y for yes "<<endl;
    cin>>choice;
    if(choice=='y' || choice=='Y'){
        student1.studentAttendance=75;
        cout<<student1.studentName<<"'s attendance has been icreased to 75% "<<endl;
    }
    else{
        cout<<"Attendance not increased!"<<endl;
    }  
}
int main(){
    ExamDepartment student1("Ahmed", 60); 
    facultyAccess(student1);

    return 0;
}




