// Binary Search ( Ascending Order )

#include<iostream>
using namespace std;
int main ()
{
    int arr[1000];
    int n;
    cout<<"Enter the Size of an array : ";
    cin>>n;

    cout<<"Enter the Elements of an array : ";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element that you want to search : ";
    cin>>key;


    int start = 0;
    int end = n-1;

    int mid;

    while(start<end)
    {
        mid = (start + end /2);

        if(arr[mid]==key)
        {
            cout<<"The Searching element is : "<<mid<<endl;
            break;
        }

        else if(arr[mid]<key)
        {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        
    }


    return 0;

}


// For Descending Binary Search :

// Example - 5 4 3 2 1 , Find 5. ( The array will be sorted in descending order.)

#include<iostream>
using namespace std;

// Using Function : 

int BinarySearchDescending(int arr[], int n, int key)
{
    int start =0;
    int end = n-1;
    int mid;

    while(start<=end)
    {
        mid = start + (end - start) /2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]<key)
        {
            end = mid - 1;
        }

        else 
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main ()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    cout<<"Enter the elements of an array : ";

    int i =0;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }


    int key;
    cout<<"Enter the element that you want to search : ";
    cin>>key;

    cout<<BinarySearchDescending(arr,n,key);
    return 0;
}