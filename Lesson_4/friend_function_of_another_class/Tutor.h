#ifndef TUTOR_H
#define TUTOR_H

class Student; // Forward declaration
class Tutor
{
private:
    double extraFee;

public:
    Tutor()
    {
        extraFee = 0;
    }
    double getExtraFee() const
    {
        return extraFee;
    }
    void addFee(double, Student &s);
};
#endif

