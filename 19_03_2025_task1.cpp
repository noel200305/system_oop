#include <iostream>
using namespace std;
int main() 
{
    int day;
    cout<<"please enter day number";
    cin>>day;
{ 
    if(day==1){
            cout<<"day is monday";
    }else if (day==2){
            cout<<"day is tuesday";
    }else if (day==3){
            cout<<"day is wednesday";
    }else if (day==4){
            cout<<"day is thursday";
    }else if (day==5){
            cout<<"day is friday";
    }else if (day==6){
            cout<<"day is saturday";
    }else if (day==7){
            cout<<"day is sunday";
    }
    else{
            cout<<"incorrect number.please enter number between 1 to 7";
    }
}
    return 0;
}
