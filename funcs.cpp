#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
#include <cfloat>
#include <fstream>
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



std::vector<double> string_frequency(std::string string){//checks the frequency of each letter in the string

    std::vector<double> encrypted_frequency(26, 0);
    int count = 0;

    for(int i = 0; i < string.length(); i++){
        for(int x = 0; x < encrypted_frequency.size(); x++){

            if(isalpha(string[i])){//if it's a letter
                count++;
                if(isupper(string[i])){//if it's uppercase letter
                    if(x == string[i] - 'A'){
                        encrypted_frequency[x] += 1;
                    }//end condition

                }else{//if its lowercase letter

                    if(x == string[i] - 'a'){
                        encrypted_frequency[x] += 1;
                    }//end condition

                }//end else condition
            }//end condition
        }//end inner for loop

    }//end for loop

    //Get the percentage of each char based on encrypted string's length
    for(int j = 0; j < encrypted_frequency.size(); j++){
        encrypted_frequency[j] = encrypted_frequency[j] / count;
    }//end for loop

    return encrypted_frequency;
}//end frequency function

std::string solve(std::string encrypted_string){
    //Used frequencies A-Z from Marian Webster mentioned by Patrick on Zulip
    std::vector<double> alphabetical_frequency{0.084966, 0.020720, 0.045388, 0.033844, 0.111607, 0.018121, 0.024705, 0.030034, 0.075448, 0.001964, 0.011016, 0.054893, 0.030129, 0.066544, 0.071635, 0.031671, 0.001962, 0.075809, .057351, 0.069509, 0.036308, 0.010074, 0.012899, 0.002902, 0.017779, 0.002722};
    int answershift;
    double currentdistance;
    double minDistance = DBL_MAX;//give minDistance largest value possible

    //loop the rotation
    for(int i = 0; i < 25; i++){
        std::vector<double> encryptedstring_freq = string_frequency(encryptCaesar(encrypted_string, i));
        currentdistance = distance(alphabetical_frequency, encryptedstring_freq);
        if(currentdistance < minDistance){
            answershift = i;
            minDistance = currentdistance;
        }//end condition

    }//end for loop

    //std::cout << answershift<< std::endl;
    return encryptCaesar(encrypted_string, answershift);
}//end solve function

