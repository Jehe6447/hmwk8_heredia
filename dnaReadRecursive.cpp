// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 8 Problem 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <cctype>
 using namespace std;
string dnaReadRecursive(vector<string> dna)
{
    string result = "";
    string start = "ATG";
    string stop1 = "TAA", stop2 = "TAG", stop3 = "TGA";
    int i =0;
    
    for (int j = 0; j < dna.size(); j++){
        if(dna[j].length() != 3)
        {
            return "Invalid sequence.";
        }
        else{
            for (int k = 0; k < 3; k++){
                if(dna[j][k] != 'A' && dna[j][k] != 'G' && dna[j][k] != 'C' && dna[j][k] != 'T'){
                    return "Invalid sequence.";
                }
            }
        }
        
    }
    while(i < dna.size() && dna[i] != start) i++;
    i++;
    if(i < dna.size())
    {
        while(i < dna.size() && dna[i] != stop1 && dna[i] != stop2 && dna[i] != stop3)
        {
            result += dna[i];
            i++;
        }
    }
    return result;    
}
