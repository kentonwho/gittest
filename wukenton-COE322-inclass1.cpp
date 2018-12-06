//Kenton Wu, KTW529 

#include <iostream> 
#include <cmath> 

using std::cin;
using std::cout;
using std::endl;

int main() {
	float a = 0; 
	float h = 0;
	float b = 0;  
	float angle_1 = 0; 
	float angle_2 = 0; 
	cout << "Enter the length a: " << endl; 
	cin >> a;  
	cout << endl <<  "Enter the length b: " << endl; 
  	cin >> b; 
	h = sqrt(pow(a,2) + pow(b,2));
	cout << "The hypotenuse is " << h  << endl; 
	cout << "Angle 1 is " << acos(b/h)*180/M_PI << " degrees" << endl; 
	cout << "Angle 2 is " << acos(a/h)*180/M_PI << " degrees" << endl; 


} 
