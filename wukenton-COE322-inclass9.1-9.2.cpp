#include <iostream> 
#include <cmath> 

using namespace::std;  

class Point 
{  
	public:
		float x; 
		float y;
		Point();  
		Point (float xCoord, float yCoord);  
		float dist2origin(){ return sqrt(x*x + y*y); }
		void printPoint() { cout << "(" <<  x << "," << y << ")" << endl; }
		float dist2point(Point point2) { return sqrt(pow(x-point2.x,2)+pow(y-point2.y,2)); }
}; 

Point::Point()
{
}

Point::Point(float xCoord, float yCoord) 
{ 
	x = xCoord; 
	y = yCoord; 
}

class Line 
{ 
	Point ini;  
	Point fin;  
	public: 
		Line(); 
		Line (Point p1, Point p2); 
		void printout() {ini.printPoint(); fin.printPoint(); cout << endl; }
		Point midpoint() {float xnew, ynew; 
				xnew = (ini.x + fin.x)/2; 
				ynew = (ini.y + fin.y)/2; 
				return Point(xnew,ynew);}
}; 

Line::Line()
{
}

Line::Line(Point p1, Point p2) 
{ 
	ini = p1; 
	fin = p2; 
}

int main() {
	Point test1 = Point(3,4);
	cout << test1.dist2origin() << endl;
	test1.printPoint();  
	
	Point test2 = Point(5,12); 
	cout << test1.dist2point(test2) << endl;; 
	
	Line line1 = Line(test1,test2); 
	line1.printout(); 
	(line1.midpoint()).printPoint(); 
}

