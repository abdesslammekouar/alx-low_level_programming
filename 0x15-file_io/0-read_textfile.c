#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: variable pointer
 * @letters: size letters
 * Return: if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, l, w;
char *t;

t = malloc(letters);
if (t == NULL)
return (0);

if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
{
free(t);
return (0);
}

l = read(file, t, letters);

w = write(STDOUT_FILENO, t, l);

close(file);

return (w);
}
