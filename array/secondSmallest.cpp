#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,4,1,5,9,55,22,12};
    int n=8;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
    }
    cout<<"after sorting array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}