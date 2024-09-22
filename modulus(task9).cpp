#include<iostream>
using namespace std;
main()
{
 int Number;
 int SumOfIndividualDigits;
 int Modulus1,Modulus2,Modulus3,Modulus4;
 int Divisor1,Divisor2,Divisor3;
 cout<<"Enter a 4-digit number:";
 cin>>Number;
 Modulus1=Number%10;
 Divisor1=Number/10;
 Modulus2=Divisor1%10;
 Divisor2=Divisor1/10;
 Modulus3=Divisor2%10;
 Divisor3=Divisor2/10;
 Modulus4=Divisor3%10;
 SumOfIndividualDigits=Modulus1+ Modulus2+ Modulus3+ Modulus4;
 cout<<"Sum of individual digits="<<SumOfIndividualDigits;
}