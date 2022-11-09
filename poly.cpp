#include<iostream>
using namespace std;

class student
{
private:
    string name ,admin;
    int mark;
public:
    student(string n, string r, int m);
    student();
    void doTest();
    void setIdentity();
    int score()
    {
        return mark;
    }
    void getIdentity();
};
student(string n,string r,int m);
{
    name=n;
    admin=r;
    mark=m;
}
student::student()
{
    cout<<"Enter registration number\n";
    cin>>admin;
    cout<<"Enter name of"<<admin<<endl;
    cin>>name;
    mark =0;

}
 void student::doTest()
{
 string unit;
 cout<<"Enter unit name\n";
 cin >>unit;
 cout<<"Enter mark scored in unit specified: \n";
 cin >>mark;
 if(mark>=40)
 {
     cout<<"You have passed\n";
 }
 else
 {
     cout<<"You have failed\n";
 }
  void student::setIdentity()
 {
     cout<"Enter name for "<<name<<endl;
     cin>>name;
     cout<<"Enter correct registration number for"<<name<<endl;
     cin>>>>admin;
     cout<<"Student identity set successfully"
 }
 void student::getIdentity()
 {
     cout<<"The student is"<<admin<<""<<name<<endl;
 }

 class lecturer
 {
 private:
    string name;
 public:
    lecture();
    void setname ();
    string getname();
    {
        return name();
    }
    void testStudent();
 };
 void lecture::setname();
 {
    // string unit();
     cout<<"Name of lecturer\n";
     cin>>name;
    /* cout<<"Unit you lecture\n";
     cin>>unit;*/
     cout<<"Name set successfully"<<endl;
 }

 string lecturer::getname();
 {
     cout<<"The lecturer name is"<<name<<endl;
 }

 void lecturer::testStudent(student s);
 {
     cout<<"The student being tested is\n";
     s.getIdentity();
     s.setIdentity();

 }

 int main()
 {
     student s1("John","CIT-227-002/2021",0)
     student s2("Jane","CIT-227-001/2021",0)
     cout<<"Student 1 details\n";
     s1.getIdentity();
     cout<<"Student 2 details\n";
     s2.getIdentity();
     s1.doTest();
     s2.doTest();
     cout<<"Student 1 scored"<<s1.score()<<endl;
     cout<<"Stuedent 2 scored"<<s2.score()<<endl;
     s1.setIdentiy();
     s2.setIdentity();
     lecture L1;
     L1.testStudent(s2);
     return 0;
 }
}
