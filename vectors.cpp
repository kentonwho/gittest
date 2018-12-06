#include <iostream> 
#include <vector>

using std::cout; 
using std::endl; 
using std::vector; 

int main() { 

	vector<int> myVector = {4,7,3,2,1}; 
	vector<int> myVector2 = {3,5}; 
	vector<int> myVector3 = {5}; 
	vector<int> myVector4; 

	cout << myVector4.size() << endl; 


	cout << "myVector contains:" << endl; 

	for (auto i: myVector) 
	{
		cout << i << endl; 
		i = 5; 
	} 
}
