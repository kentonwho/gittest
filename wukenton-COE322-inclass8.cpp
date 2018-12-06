#include <iostream> 
#include <vector> 
#include <random> 
#include <ctime>

using namespace::std; 

int main() {
 	vector<int> randoms;
	int r = 0;  
	//srand(time); 
	while (r != 42){  
		r = (int) (100.* rand()/RAND_MAX);  
		randoms.push_back(r);  
			
	}	
	
	cout << "The size of the random vector is: " << randoms.size() << endl;  
} 
