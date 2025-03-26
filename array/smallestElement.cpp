#include<bits/stdc++.h>
using namespace std;

int smallestelement{int arr[],int n}
{
    int min =arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}

int main(){
  int arr1[]={2,4,5,8,1};
  int n=5;
  int minimum = smallestelement(arr1[],n);
  cout<<"minimum number in the array is "<< minimum <<endl;

}