#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    // Default Constructor
    student()
    {
        cout << "Default Constructor" << endl;
        name = "Root";
        age = 18;
        gender = 0;
    }

    // Parameterised Constructor
    student(string n, int a, bool g)
    {
        cout << "Parameterised Constructor" << endl;
        name = n;
        age = a;
        gender = g;
    }

    //  Copy Constructor
    student(student &a)
    {
        cout << "Copy Constuctor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout << "Desctuctor called" << endl;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        string g = gender == 0 ? "Male" : "Female";
        cout << "Gender: " << g << endl;
    }

    void setName(string s)
    {
        name = s;
    }

    string getName()
    {
        return this->name;
    }

    bool operator==(student &a)
    {
        if ((name == a.name) && (age == a.age) && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    // student arr[3];
    // for (int i = 0; i < 2; i++)
    // {
    //     string s;
    //     cin >> s;
    //     arr[i].setName(s);
    //     cin >> arr[i].age;
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     arr[i].printInfo();
    // }

    student s;

    // s.printInfo();

    // s.setName("Varun");

    // student s("Varun", 23, 0);

    // s.printInfo();

    // student s2(s);  // Default Copy Constructor - shallow copy
    // student s3 = s; // Copy Constructor - deep copy

    // // Shallow copy coppies the pointes but leaves the locations to which they point to

    // s2.printInfo();

    student c = s; // Coppy constructor called here

    // Operator Overloading
    if (c == s)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }
}