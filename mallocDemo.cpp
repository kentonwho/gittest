#include <iostream> 

using namespace::std;  

struct roomTemp { 
	float x = 0; 
	float y = 0; 
	float z = 0; 
	float T = 0; 
}; 

int main()
{
	int t = 100 ;
	roomTemp* rt; 

	for (int i = 0; i < t; i++)
	{ 
		rt = (roomTemp*) malloc(sizeof(roomTemp));
		cout << rt << endl; 
	} 
} 
