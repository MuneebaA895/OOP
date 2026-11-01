#include "Tutor.h"
#include "Student.h"

void Tutor::addFee(double fee, Student &s)
{
    extraFee += fee;
    s.personalFee += fee; // friend access
}


