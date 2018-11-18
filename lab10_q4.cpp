#include <iostream>
using namespace std;
//declaration of class point which is two dimentional.
//part 4.1
class Point
	{
		public:
  		Point(); //class constructor
		Point(int xval, int yval);// set the coordinates x, y to the values xval and yval.
		// introducing variable for moving values dx and dy.
		void Move(int dx, int dy);
		// introducing variable for getting values of x, y:
		int X() const;
		int Y() const;
		// introducing functions for giving value from x, y to xval, yval respectively  
		void FromX(int xval);
		void FromY(int yval);
		//Adding declaration of function Print 
  		void print(int x,int y);
 		// private data representing coordinates of the point:
		private:
		int x;
		int y;
		};  
		// setting class constructor x, y to zero 
		Point::Point()
		{
  			x = 0;
  			y = 0;
		}
		// setting class constructor x and y to xval&yval
		Point::Point(int xval, int yval)
		{
 			x = xval;
			y = yval;
		}
		//increases the xcoordinate by dx and the ycoordinate by dy.
		void Point::Move(int dx, int dy)
		{
			x += dx;
			y += dy;
		}
		int Point::X() const
		{
			return x;
		}
		int Point::Y() const
		{
		return y;
		}
		// FromX change the value of x coordinate to xval
		void Point::FromX(int xval)
		{
			x = xval;
		} 
		//FromY change the value of y coordinate to yval
		void Point::FromY(int yval)
		{
			y = yval;
		}
		//printing output
		void Point::print(int x,int y)
	{
	cout<<"("<<x<<","<<y<<")"<<endl;
	}
//part 4.2
//Declaration of class Rectangle using point class
		class rectangle
		{
		Point upper_right,upper_left,down_right,down_left;
		int length()
		{ 
			int a;
  			a=down_left.X()-down_right.X();
  			return a;
		}
		int breath()
		{
  			int a;
  			a=down_left.X()-upper_left.X();
			return a;
		}
 public:
		rectangle (Point upper_right, Point down_left)
		{
  			int a;
			a=down_left.X();upper_left.FromX(a);
			a=down_left.Y();down_right.FromY(a);
			a=upper_left.Y();upper_left.FromY(a);
			a=upper_right.X();down_right.FromX(a);
		}
			rectangle ()
			{
			down_right.FromX(1);down_right.FromY(0);
			down_left.FromX(0);down_left.FromY(0);
			upper_right.FromX(0);upper_right.FromY(1);
			upper_left.FromX(1);upper_left.FromY(1);
			}

		void area()
		{
		cout<<length()*breath();
		}
		};
// Test the class Rectangle in main(), demonstrate that all member functions work as specified. 
	int main()
	{
// Declaring a point using class constructor (x = y = 0):
		Point p1;
		cout<< "The x value for p1 is " << p1.X() << endl;
		cout<< "The y value for p1 is " << p1.Y() << endl;
		// Declaring a point x=2,y=3:
		Point p2(2, 3);
		cout<< "The x value for p2 is " << p2.X() << endl;
		cout<< "The y value for p2 is " << p2.Y() << endl;
		// Moving point p2 by (1, -1):
		p2.Move(1, -1);
		cout<< "After moving co-ordinates" << endl;
		cout<< "The x value for p2 is " << p2.X() << endl;
		cout<< "The y value for p2 is " << p2.Y() << endl;
		// Testing function print on points p1, p2
		p1.print(p1.X(),p1.Y());
		p2.print(p2.X(),p2.Y());
		// Testing of the class Rectangle  
  		rectangle r1,r2(p1,p2);
  		return 0;
		}
