#include <stdlib.h>
/**
 * _realloc - allocates memory without losing the content
 * @ptr:      pointer  to re  allocate
 * @old_size: the old  allocated  size
 * @new_size: the new size to allocate
 * Return: pointer  to  new  allocated memory if possible
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1 = ptr, *ptr2;
	unsigned int i = 0;

	if (new_size == 0 && ptr1 != NULL)
	{
		free(ptr1);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (ptr1 == NULL)
		return (ptr2);

	while ((i < old_size || i <= new_size) && *(ptr1 + i) != 0)
	{
		*(ptr2 + i) = *(ptr1 + i);
		i++;
	}
	free(ptr1);
	return (ptr2);
}
