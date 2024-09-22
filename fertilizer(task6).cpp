#include<iostream>
using namespace std;
main()
{
 float SizeOfFertilizerBag;
 float CostOfBag;
 float AreaInSquaqreFeet;
 float CostOfFerilizerPerPound;
 float CostOfFertilizerPerSquareFoot;
 cout<<"Enter the size of fertilizer bag in pounds:";
 cin>>SizeOfFertilizerBag;
 cout<<"Enter the cost of the bag:$";
 cin>> CostOfBag;
 cout<<"Enter the area in square feet that can be covered by the bag:";
 cin>>AreaInSquaqreFeet;
 CostOfFerilizerPerPound=CostOfBag/SizeOfFertilizerBag;
 cout<<"Cost of fertilizer per pound=$"<<CostOfFerilizerPerPound<<endl;
 CostOfFertilizerPerSquareFoot=CostOfBag/AreaInSquaqreFeet;
 cout<<"Cost of fertilizer per square foot=$"<<CostOfFertilizerPerSquareFoot<<endl;
}