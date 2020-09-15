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

bool dogishHelper( std::string, std::string );

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

bool InDogish(std::string word)
{
  return dogishHelper(word, "dog");
}

bool dogishHelper( std::string my_text, std::string dog ){
  for( int k = 0; k < my_text.length(); k++ ){
    if(dog[0] == my_text[k])
      {
        if (dog.length() == 1)
          return true;
        return dogishHelper( my_text.substr( k ), dog.substr( 1 )  );
      }
  }
  return false;
}

bool InXish(std::string my_text, std::string my_word){
  for( int k = 0; k < my_text.length(); k++ ){
    if(my_word[0] == my_text[k])
      {
        if (my_word.length() == 1)
          return true;
        return InXish( my_text.substr( k ), my_word.substr( 1 )  );
      }
  }
  return false;
}