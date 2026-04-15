#ifndef STUDENT_H
#define STUDENT_H
#include "Tutor.h"
class Student
{
private:
    double personalFee;
public:
    Student()
    {
        personalFee = 0;
    }
    void addFee(double fee)
    {
        personalFee += fee;
    }
    double getFee() const
    {
        return personalFee;
    }
    friend void Tutor::addFee(double, Student &);
    // This function can access Student class data member personal fee
    // and can add some amount into it
};
#endif

