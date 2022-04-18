#include "teacherassistant.h"
#include "student.h"
#include <iostream>
#include <string>

#pragma once

class Teacher:public TeacherAssistant
{
    public:

    Teacher(TeacherAssistant teacher):TeacherAssistant(teacher){};
    ~Teacher(){};
    void gradeStudent(Student &student, int grade);
};