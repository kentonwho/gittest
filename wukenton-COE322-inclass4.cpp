#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

bool calculate(float a, float b, float &angle1, float &angle2, float &h){
	h = sqrt(a*a + b*b); 
	angle1 = acos(b/h); 
	angle2 = M_PI/2 - angle1; 
	return true; 
} 

int main() {
        float a = 0;
        float b = 0;
        cout << "Enter the length a: " << endl;
        cin >> a;
        cout << endl <<  "Enter the length b: " << endl;
        cin >> b;
        float h;
        float angle1;
        float angle2; 
	calculate(a,b,angle1,angle2,h); 
        cout << "The hypotenuse is " << h  << endl;
        cout << "Angle 1 is " << angle1*180/M_PI << " degrees" << endl;
        cout << "Angle 2 is " << angle2*180/M_PI << " degrees" << endl;


}


