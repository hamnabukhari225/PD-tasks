#include<iostream>
using namespace std;
int main()
{
 int minutes;
 int frames;
 int total_number;
 cout<< "Number of minutes:";
 cin>>minutes;
 cout<< "Frames per second:";
 cin>>frames;
 total_number=minutes*frames*60;
 cout<<"Total number of frames="<<total_number;
}