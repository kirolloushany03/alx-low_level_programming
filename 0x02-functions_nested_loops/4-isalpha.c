#include "main.h"
/**
 * _isalpha : chek if a character is aphabetic character
 *@ c : is the cahracter to be checked
 *
 *
 *
 *return:  1 if the character is an alphabetic character , 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
