/*
 * Title: hw1_3.cpp
 * Abstract: This program reads a number of elements in a set and
 *           then read the elements of the set. After that, the program should
 *           display all possible binary numbers and corresponding subsets one by one.
 * Author: Justin Mello
 * ID: 2002
 * Date: 03/05/2021
 */


#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>


using namespace std;

// function to convert decimal to binary 
string decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32];
    string results;
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        // cout << binaryNum[j];
        results = results + to_string(binaryNum[j]);
        return results;
} 

int main() {
    
    int numElements = 0;
    cin >> numElements;

    int elements[numElements];

    for(int i = 0; i < numElements; i++) {
        cin >> elements[i];
    }
    
    for(int i = 0; i < numElements; i++) {
        cout << i << " To Binary is "<< decToBinary(i) << endl;
     

    }//End of for loop
        
        

   
    

return 0;


}

