#include "teacher.h"

    void Teacher::gradeStudent(Student &student, int grade)
    {
        if(student.IsStudying(GetCourse()) == 0)
        {
            cout << "This student does'nt study this course" << endl;
            return;
        }

        if (student.DidHomeWork(GetCourse()) == 0)
        {
            student.Grade(GetCourse(), 0);
            return;
        }
        else
            student.Grade(GetCourse(), grade);
            return;
    }