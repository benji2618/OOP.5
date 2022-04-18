#include "course.h"

Course::Course(string name, float grade, int credits, int homework)
{
    SetName(name);
    SetGrade(grade);
    SetCredits(credits);
    SetHomeWork(homework);
}

Course::Course(Course &CopyCourse)
{
    *this = CopyCourse;
}

Course& Course::operator = (const Course& AssignCourse)
{
    SetName(AssignCourse.GetName());
    SetGrade(AssignCourse.GetGrade());
    SetCredits(AssignCourse.GetCredits());
    SetHomeWork(AssignCourse.GetHomeWork());
    return *this;
}
void Course::SetName(string name)
{
    Name = name;
}

string Course::GetName() const
{
    return Name;
}

void Course::SetGrade(float grade)
{
    Grade = grade;
}

float Course::GetGrade() const
{
    return Grade;
}

void Course::SetCredits(int credits)
{
    while (credits > 5)
    {
        cout << "Course credit can't be above 5, enter credit again";
        cin >> credits;
    }
    
    Credits = credits;
}

int Course::GetCredits() const
{
    return Credits;
}

void Course::SetHomeWork(int homework)
{
    HomeWork = homework;
}

int Course::GetHomeWork() const
{
    return HomeWork;
}