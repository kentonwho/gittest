#include <iostream> 
#include <vector> 

using namespace::std 

vector<float> combineV(vector<float> a, vector<float> b){
	if a.size() = b.size() {
		vector <float> c; 
		for (float i: a) { 	
			c.push_back(i); 
		}
		return c;
	else { 
		cout << "Vector sizes do not match" << endl; 
		break;  
	}
} 
int main() { 
	vector<float> a ;
	vector<float> b; 
	cout << "Enter vector a: " ; 
	cin >> a ; 
	
	cout << "Enter vector b: " ; 
	cin >> b; 
	cout << "Vector a + b is " << printVector(combineV(a,b)); << endl ;
} 
