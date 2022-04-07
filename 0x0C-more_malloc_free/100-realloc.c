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

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
	}
	else if (new_size < old_size && ptr != NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
	}
	else if (new_size > old_size && ptr != NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
	}
	else if (new_size == old_size && ptr != NULL && new_size != 0)
		return (ptr);
	else if(new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (ptr2);
}
