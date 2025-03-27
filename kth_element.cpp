#include<bits/stdc++.h>
using namespace std;

int main()
{   int arr[100];
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the values"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int a=n-1;a>=0;a--)
    {
        for(int b=0;b<=a-1;b++)
        {
            if(arr[b]>arr[b+1])
            {
                int temp=arr[b+1];
                arr[b+1]=arr[b];
                arr[b]=temp;
            }
        }
    }
    cout<<"enter 1 for max value and 2 for min value"<<endl;
    int k;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"enter the kth value"<<endl;
            cin>>k;
            cout<<arr[n-k];
        break;
        case 2:
            cout<<"enter the kth value"<<endl;
            cin>>k;
            cout<<arr[k-1];
        break;
        default:
            cout<<"enter among the options given"<<endl;
    }
return 0;
}
