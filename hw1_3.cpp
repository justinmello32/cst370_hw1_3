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
#include <vector>
#include <array>


using namespace std;

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

        // array to store binary number
        int binaryNum[32];
        vector<string> resultSet;
        int n = i;
        // counter for binary array
        int k = 0;
        while (n > 0) {
            // storing remainder in binary array
            binaryNum[k] = n % 2;
            if(binaryNum[k] == 1) {
                resultSet.push_back(elements[k]);
            }
            n = n / 2;
            k++;
        }

        if(k > 0) {
            //Print extra zero is needed
            int difference = numElements - k;
            for(int a =0; a < difference; a++)
                cout << "0";
            // printing binary array in reverse order
            for (int j = k - 1; j >= 0; j--) {
                cout << binaryNum[j];
            }
            cout << ":";
        }
        else{
            if(numElements == 0) {
                cout << "0:Empty" << endl;
            }
            else {
                for (int i = 0; i < numElements; i++) {
                    cout << "0";
                }
                cout << ":Empty";
            }
        }

        reverse(resultSet.begin(),resultSet.end());
        for(int q = 0; q < resultSet.size(); q++){
            cout << resultSet[q] << " ";
        }
        cout << endl;

}//End of for loop
        
        

   
    

return 0;


}

