/****
* PSEUDOCODE:
ReverseArray:
  int back = length of reverse
  int temp will hold value to switch
  for (i=0 i< half length of revers i++)
    swap value at i with value at back 
    back -- 
HasBalancedParentheses
  for the length of the string 
    if ( open pren ++
    if ) closed pren --
    if closed pren > open pren 
      return false
  if open pren == closed pren 
    return true
  return false
*
*/
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

bool HasBalancedParentheses(std::string balance){
  int open_pren = 0;
  int close_pren = 0;

  for( int k = 0; k < balance.length(); k++ ){
    if(balance[k] == '(' )
      open_pren++;

    if(balance[k] == ')' )
      close_pren++;
      
    if(close_pren > open_pren)
      return false;
  }
  if( open_pren == close_pren )
    return true;
  return false;
}

bool InDogish(std::string k)
{return true;}