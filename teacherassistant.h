#include "person.h"
#include "faculty.h"
#include "course.h"
#include "student.h"
#include <iostream>
#include <string>

#pragma once

class TeacherAssistant:public Person, public Faculty
{
    public:

    TeacherAssistant():Email((string)" "), TeacherAssistantCourse(), Salary(0), Person(), Faculty(){};
    TeacherAssistant(string email, Course &course, int salary, Person teacherassistant, Faculty teacherassistantfaculty):Person(teacherassistant), Faculty(teacherassistantfaculty)
    {
        SetEmail(email);
        SetSalary(salary);
        SetCourse(course);
    }
    TeacherAssistant(TeacherAssistant &CopyTeacherAssistant);
    ~TeacherAssistant(){};
    TeacherAssistant& operator = (TeacherAssistant& AssignTeacherAssistant);
    void SetEmail(string email);
    string GetEmail() const;
    void SetSalary(int salary);
    int GetSalary() const;
    void SetCourse(Course &course);
    Course& GetCourse();
    void WriteHomeWork(Student &student);


    private:

    string Email;
    int Salary;
    Course TeacherAssistantCourse;
};