#include "student.h"

    Student::Student(Student &CopyStudent)
    {
        *this = CopyStudent;
    }

    Student::~Student(){}

    Student& Student::operator = (const Student& AssignStudent)
    {
        SetEmail(AssignStudent.GetEmail());
        SetCredits(AssignStudent.GetCredits());
        SetNumberOfCourses(AssignStudent.GetNumberOfCourses());
        for (int i = 0; i < GetNumberOfCourses(); i++)
        {
            Courses[i] = AssignStudent.Courses[i];
        }
        Person::SetPersonName(AssignStudent.Person::GetPersonName());
        Person::SetAge(AssignStudent.Person::GetAge());
        Person::SetHeight(AssignStudent.Person::GetHeight());
        Person::SetWeight(AssignStudent.Person::GetWeight());
        Faculty::SetName(AssignStudent.Faculty::GetName());
        Faculty::SetHeadOfFaculty(AssignStudent.Faculty::GetHeadOfFaculty());
        Faculty::SetFloor(AssignStudent.Faculty::GetFloor());
        Faculty::SetCredits(AssignStudent.Faculty::GetCredits());
        Faculty::SetScholerShipGrade(AssignStudent.Faculty::GetScholerShipGrade());
        return *this;
    }

    void Student::SetEmail(string email)
    {
        Email = email;
    }

    string Student::GetEmail() const
    {
        return Email;
    }

    void Student::SetCredits(int credits)
    {
        Credits = credits;
    }

    int Student::GetCredits() const
    {
        return Credits;
    }

    int Student::IsStudying(const Course& course)
    {
        if (NumberOfCourses == 0)
        {
            cout << "This student does'nt have courses" << endl;
        }

        for (int i = 0; i < NumberOfCourses; i++)
        {
            if (Courses[i].GetName().compare(course.GetName()) == 0)
            {
                return 1;
            }
            
        }
        return 0;
    }

    float Student::AVG()
    {
        if (NumberOfCourses == 0)
        {
            cout << "This student does'nt have courses" << endl;
        }

        float sum = 0;
        float avg;

        for (int i = 0; i < NumberOfCourses; i++)
        {
            sum += Courses[i].GetGrade();
        }

        avg = sum/NumberOfCourses;
        return avg;
    }

    void Student::DoHomeWork(const Course &course)
    {
        if (NumberOfCourses == 0)
        {
            cout << "This student does'nt have courses" << endl;
        }

        for (int i = 0; i < NumberOfCourses; i++)
        {
            if (Courses[i].GetName().compare(course.GetName()) == 0)
            {
                Courses[i].SetHomeWork(0);
            }
        }
    }

    void Student::AddCourse(const Course &course)
    {
        if (NumberOfCourses >= 10)
        {
            cout << "Students can't have more then 10 courses" << endl;
            return;
        }
        
        Courses[NumberOfCourses++] = course;
    }

    void Student::StudentHomework(Course &course)
    {
        int NumberOfCourses = sizeof(Courses) / sizeof(*Courses);
        if (NumberOfCourses == 0)
        {
            cout << "This student does'nt have courses" << endl;
            return;
        }

        for (int i = 0; i < NumberOfCourses; i++)
        {
            if (Courses[i].GetName().compare(course.GetName()) == 0)
            {
                Courses[i].SetHomeWork(0);
            }
        }
    }

    int Student::DidHomeWork(const Course &course)
    {
        if (NumberOfCourses == 0)
        {
            cout << "This student does'nt have courses" << endl;
            return 0;
        }

        for (int i = 0; i < NumberOfCourses; i++)
        {
            if (Courses[i].GetName().compare(course.GetName()) == 0)
            {
                if (Courses[i].GetHomeWork() == 0)
                {
                    return 1;
                }
            }
        }
        return 0;
    }

    void Student::Grade(Course &course, int grade)
    {
        int NumberOfCourses = sizeof(Courses) / sizeof(*Courses);
        if (NumberOfCourses == 0)
        {
            cout << "This student does'nt have courses" << endl;
            return;
        }

        for (int i = 0; i < NumberOfCourses; i++)
        {
            if (Courses[i].GetName().compare(course.GetName()) == 0)
            {
                Courses[i].SetGrade(grade);
            }
        }
    }

    void Student::SetNumberOfCourses(int numberofcourses)
    {
        NumberOfCourses = numberofcourses;
    }

    int Student::GetNumberOfCourses() const
    {
        return NumberOfCourses;
    }