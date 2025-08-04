// Write a program to check package is greater than 10 lakh or not.

#include<iostream>
using namespace std;
int main()
{
    int package;
    cout<<"Enter Your Package Amount : ";
    cin>>package;

    if(package>10)
    {
        cout<<"Your Offer is Accepted.";
    }

    else{
        cout<<"Your Offer is Rejected.";
    }
}

// Write a Program Of age to vote.

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;

    if(age>=18)
    {
        cout<<"You Can Vote";
    }

    else{
        cout<<"You Cannot Vote";
    }
}

// Write a program of week according to their days. 

#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"Enter Your Day : ";
    cin>>week;

    if(week == 1)
    {
        cout<<"Monday";
    }

    else if(week == 2)
    {
        cout<<"Tuesday";
    }
     else if(week == 3)
    {
        cout<<"Wednesday";
    }
     else if(week == 4)
    {
        cout<<"Thursday";
    }

 else if(week == 5)
    {
        cout<<"Friday";
    }
     else if(week == 6)
    {
        cout<<"Saturday";
    }
     else if(week == 7)
    {
        cout<<"Sunday";
    }

    else{
        cout<<"Enter a Valid day";
    }
}

// Grading System

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Your Marks : ";
    cin>>marks;

    if(marks>33)
    {
        cout<<"Pass";
    }

    else{
        cout<<"Fail";
    }
}
