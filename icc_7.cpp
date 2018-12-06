#include <iostream> 
#include <cmath> 

using namespace::std; 

struct rtriang { 
	float legA; 
	float legB; 
	float hypotenuse; 
	float angleA; 
	float angleB;
	float angleC = 90/180*M_PI; 

}; 

int main()
{  	
	
	rtriang tri1; 
	rtriang	tri2; 
	 
 	cout << "Enter the first leg length of Triangle 1: ";  
	cin >> tri1.legA;
	cout << endl; 
	cout << "Enter the second leg length of Triangle 2: "; 
	cin >> tri1.legB; 
	cout << endl; 
	tri1.hypotenuse = sqrt(pow(tri1.legA,2)+pow(tri1.legB,2)); 
	tri1.angleA = atan(tri1.legA/tri1.legB);
	tri1.angleB = atan(tri1.legB/tri1.legA); 

	cout << "Enter the first leg length of Triangle 2: "; 
	cin >> tri2.legA;
	cout << endl;   
	cout << "Enter the second leg length of Triangle 2: ";  	
	cin >> tri2.legB; 
	cout << endl; 
	tri2.hypotenuse = sqrt(pow(tri2.legA,2)+pow(tri2.legB,2));
        tri2.angleA = atan(tri2.legA/tri2.legB);
        tri2.angleB = atan(tri2.legB/tri2.legA);
	
	cout << "The length of leg A of triangle 1: " << tri1.legA << endl; 
	cout << "The length of leg B of triangle 1: " << tri1.legB << endl; 
	cout << "The length of the hypotenuse of triangle 1:  " << tri1.hypotenuse << endl; 
	cout << "The angle opposite of side A of triangle 1: " << tri1.angleA << endl; 
	cout << "The angle opposite of side B of triangle 1: " << tri1.angleB << endl; 
	cout << "The length of leg A of triangle 2: " << tri2.legA << endl;
        cout << "The length of leg B of triangle 2: " << tri2.legB << endl;
        cout << "The length of the hypotenuse of triangle 2:  " << tri2.hypotenuse << endl;
        cout << "The angle opposite of side A of triangle 2: " << tri2.angleA
 << endl;
        cout << "The angle opposite of side B of triangle 2: " << tri2.angleB << endl;

}
