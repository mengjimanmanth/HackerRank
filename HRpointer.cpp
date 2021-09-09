#include<iostream>
using namespace std;
void cal(int *num1, int *num2){
    int add = *num1 + *num2;
    int sub = abs(*num1 - *num2);
    cout<<add<<"\n"<<sub;
    
}
int main()
{
    int num1, num2;
    cin>>num1;
    cin>>num2;
    cal(&num1, &num2);
    
}