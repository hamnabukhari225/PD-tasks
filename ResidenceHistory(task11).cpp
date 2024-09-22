#include<iostream>
using namespace std;
main()
{
 int PersonAge;
 int Moves;
 int NumberOfYearsLivedInTheSameHouse;
 int Residences;
 cout<<"Enter the Person's age:";
 cin>>PersonAge;
 cout<<"Enter the number of moves they've moved:";
 cin>>Moves;
 Residences=Moves+1;
 NumberOfYearsLivedInTheSameHouse= PersonAge/Residences;
 cout<<"Average number of years lived in the same house="<<NumberOfYearsLivedInTheSameHouse;
}