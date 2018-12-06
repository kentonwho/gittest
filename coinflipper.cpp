#include <time.h> 
#include <iostream> 
using std::cout; 
using std::endl;
int main () {
	int heads = 0; 
	int tails = 0; 
	srand(time(NULL)); 
	int rand(); 
	for (int i = 0; i <1e6 ; i++) {
	int random_number = rand(); 
	if (random_number %2 == 0) { 
		heads++;  
} 	
	else {
		 tails++;  

}
} 
	cout << "The number of heads is " << heads << endl; 
	cout << "The number of tails is " << tails << endl; 
}
