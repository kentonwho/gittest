#include <iostream> 
#include <vector> 
#include <random> 
#include <ctime> 

using namespace::std; 

vector<float> random_vector(int l) 
{
	srand(time(0)); 
	vector<float> randVec(l,0);
	for (auto &i : randVec){ 
		i = (int) (100.*rand()/RAND_MAX);
	}
	return randVec; 
}

vector<float> inserSort(vector<float> unsorted)
{ 	
	float temp; 
	int i = 1;
	while (i < unsorted.size()) { 
		int j = i; 
		while (j > 0 && unsorted.at(j-1) > unsorted.at(j)) { 
			temp = unsorted.at(j); 
			unsorted.at(j) = unsorted.at(j-1); 
			unsorted.at(j-1) = temp;
			j = j-1; 
		} 
		i = i+1; 
	} 
 	return unsorted; 
} 

void print_vector(vector<float> input) 
{
	for (auto i: input) {
		cout << i << " "; 
	} 
}
 
int main()
{ 
	int length = 10; 
	vector<float> values = random_vector(length); 
	cout << "Your unsorted vector is: " << endl; 
	print_vector(values);
	cout << "\nYour sorted vector is: " << endl; 
	print_vector(inserSort(values)); 	
	cout << endl; 
}

