#include<iostream>
using namespace std;
int calGreates(int num1, int num2, int num3, int num4){
    if(num1 > num2 && num1 > num3 && num1 > num4)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4)
    {
        return num2;
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4)
    {
        return num3;
    }
    else{
        return num4;
    }
}

int main()
{
    int num1, num2, num3, num4;
    cin>>num1>>num2>>num3>>num4;

    int greatest = calGreates(num1, num2, num3, num4);
    cout<<greatest<<endl;

}