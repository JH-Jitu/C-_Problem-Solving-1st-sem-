// MD. JIDANUL HAKIM JITU
//20-44365-3
//Ans to the question NO: 1

#include<iostream>
using namespace std;

class Students
{
                private:
                    char name[20],id[20];
                        int phone[20],cgpa[20];
                        int n;

                public:
                    Students ();            //Constructor
                    Students (int line);    //Non default Constructor
                        ~Students();        //Destructor
                        void read();
                        void disp();
};

Students :: Students()
{
        cout<<"\nHello! Juena Ahmed Noshin!"<<endl;
}
Students :: Students(int line)
{
        cout<<"\nWelcome to the Student Database"<<endl;

}

void Students :: read()
{
    cout<<endl<<"\tEnter student number: ";
        cin>>n; cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"\nEnter the student Name :: ";
        cin>>name[i];
        cout<<"\nEnter the student ID :: ";
        cin>>id[i];
        cout<<"\nEnter the student Phone Number :: ";
        cin>>phone[i];
        cout<<"\nEnter the student CGPA :: ";
        cin>>cgpa[i];
    }
}

void Students :: disp()
{for(int i=0; i<n; i++){
    cout<<"\nThe Entered number " <<i+1<< " Student Details are shown below ::---------- \n";
        cout<<"\n\t Student Name :: "<<name[i]<<endl;
        cout<<"\n\t ID no is :: "<<id[i]<<endl;
        cout<<"\n\t Phone is :: "<<phone[i]<<endl;
        cout<<"\n\t CGPA is :: "<<cgpa[i];
        }
}

Students :: ~Students()
{
        cout<<"\n\nThank You so much ma'am. You are awesome! :D \n";
}


int main()
{

    Students details;

int n; int line;

    Students NonDefault(line); //Non default Constructor
    details.read ();
    details.disp ();

    return 0;
}
