#include "person.h"
#include "faculty.h"
#include "course.h"
#include <iostream>
#include <string>

#pragma once

class Student:public Person, public Faculty
{
    public:

    Student():Email((string)" "), Credits(0),NumberOfCourses(0), Person(), Faculty(){};
    Student(string email, int studentcredits, Person &student, Faculty &studentfaculty, int numberofcourses = 0):Person(student), Faculty(studentfaculty)
    {
        SetEmail(email);
        SetCredits(studentcredits);
        SetNumberOfCourses(numberofcourses);
    };
    Student(Student &CopyStudent);
    ~Student();
    Student& operator = (const Student& AssignStudent);
    void SetEmail(string email);
    string GetEmail() const;
    void SetCourses(Course* courses);
    Course* GetCourses() const;
    void SetCredits(int credits);
    int GetCredits() const;
    int IsStudying(const Course &course);
    float AVG();
    void DoHomeWork(const Course &course);
    void AddCourse(const Course &course);
    void StudentHomework(Course &course);
    int DidHomeWork(const Course &course);
    void Grade(Course &course, int grade);
    void SetNumberOfCourses(int numberofcourses);
    int GetNumberOfCourses() const;

    private:

    string Email;
    Course Courses[10];
    int NumberOfCourses;
    int Credits;
    int CoursesNum;
};