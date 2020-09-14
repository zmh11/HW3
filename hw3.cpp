/****
* PSEUDOCODE:
*
*/
#include<iostream>
#include <string>

void ReverseArray( int reverse[], int length){
  int back = length -1;
  int temp;

	for (int i = 0; i < length/2; i++) {
    temp = reverse[back];
    reverse[back] = reverse[i];
    reverse[i] = temp;
    back --;
	}
}

bool HasBalancedParentheses(std::string k){
  return true;
}

bool InDogish(std::string k)
{return true;}