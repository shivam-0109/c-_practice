#include <iostream>
using namespace std;

int main()
{
    int hr,min,sec,hr2,min2,sec2;

    cout<<"please input in 24 hr format\n";
    cout<<"enter the time only hr,min and sec:";
    cin>>hr;
    
    cin>>min;
   
    cin>>sec;

cout<<"\n";
    cout<<"enter the time only hr,min and sec:";
    cin>>hr2;
    
    cin>>min2;
    
    cin>>sec2;
    

    int timeh,timem,times;
    timeh=(hr2-hr);
    timem=(min-min2);
    times=(sec-sec2);

    cout<<"time is  :"<<timeh<<" : "<<timem<<" : "<<times<<"\n";
    return 0;
}