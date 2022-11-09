#include<iostream>
using namespace std;

class person
{
  protected :
      string name,gender;
      int YOB;
  public :
    person();
    void setname();
    void setGender();
    void setYOB();
    string getname();
    int getYOB();
    string getGender();
    void getAge();
};
void person::setname()
{
    cout<<"Your name: "<<endl;
    cin>>name;
}
void person::setGender()
{
    cout<<"Your gender: "<<endl;
    cin>>gender;
}
void person::setYOB()
{
    cout<<"Date if birth: "<<endl;
    cin>>YOB;
}
string person::getGender()
{
    cout<<"Gender: "<<gender<<endl;
}
string person::getname()
{
    cout<<"Name: "<<name<<endl;
}
int person::getYOB()
{
    cout<<"Year of birth: "<<YOB<<endl;
}
void person::getAge()
{
    int currentyear ,age;
    cout<<"Current year: "<<endl;
    cin>>currentyear;
    age=currentyear-YOB;
    cout<<"Age: "<<age<<" years old"<<endl;
}
class student:public person
{
    private:
        string regNo ,level;
        float feeBal;
    public:
        student();
        void setRegNo();
        void setLevel();
        void getDetails();
        void payFees();
        float checkBalance();
        void chargeFee();
};
void student::setRegNo()
{
    cout<<"Registration number: "<<endl;
    cin>>regNo;
}
void student::setLevel()
{
   cout<<"Year of study: "<<endl;
   cin>>level;
}

void student::payFees()
{
    float totalfees ,feePaid;
    cout<<"Total semester fees: "<<endl;
    cin>>totalfees;
    cout<<"Total fee paid: "<<endl;
    cin>>feePaid;
    feeBal=totalfees-feePaid;
}
float student::checkBalance()
{
   cout<<"Fee balance: "<<feeBal<<endl;

}
void student::chargeFee()
{
    cout<<"Fee balance is: "<<feeBal<<endl;
}
void student::getDetails()
{
    getname();
    setRegNo();
    getGender();
    getYOB();
    getAge();
    setLevel();
    chargeFee();
}
int main()
{
    cout<<"Creating a new student"<<endl;
    student s1;
    cout<<"Creating a new person"<<endl;
    person p1;
    s1.getDetails();
    return 0;
}
