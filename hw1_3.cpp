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
#include <string>


using namespace std;

// function to convert decimal to binary 
string decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32];
    string results = "0";
  
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

int returnLoopsRequired(int n) {
    int result;
    
    switch(n) {
        case 0:
            result = 0;
            break;
        case 1 :
            result = 1;
            break;
        case 2 :
            result = 3;
            break;
        case 3 :
            result = 7;
            break;
        case 4:
            result = 15;
            break;
        case 5:
            result = 31;
            break;
        case 6:
            result = 63;
            break;
        case 7:
            result = 127;
            break;
        case 8:
            result = 255;
            break;
        case 9:
            result = 256;
            break;
 
      default :
         result = 0;
   }
    
    return result;
}

int main() {
    
    int numElements = 0;
    cin >> numElements;

    string elements[numElements];

    for(int i = 0; i < numElements; i++) {
        cin >> elements[i];
    }
    reverse(elements, elements + numElements);
    
    int groupToBinary = returnLoopsRequired(numElements);

    for(int i = 0; i <= groupToBinary; i++) {
        cout << decToBinary(i) << ":";
        cout << "Answer Here" << endl;

    }//End of for loop
        
        

   
    

return 0;


}

