#include<iostream>
using namespace std;
main()
{
 float initial_velocity;
 float final_velocity;
 float acceleration;
 float time;
 cout<<"Enter initial velocity (m/s):";
 cin>>initial_velocity;
 cout<<"Enter acceleration (m/s^2):";
 cin>>acceleration;
 cout<<"Enter time (s):";
 cin>>time;
 final_velocity= acceleration*time+initial_velocity;
 cout<<"Final velocity (m/s)="<<final_velocity;
 }