#include "main.h"
/**
 * read_textfile - reads a text file and prints to the POSIX standard output
 * @filename: pointer to file
 * @letters: number of letters
 * Return: 0 if function fails or filename is NULL.
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *lenght;
	ssize_t fo, fr, fw;

	if (filename == NULL)
	{
		return (0);
	}
	lenght = malloc(sizeof(char) * letters);

	if (lenght == NULL)
	{
		return (0);
	}
	fo = open(filename, O_RDONLY);
	if (fo == -1)
	{
		free(lenght);
		return (0);
	}
	fr = read(fo, lenght, letters);
	if (fr == -1)
	{
		free(lenght);
		return (0);
	}
	fw = write(STDOUT_FILENO, lenght, fr);
	if (fw == -1 || fw != fr)
	{
		free(lenght);
		return (0);
	}
free(lenght);
close(fo);

return (fw);
}
