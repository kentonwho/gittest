#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl ;

int sumosquares(int i)
{
	if (i ==0) {
		return 0;} 
	else{
		
		int n =  i*i + sumosquares(i-1);
		cout << n << endl; 
		return n;   
}
} 
int main() {
	sumosquares(100);
}
