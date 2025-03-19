#include <iostream>
using namespace std;
int main() 
{
    int day;
    cout<<"please enter day number";
    cin>>day;
{ 
    switch(day){
     case 1:
     cout<<"day is monday";
     break;
     case 2:
     cout<<"day is tuesday";
     break;
     case 3:
     cout<<"day is wednesday";
     break;
     case 4:
     cout<<"day is thursday";
     break;
     case 5:
     cout<<"day is friday";
     break;
     case 6:
     cout<<"day is saturday";
     case 7:
     cout<<"day is sunday";
     break;
     default:
     cout<<"invalid day.please enter a number from 1 to 7";
    }
}
    return 0;
}
