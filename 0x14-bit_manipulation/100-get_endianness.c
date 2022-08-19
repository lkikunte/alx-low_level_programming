/**
* get_endianness - checks the endianness
* Return: int - 0 if big endian, 1 otherwise
*/
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
