#include <iostream>

using std::cout; 
using std::endl; 
using std::cin; 

int fib(int i) {
	if (i == 1 || i == 0) 
		return 1;
	else 
		return fib(i-1) + fib(i-2); 
} 

int main()
{
	 cout << "Enter the index:\n"; 
	 int f = 0;  
	 cin >> f; 
 	 int fn = fib(f); 
	 cout << "The fibbonacci number with index " << f << " is " << fn << endl; 
} 
