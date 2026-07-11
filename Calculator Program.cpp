#include<iostream>
using namespace std;
int main()
{
int choice;
float num1,num2;
do
{
cout<<"\n====Calculator Menu====";
cout<<"\n1Addition";
cout<<"\n2Subtraction";
cout<<"\n3Multiplication";
cout<<"\n4Division";
cout<<"\n5Exit"<<endl;
cout<<"Enter your choice:";
cin>>choice;
if(choice>=1&&choice<=4)
{
cout<<"Enter first number:";
cin>>num1;
cout<<"Enter second number:";
cin>>num2;
}
switch(choice)
{
case 1:
    cout<<"Result = "<<num1+num2<<endl;
    break;
case 2:
    cout<<"Result = "<<num1-num2<<endl;
    break;
case 3:
    cout<<"Result = "<<num1*num2<<endl;
    break;
case 4:
    if(num2!=0)
        cout<<"Result = "<<num1/num2<<endl;
    else
        cout<<"Division by zero not allowed"<<endl;
    break;
case 5:
    cout<<"Program Ended";
    break;
default:
    cout<<"Invalid choice!"<<endl;
}
}while(choice!=5);
return 0;
}
	

