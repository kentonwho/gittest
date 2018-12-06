//Kenton Wu, KTW529 

#include <iostream> 
#include <cmath> 

using std::cin;
using std::cout;
using std::endl;

float hyp(float a, float b); 
float anglea(float a, float b); 
float angleb(float angle1); 

int main() {
	float a = 0; 
	float b = 0; 
	cout << "Enter the length a: " << endl; 
	cin >> a;  
	cout << endl <<  "Enter the length b: " << endl; 
  	cin >> b; 
	float h = hyp(a,b);
	float angle1 = anglea(a,b);
	float angle2 = angleb(angle1); 
	cout << "The hypotenuse is " << h  << endl; 
	cout << "Angle 1 is " << angle1*180/M_PI << " degrees" << endl; 
	cout << "Angle 2 is " << angle2*180/M_PI << " degrees" << endl; 


} 

float hyp (float a, float b) { 
	float h = sqrt(a*a + b*b); 
	return h; 
} 

float anglea (float a, float b) { 
	float angle1 = acos(b/hyp(a,b));
	return angle1;  
}

float angleb (float angle1){
	float angle2 = M_PI/2 - angle1; 
	return angle2; 
}

