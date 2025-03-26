#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    
    vector<int>arr1;
    int j=n-1;
    for (int i=0;i<n;i++)
    {
        arr1.push_back(arr[j]);
        j--;
        cout<<arr1[i]<<" ";
    }
}