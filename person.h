#include <iostream>
#include <string>

using namespace std;

#pragma once

class Person
{
    public:

    Person():PersonName(" "), Age(18), Height(1.7f), Weight(60.0f){};
    Person(string personname, int age, float height, float weight);
    Person(Person &CopyPerson);
    virtual ~Person(){};
    Person& operator = (const Person& AssignPerson);
    void SetPersonName(string personname);
    string GetPersonName() const;
    void SetAge(int age);
    int GetAge() const;
    void SetHeight(float height);
    float GetHeight() const;
    void SetWeight(float weight);
    float GetWeight() const;

    private:

    string PersonName;
    int Age;
    float Height;
    float Weight;
};