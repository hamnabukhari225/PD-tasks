#include<iostream>
using namespace std;
main()
{
 int NumberOfSquareMetres;
 int width;
 int height;
 int NumberOfWalls;
 int AreaOfSingleWall;
 cout<<"Number of square metres you can paint:";
 cin>>NumberOfSquareMetres;
 cout<<"Width of the single wall (in metres):";
 cin>>width;
 cout<<"Height of single wall (in metres):";
 cin>>height;
 AreaOfSingleWall=width*height;
 NumberOfWalls=NumberOfSquareMetres/AreaOfSingleWall;
 cout<<"Number of walls you can paint="<<NumberOfWalls;
}