 /*

 Write a program in C++ to use map associative container. The keys will be the names of states,
 and the values will be the populations of the states. When the program runs, the user is
 prompted to type the name of a state. The program then looks in the map, using the state name as
 an index, and returns the population of the state.
*/

//Note : for making pair go for non-space separated countries..

//============================================================================

// Name        : Assignment_7.cpp

// Author      : Desai Kaveri

//============================================================================

#include<iostream>
#include<map>
using namespace std;
int main()
{
    typedef map<string,int>mapType;
    mapType populationmap;
    
    populationmap.insert(pair<string, int>("Maharashtra",1235632));
    populationmap.insert(pair<string, int>("Gujrat",52443424));
    populationmap.insert(pair<string, int>("Goa",66747667467));
    populationmap.insert(pair<string, int>("Tamilnadu",878364773));
    populationmap.insert(pair<string, int>("Surat",8468468480374));
    
    mapType:: iterator iter;
    cout<<"\n* * * *  Population of States in India* * * * *";
    cout<<"\n Size of Population Map: "<<populationmap.size()<<'\n'; 
    
    string state_name;
    cout<<"\n Enter name of state:";
    cin>>state_name;
    
    iter=populationmap.find(state_name);
    
    if(iter!=populationmap.end())
        cout<<state_name<<"State population is:"<<iter->second;
    else
        cout<<"Key is not in populationmap:"<<'\n';
    populationmap.clear();
    
}

