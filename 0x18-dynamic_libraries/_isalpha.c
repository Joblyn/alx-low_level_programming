/**
 * _isalpha - Print 1 if character is alphabetic, else 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for alphabetic character. 0 for non-alphabetic
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
