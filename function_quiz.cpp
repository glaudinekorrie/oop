/*create a function Menu with lists of 3 tasks
select one task and if not i the list, call back the menu function*/
//2.prompt for desired pattern character
//size of pattern
//shape of pattern
/*3. Logic demo function
   -enter username and PIN
   -if correct ,welcome messsge
   -if wrong trials which=3 reduces each time
   -when trial are over "you are not the owner"*/
   #include<iostream>
   #include<string.h>
   #include<conio.h>
   #include<math.h>

   using namespace std;

   void menu ()
   {
       cout<<"1.Create patterns\n";
       cout<<"2.Logic demo\n ";
       cout<<"3.Terminate program \n"<<endl;

       return ;
   }
   int shape(int ,int)
   {
       int size ;
       int row,col;
       cout<<"Enter the number of rows: ";
       cin>>row;
       cout<<"Enter the number of columns: ";
       cin>>col;
       for(int row=1;row<=size;row++)
       {
           for(int col=1;col<=size;col++)
           {
               cout<<size;
           }
       }
       return (int shape);
   }


   int main()
   {
       int option ,rows,col ;
       int trials=3;
       string PIN = "1234";
       string pin="1234";
       int size, shape;
       char character;
       string name="Student" ;
       string name2="Student";

       menu ();
       cout<<"Choose option"<<endl;
       cin >> option;

       if(option == 1)
       {

            cout<<"Choose a desired shape from the list\n a.Square\n b.Circle\n c.Triangle"<<endl;
            cout<<"Input your desired shape"<<endl;
            cin>>shape ;

            cout<<"Select your desired pattern character: "<<endl;
            cin>>character ;

            cout<<"number of rows: "<<endl;
            cin>>rows ;

            cout<<"Enter number of columns: "<<endl;
            cin>>col;

            for(int row=1; row<=size; row++)
            {
                for(int col=1; col<=size; col++)
                {

                     cout<<character;
                }
            }

       }
       else if(option == 2)
       {
           cout<<"Enter your username"<< endl;
           cin>> name2;
           cout<<"Enter user PIN"<<endl;
           cin>> pin ;

            if(name==name2 && pin==PIN)
            {
             cout<<"Welcome"<<endl;
            }
            else
            {
                for(i=0;i<=trials;trials--)
                {
                    cout<<"Error!!/nYou have"<<trials<<"trails remaining"<<endl;
                    if (i==0)
                    {
                        cout<<"You are not a student"<<endl;
                    }
                }

            }

       }
       else if (option == 3)
       {
           return 0;
       }
       else
       {
           cout<<"Invalid entry!!"<<endl;
           menu();
       }


   }



