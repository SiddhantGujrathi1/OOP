/*
Write a function template selection Sort. Write a program that inputs, sorts and outputs an int array and a float array.
*/

//============================================================================

// Name        : Assignment_5.cpp

// Author      : Gujrathi Siddhant

//============================================================================

#include<iostream>
#include<limits>
using namespace std;
#define max 5

template<class T>       
       
T selection_sort()        //Template function
{
    T a[max];
    T temp;
    for(int i=0;i<max;i++)        //Accepting elements
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    
    for(int i=0;i<max;i++)            //Sorting logic
    {
        for(int j=i+1;j<max;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<max;i++)        //Displaying logic
    {
            cout<<a[i]<<"\n";
    }
    
    return temp;
}

int main()
{
    cout<<"Integer sorting...\n";
    
    selection_sort<int>();
   
    cout<<"Floating sorting...\n";
   
    selection_sort<float>();
}
