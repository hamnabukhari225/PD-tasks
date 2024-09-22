#include<iostream>
using namespace std;
main()
{
 string movie_name;
 int adult_ticket; 
 int child_ticket;
 int number_of_adult_tickets_sold;
 int number_of_child_tickets_sold;
 int percentage_of_amountDonated;
 string movie;
 int total_amount_generated;
 int donation;
 int remaining_amount;
 cout<<"Enter the movie name:";
 cin>>movie_name;
 cout<<"Enter the adult ticket price:$";
 cin>>adult_ticket;
 cout<<"Enter the child ticket price:$";
 cin>>child_ticket;
 cout<<"Enter the number of adult tickets sold:";
 cin>>number_of_adult_tickets_sold;
 cout<<"Enter the number of child tickets sold:";
 cin>>number_of_child_tickets_sold;
 cout<<"Enter the percentage of amount donated to charity:";
 cin>>percentage_of_amountDonated;
 cout<<"movie:";
 cin>>movie;
 total_amount_generated=adult_ticket*number_of_adult_tickets_sold+child_ticket*number_of_child_tickets_sold;
 cout<<"Total amount generated from ticket sales=$"<<total_amount_generated<<endl;
 donation=total_amount_generated/10;
 cout<<"Donation to charity=$"<<donation<<endl;
 remaining_amount=total_amount_generated-donation;
 cout<<"Remaining amount after donation=$"<<remaining_amount<<endl;
 }