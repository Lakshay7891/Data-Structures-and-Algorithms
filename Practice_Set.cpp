// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include <iostream>
using namespace std;
int main()
{
    int a = 30;
    int b = 31;

    if (a > b)
    {
        cout << "Bigger Number";
    }

    else
    {
        cout << "Smaller Number";
    }
}

// Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

#include <iostream>
using namespace std;
int main()
{
    int age = 21;

    if (age >= 18)
    {
        cout << "Adult";
    }

    else
    {
        cout << "Teenager";
    }
}

// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    if (n == 1)
    {
        cout << "January";
    }

    else if (n == 2)
    {
        cout << "February";
    }

    else if (n == 3)
    {
        cout << "March";
    }

    else if (n == 4)
    {
        cout << "April";
    }

    else if (n == 5)
    {
        cout << "May";
    }

    else if (n == 6)
    {
        cout << "June";
    }

    else if (n == 7)
    {
        cout << "July";
    }

    else if (n == 8)
    {
        cout << "August";
    }

    else if (n == 9)
    {
        cout << "September";
    }

    else if (n == 10)
    {
        cout << "October";
    }

    else if (n == 11)
    {
        cout << "November";
    }

    else if (n == 12)
    {
        cout << "December, Its also my Birthday Month";
    }

    else if (n == 0 || n > 13)
    {
        cout << "Choose Your Valid Month";
    }
}

// Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

#include <iostream>
using namespace std;
int main()
{
    int ticket_price;
    cout << "Enter Your age: ";
    cin >> ticket_price;

    if (ticket_price <= 12 || ticket_price >= 65)
    {
        cout<< "You got discount";
    }

    else
    {
        cout<< "You cant got discount";
    }
}