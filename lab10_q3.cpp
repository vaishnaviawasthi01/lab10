//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
#include <iostream>
using namespace std;
//Creating a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter().
class rectangle
	{
	public:
		float l;
		float b;
	 
	  float area (void); 
	  float perimeter(void);
	  } ;
	  
  //Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth.
	float rectangle::area(void)
	{
  	return l*b;
  	}
  	float rectangle::perimeter(void)
	{
  	return 2*(l+b);
  	}
  	
  	//driver function
  	int main()
	{
  	rectangle r1;
  	rectangle r2;
  	
  	 //asking user for input for both the rectangles -
  	 
  	cout << "Enter your length of rectangle1: "<<endl;
  	cin >>r1.l;
  	cout << "Enter your breadth of rectangle1: "<<endl;
  	cin >>r1.b;
  	cout << "Enter your length of rectangle2: "<<endl;
  	cin >>r2.l;
  	cout << "Enter your breadth of rectangle2: "<<endl;
  	cin >>r2.b;
  	 
  	//print area and perimeter of both the rectangles 
  	cout <<"The area of rectangle1 is" << r1.area() <<endl;  	
  	cout <<"The perimeter of rectangle1 is" << r1.perimeter() <<endl;  	
  	cout <<"The area of rectangle2 is" << r2.area() <<endl;  	
  	cout <<"The perimeter of rectangle2 is" << r2.perimeter() <<endl;  	
	return 0;
	}
