#include<iostream>
using namespace std;

int main ()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    cout<<"Enter the elements of an array : ";

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element that you want to search : ";
    cin>>key;

    int index = -1;

    for(int i =0; i<n; i++)
    {
        if(arr[i]==key)
        {
            index = i;
            cout<<"The searching element is "<<index<<endl;
            break;
        }

        else
        {
            cout<<-1<<endl;
            break;
        }
    }

    return 0;
}