/*
Imagine a publishing company which does marketing for book and audio 
cassette versions. Create a class publication that stores the title 
(a string) and price (type float) of publications. From this class 
derive two classes: book which adds a page count (type int) and tape 
which adds a playing time in minutes (type float). Write a program that 
instantiates the book and tape class, allows user to enter data and displays 
the data members. If an exception is caught, replace all the data member 
values with zero values
*/

//============================================================================

// Name        : Assignment_3.cpp

// Author      : Gujrathi Siddhant

//============================================================================


#include <iostream>
#include <string>
using namespace std;

class Publication
{
    private:
    string title;
    float price;           //private members only accessible within class
    public:
    void get()
    {
        cout<<"\nEnter Title of publication : ";
        cin >> title;
        cout<<"\nEnter Price of Publication : ";
        cin>>price;
    }
    void display()
    {
        cout<<"\nTitle of Publication : "<<title;
        cout<<"\nPrice of Publication : "<<price;
    }
    Publication()
    {
        title = "";
        price = 0;
    }
};

class Book : public Publication
{
    private:
    int pagecount;
    public:
    void add_book()
    {
        try
        {
            get();  //calling member function of base class to get input from user
            cout<<"\nEnter Page count: ";
            cin>>pagecount;
            if(pagecount<=0)
            {
                throw pagecount;
            }
        }
        catch(...)      //it catches all types of exception
        {
          cout<<"\nInvalid page count." ;
          pagecount = 0;
        }
    }
    void display_book()
    {
        display();  //member function of base class to display title and price
        cout<<"\nPage count  :   "<<pagecount<<endl;
    }
};

class Tape : public Publication
{
    private:
    float play_time;   //private member for playing time in minutes of cassate
    public:
    void add_cass()
    {
        try
        {
        	get();
            cout<<"\nEnter playing minutes : "<<endl;
            cin>>play_time;

            if(play_time<=0)
            {
              throw play_time;
            }
        }
        catch(...)
        {
            cout<<"\nInvalid page count.";
            play_time = 0;
        }
    }
    void display_tape()
    {
        display();
        cout<<"\nPlay Time :  "<<play_time<<" min";
    }
};



int main()
{
    int num;
    Book b1[10];
    Tape t1[10];
    int ch=0,b_count=0,t_count=0;
    do
    {
    cout<<"\n********************** Publication Information System *****************************\n";
    cout<<"1.Add Information to Books. \n2.Adds Information to Tapes. \n3.Display information to Books. \n4.Display information to Tapes. \n5.Exit. \n";
    cout<<"Enter choice : ";
    cin >> num;
    switch(num)
    {
        case 1:
        { //add info to Book
            b1[b_count].add_book();
            b_count++;
            break;
        }
        case 2:
        {
            t1[t_count].add_cass();
            t_count++;
            break;
        }
        case 3:
        {
            cout<<"\n--------- Publication Information System ( BOOKS ) ---------\n";
            for ( int j=0 ; j<b_count ; j++)
            {
                b1[j].display_book();
            }
            cout<<"------------------------------------";
            break;
        }
        case 4:
        {
            cout<<"\n--------- Publication Information System ( TAPES ) ---------\n";
            for ( int j=0 ; j<t_count ; j++)
            {
                t1[j].display_tape();
            }
            cout<<"\n------------------------------------";
            break;
        }
        case 5:
        {
            exit(0);
        }
    }
    }while(num!=5);
    return 0;
}

