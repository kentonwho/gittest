//Author: Kenton Wu
//ID: KTW529
//This program encrypts an decrypts user-inputted strings using a K-shift cipher.
//Date: October 16th 2018 

#include <iostream> 

using namespace::std; 

string kshift(string word, int k)
{ 	
		for (int i = 0; i < word.length(); i++){
			//checks for uncapitalized letters
			if (word[i] >= 97) 
				word[i] = word[i] - 32;
			//checks for non-letters 
			if (word[i] >= 65 && word[i] <= 90){
				if ((word[i]-64+k)%26 > 0)   
					word[i] = (word[i]-64+k)%26 + 64;
				else 
					//handles shifts that make the index negative
					word[i] = (word[i]-64+k)%26 + 90; 
			}
		} 
		return word; 	
}

int main()
{
	char option; 
	cout << "Encrypt or Decrypt(E/D)?: "; 
	cin >> option; 
	cout << endl; 
	
	int key; 
	if (option == 'E') 
		cout << "Please enter the encryption key: " ; 
	else 
		cout << "Please enter the decryption key: "; 
	cin >> key; 
	cout << endl; 

	string phrase;  
	cout << "Please enter the secret phrase: " << endl; 
	cin.ignore(); 
	getline(cin,phrase);
	cout << endl;  

	string output;
	if (option == 'E')
		output = kshift(phrase,key);	
	else 
		output = kshift(phrase,-1*key);  
	cout << output << endl; 
	
} 
