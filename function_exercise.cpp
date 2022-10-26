#include<iostream>
#include<string.h>
#include <math.h>
using namespace std;

void menu()
{
    cout<<"1.Create patterns\n";
    cout<<"2.Logic demo\n ";
    cout<<"3.Terminate program \n"<<endl;

}
void SignIn()
{
    int i;
    int trials=3;
    int pin=1234;
    int PIN;
    string name="Student";
    string name2;
    cout<<"Write your pin"<<endl;
    cin>>PIN;
    cout<<"Write your userame"<<endl;
    cin>>name2;

    for(i=0;i<trials;trials--)
    {
        if(name!=name2 || pin!=PIN)
        {
            trials-- ;
            cout<<"You have"<<trials<<"remaining trials"<<endl;

            if(trials==1)
            {
                cout<<"You are not a member!!!"<<endl;
                menu();
            }
        }
    }
}
void shape()_
{
    int row ,column;
    int i ,j;
    char shape;
    cout<<"Enter number of rows"<<endl;
    cin>>row;
    cout<<"Enter number of columns"<<endl;
    cin>>column;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cout<<"Enter shape "<<endl;
            cin>>shape ;
            cout<<shape ;
        }
    }
}

int main()
{
     menu();
     int options =3;
     switch (options)
     {
      case 1:
          shape();
        break

      case 2:
          SignIn();
        break;

      case 3:
          return 0;
        break;
      }


}
