/**
* _islower - Check if a character is lowercase
* @c: The character to be checked
*
* This function checks if the character `c` is a lowercase letter.
*
* Return: 1 if the character is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
