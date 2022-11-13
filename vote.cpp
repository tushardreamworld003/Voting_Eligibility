#include<iostream>
using namespace std;

int main()
{
    // Voting Eligiblility
    int n1;
    cout<<"Enter your age:";
    cin>>n1;
    if ( n1 < 0 )
    {
        cout<<"ENTER VALID AGE"<<endl;
    }

    if ( (n1 >= 0) && ( n1 < 18 ) )
    {
        cout<<"YOU ARE NOT ELIGIBLE"<<endl;
    }

    if ( (n1 >= 18) && ( n1 <= 120 ) )
    {
        cout<<"YOU ARE ELIGIBLE YOU CAN VOTE"<<endl;
    }

    if ( n1 > 120 )
    {
        cout<<"INVALID";
    }
    return 0;
}