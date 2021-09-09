#include<iostream>
using namespace std;
void solve(int n)
{
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int siz = sizeof(arr)/sizeof(arr[0]);                    //Findout size of Given Array
    for(int i = siz-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int N;
    cin>>N;                                                 //Number of Elements to enter
    if(N >=1 && N <= 1000)                                  //Checking the Constraint
    {
        solve(N);
    }
}