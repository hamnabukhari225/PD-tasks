#include<iostream>
using namespace std;
int main()
{
 float imposter_count;
 float player_count;
 float chance_being_imposter;
 cout<<"Enter imposter count:";
 cin>>imposter_count;
 cout<<"Enter player count:";
 cin>>player_count;
 chance_being_imposter=(imposter_count/player_count);
 chance_being_imposter=100*chance_being_imposter;
 cout<<"Chance being imposter="<<chance_being_imposter;	
}