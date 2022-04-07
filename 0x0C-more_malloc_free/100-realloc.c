#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr : pointer
 * @old_size : pointer old size
 * @new_size : new size
 * Return : new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *oldptr;
	unsigned int i;


	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	oldptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr2[i] = oldptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr2[i] = oldptr[i];
	}
	
	free(ptr);
	return (ptr2);
}
