/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if @c is an alphabetic chracter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}