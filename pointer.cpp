#include <iostream> 
using std::cout; 
using std::endl; 

struct myStruct{ 
	int number; 
	int* numPointer; 
}; 

int main() { 
	int n = 500; 
	int* iPointer; 

	iPointer = &n; 

	cout << "Value of n: " << n << endl; 
	cout << "Address of n: " << &n << endl; 
	cout << endl; 
	cout << "Memory address of *where* the pointer is pointing to "  << iPointer << endl; 
	cout << "the *VALUE* of what the pointer is pointing to? " << *iPointer << endl; 
	cout << "?" << &iPointer << endl; 
	cout << "Memory address of iPointer: " << &iPointer << endl; 
	
	myStruct customStruct; 
	customStruct.number = 500; 
	customStruct.numPointer =&( customStruct.number); 

	myStruct* pointerToStructure; 
	pointerToStructure = &customStruct; 
	cout << "value of pointerStruct " << (*pointerToStructure).number <<endl; 

}
