#include <iostream>
#include <vector>
#include <cmath>
#include "funcs.h"

// add functions here
char shiftChar(char c, int rshift) {
	char result;
	if (!isalpha(c)) {
		return c;
	}
	else if (isupper(c)) {
		result = (c - 'A' + rshift) % 26 + 'A';
	}
	else {
		result = (c - 'a' + rshift) % 26 + 'a';
	}//end condition

	return result;
}//end shiftChar

std::string encryptCaesar(std::string plaintext, int rshift) {
	std::string result;
	for (int i = 0; i < plaintext.length(); i++) {
		result += shiftChar(plaintext[i], rshift);
	}//end for loop
	return result;
}//end encryptCaesar function

double distance(std::vector<double> alphabeticalFrequency, std::vector<double> stringFrequency){//Get the distance using distance formula, assuming both vector has the same size
    double sum = 0;
    for(int i = 0; i < alphabeticalFrequency.size(); i++){
        sum += pow(alphabeticalFrequency[i] - stringFrequency[i], 2);
    }//end for loop
    return sqrt(sum);
}//end distance function


std::vector<double> string_frequency(std::string encrypted_string){//checks the frequency of each letter in the string

    std::vector<double> encrypted_frequency(26, 0);

    for(int i = 0; i < encrypted_string.length(); i++){
        for(int x = 0; x < encrypted_frequency.size(); x++){

            if(isalpha(encrypted_string[i])){//if it's a letter

                if(isupper(encrypted_string[i])){//if it's uppercase letter
                    if(x == encrypted_string[i] - 'A'){
                        encrypted_frequency[x] += 1;
                    }//end condition

                }else{//if its lowercase letter

                    if(x == encrypted_string[i] - 'a'){
                        encrypted_frequency[x] += 1;
                    }//end condition

                }//end else condition
            }//end condition
        }//end inner for loop

    }//end for loop

    //Get the percentage of each char based on encrypted string's length
    for(int j = 0; j < encrypted_string.length(); j++){
        encrypted_frequency[j] = encrypted_frequency[j] / encrypted_string.length();
    }//end for loop

    return encrypted_frequency;
}//end frequency function

std::string solve(std::string encrypted_string){
    int totalLetters = 0;
    double minDistance = DBL_MAX;//give minDistance largest value possible
    
    //Getting the total letters within encrypted_string
    for(int i = 0; i < encrypted_string.length(); i++){
        if(isalpha(encrypted_string[i])){
            totalLetters++;
        }//end condition
    }//end for loop

    


return "";
}//end solve function

