#include <iostream>

using std::cin;
using std::cout;
using std::endl; 

int recurse(int i) { 
	cout << i << endl; 
	if (i == 0) 
		return 0; 
	
	return i + recurse(i-1); 
	cout << "	reutnring from i = " << i << endl;
	return temp;  

}

int main()
{ 
	int sum = 0; 
	
	sum = recurse(10); 

}  
