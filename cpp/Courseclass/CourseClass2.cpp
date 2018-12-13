//DateClass2.cpp
//Prem Agarwal 12/11/2018
// This program shows use of constructor for initializing class variables
//data members of this class string course, int unitsamount and string instructor
//Provide get and set function of each data member. provide display course
#include <iostream>
#include <string>
using namespace std;

class CourseClass   {
    public:
        string course;
        int unitsamount;
        string instructor;
    CourseClass (string acourse, int aunitsamount, string ainstructor){
        course = acourse;
        unitsamount = aunitsamount;
        instructor = ainstructor;
    }
    void setcourse(string acourse){
        course = acourse;
    }
    string getcourse() const {
        return course;
    }
    void setunitsamount(int aunitsamount){
        unitsamount = aunitsamount;
    }
    int getunitsamount() const {
        return unitsamount;
    }
    void setinstructor(string ainstructor){
        instructor = ainstructor;
    }
    string getinstructor() const {
        return instructor;
    }

    void displaycourse() const
    {
        cout <<"Course Name: "<< getcourse()<<"\n"<<"Units: "<< getunitsamount()<<"\n"<< "Instuctor's name: "<<getinstructor();
        cout << "\nEnd of call to displaycourse\n" ;
    }
};

int main()
{
        CourseClass CC1("C++",4,"Dr. Avid");
        CC1.displaycourse();
        CC1.setunitsamount(160);
        CC1.displaycourse();
        return 0;


}

