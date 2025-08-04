// Write a program to check if number is even or odd.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(num%2==0)
    {
        cout<<"Number is even";
    }

    else {
        cout<<"Number is odd";
    }
}

// Compare Two Variables

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your First number : ";
    cin>>a;
    cout<<"Enter your Second number : ";
    cin>>b;

    if(a>b)
    {
        cout<<"Yes";
    }

    else{
        cout<<"NO";
    }

}

// Number is positive, negative or zero

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    if(num>0)
    {
        cout<<"Number is positive";
    }

    else if ( num ==0)
    {
        cout<<"Number is zero";
    }

    else{
        cout<<"Number is negative";
    }
}

// Character is vowel or not


#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter your alphabet : ";
    cin>>a;

    if(a == 'a')
    {
        cout<<"Vowel";
    }

    else if(a == 'e')
    {
        cout<<"Vowel";
    }

     else if(a == 'i')
    {
        cout<<"Vowel";
    }

     else if(a == 'o')
    {
        cout<<"Vowel";
    }

     else if(a == 'u')
    {
        cout<<"Vowel";
    }

    else{
        cout<<"Consonant";
    }


}

