#include<iostream>
using namespace std;
int main()
{
 string name;
 int weight_loss;
 int need_days;
 cout<<"Enter the name of the person:";
 cin>>name;
 cout<<"Enter the target weight loss in kgs:";
 cin>>weight_loss;
 need_days=15*weight_loss;
 cout<<"Need days="<<need_days; 
}