#include <iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    Student()
    {
        rollno=0;
        name=" ";
    }
    Student( int r,string nm)
    {
        rollno=r;
        name=nm;
    }
    void display()
    {
        cout<<"rollno"<<rollno<<endl;;
        cout<<"name"<<name<<endl;
    }


};
int main()
{
    Student students[5]=
    {
        Student(1,"hdjhdj"),
         Student(2,"hdjhdj"),
          Student(3,"hdjhdj"),
           Student(4,"hdjhdj"),
            Student(5,"hdjhdj"),

    };
    cout<<"========students info=======";
    for(int i=0;i<=5;i++)
    {
        students[i].display();
    }



}