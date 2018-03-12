//https://www.hackerrank.com/challenges/virtual-functions/problem

//FILE: Virtual Functions.cpp
//AUTHOR: Cori Beemish
//DATE: March 12th, 2018

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int professor_id = 0;
int student_id = 0;

class Person{
public:
    string name;
    int age, sum, id;
    virtual void putdata()=0;
	virtual void getdata()=0;
};

class Professor : public Person{
private:
    int publications;

public:
    void getdata(){ cin >> name >> age >> publications; }
    void putdata(){ cout << name << " " << age << " " << publications << " " << ++professor_id << endl; }
};

class Student : public Person{
public:
    void getdata(){
        cin >> name >> age;
        sum = 0;
        for (int i = 0, marks; i < 6; i++) {
            cin >> marks;
            sum += marks;
        }
    }
    void putdata(){
        cout << name << " " << age << " " << sum << " " << ++student_id << endl;
    }
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
             //If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
