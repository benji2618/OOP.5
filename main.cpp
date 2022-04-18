#include "teacher.h"

using namespace std;

int main()  // מגישים: אילי אזולאי 318249828
            // בנימין ללוש 328944657
{
    Person jon("jon", 18, 1.7 , 63);
    Person avi("avi", 19, 1.8 , 70);
    Person ron("ron", 20, 1.75 , 67);
    Person benjamin("benjamin", 18, 1.7 , 78);
    Person tomer("tomer", 21, 1.72 , 70);
    Person roni("roni", 23, 1.67 , 59);
    Person eve("eve", 27, 1.65 , 57);
    Person daria("daria", 18, 1.71 , 55);
    Person beni("beni", 19, 1.83 , 70);
    Person kobi("kobi", 25, 1.76 , 65);
    Person eti("eti", 25, 1.63 , 57);
    Person yona("yona", 25, 1.59 , 61);
    Person rina("rina", 25, 1.62 , 60);
    Person hadar("hadar", 25, 1.70 , 62);
    Person yonit("yonit", 25, 1.72 , 65);
    Person rami("rami", 25, 1.76 , 76);


    Course logic("logic", 0, 3, 0);
    Course design("design", 0, 5, 0);
    Course java("jave", 0, 5, 0);


    Faculty IBD ("IBD", "yoram avramson", 0, 120,85);

    Student Jon("jon@gmail.com", 0, jon, IBD);
    Student Avi("Avi@gmail.com", 0, avi, IBD);
    Student Ron("Ron@gmail.com", 0, ron, IBD);
    Student Benjamin("Benjamin@gmail.com", 0, benjamin, IBD);
    Student Tomer("Tomer@gmail.com", 0, tomer, IBD);
    Student Roni("Roni@gmail.com", 0, roni, IBD);
    Student Eve("Eve@gmail.com", 0, eve, IBD);
    Student Daria("Daria@gmail.com", 0, daria, IBD);
    Student Beni("Beni@gmail.com", 0, beni, IBD);
    Student Kobi("Kobi@gmail.com", 0, kobi, IBD);

    Student* Students = new Student[10];
    Students[0] = Jon;
    Students[1] = Avi;
    Students[2] = Ron;
    Students[3] = Benjamin;
    Students[4] = Tomer;
    Students[5] = Roni;
    Students[6] = Eve;
    Students[7] = Daria;
    Students[8] = Beni;
    Students[9] = Kobi;


    TeacherAssistant Eti("eti@gmail.com", logic, 5000, eti, IBD);
    TeacherAssistant Yona("yona@gmail.com", design, 5000, yona, IBD);
    TeacherAssistant Rina("rina@gmail.com", java, 5000, rina, IBD);

    TeacherAssistant TeacherAssistants[3]{Eti, Yona, Rina};

    TeacherAssistant HadarTamplate("hadar@gmail.com", logic, 10000, hadar, IBD);
    TeacherAssistant YonitTamplate("yonit@gmail.com", design, 12000, yonit, IBD);
    TeacherAssistant RamiTamplate("rami@gmail.com", java, 12000, rami, IBD);

    Teacher Hadar(HadarTamplate);
    Teacher Yonit(YonitTamplate);
    Teacher Rami(RamiTamplate);

    Teacher Teachers[3]{Hadar, Yonit, Rami};

    for (int i = 0; i < 10; i++)
    {
        Students[i].AddCourse(logic);
        Students[i].AddCourse(design);
        Students[i].AddCourse(java);
    }

    cout << "***Study course check***" << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        if(Students[i].IsStudying(logic) == 1)
        {
            cout << Students[i].GetPersonName() << " Study this course" << endl;
            cout << endl;
        }
        else
        {
            cout << Students[i].GetPersonName() << " Not study this course" << endl; 
            cout << endl;
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            TeacherAssistants[i].WriteHomeWork(Students[j]);
        }        
    }

    for (int i = 0; i < 5; i++)
    {
        Students[i].DoHomeWork(logic);
        Students[i].DoHomeWork(design);
        Students[i].DoHomeWork(java);
    }

    int grade = 70;

    cout << "***Grades***" << endl << endl;
    for (int i = 0; i < 3; i++)
    {
        Course course = Teachers[i].GetCourse();
        cout << course.GetName() << endl << endl;

        for (int j = 0; j < 10; j++)
        {
            Teachers[i].gradeStudent(Students[j], ++grade);
            cout << Students[j].GetPersonName() <<": " << grade << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << Students[i].GetPersonName() << endl;
        cout << "AVG: " << Students[i].AVG() << endl;
        cout << "Grade need for scholership: " << Students[i].GetScholerShipGrade() << endl;
        Students[i].CheckScholershipCondition(Students[i].AVG());
        cout << endl;

    }
        
}
