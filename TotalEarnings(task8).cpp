#include<iostream>
using namespace std;
main()
{
 float VegetablePrice;
 float FruitPrice;
 int TotalKilogramsOfVegetable;
 int TotalKilogramsOfFruit;
 float TotalEarningsInRupees;
 cout<<"Enter vegetable price per kilogram (in coins):";
 cin>>VegetablePrice;
 cout<<"Enter fruit price per kilogram (in coins):";
 cin>>FruitPrice;
 cout<<"Enter total kilograms of vegetables:";
 cin>>TotalKilogramsOfVegetable;
 cout<<"Enter total kilograms of fruits:";
 cin>>TotalKilogramsOfFruit;
 TotalEarningsInRupees=VegetablePrice/1.94*TotalKilogramsOfVegetable+FruitPrice/1.94*TotalKilogramsOfFruit;
 cout<<"Total earnings in Rupees (Rps)="<<TotalEarningsInRupees; 
}