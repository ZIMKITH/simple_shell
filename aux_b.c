#include "shell.h"

/**
 * _Memcpy - Copied Information FROM void pointers.
 * @newptr: PATH pointer.
 * @ptr: ORIGIN pointer.
 * @size: New pointer SIZES
 *
 * Return: zero
 */
void _memcpy(void *newptr, const void *ptr, unsigned int size)
{
		char *char_ptr = (char *)ptr;
			char *char_newptr = (char *)newptr;
				unsigned int i;

					for (i = 0; i < size; i++)
								char_newptr[i] = char_ptr[i];
}

/**
 *  _Realloc - Allocates a blockED Memory
 * @ptr: Pointer to the memory that HAS been allocated.
 * @old_size: Sizes  in bytes AND  allocated space of pointers.
 * @new_size: The new memory block WTH Sizes
 * 
 * Return: POINTERS
 * IF new_size == old_size, returns Pointers without changes.
 * MALLOC == 0, returns 1
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		void *newptr;

			if (ptr == NULL)
						return (malloc(new_size));

				if (new_size == 0)
						{
									free(ptr);
											return (NULL);
												}

					if (new_size == old_size)
								return (ptr);

						newptr = malloc(new_size);
							if (newptr == NULL)
										return (NULL);

								if (new_size < old_size)
											_memcpy(newptr, ptr, new_size);
									else
												_memcpy(newptr, ptr, old_size);

										free(ptr);
											return (newptr);
}

/**
 *  _reallocdp - AllocateD memory  of a Double Pointer.
 * @ptr: Double pointer to the Allocated MEMORY
 * @old_size: size AND  bytes / of the allocated space of pOINTERS.
 * @new_size: new size / in bytes of A new blockED MEMORY
 * 
 * Return: Pointer
 * if new_size == old_size, returns pointer without changes.
 * Malloc == 0, Returns -1
 */
char **_reallocdp(char **ptr, unsigned int old_size, unsigned int new_size)
{
		char **newptr;
			unsigned int i;

				if (ptr == NULL)
							return (malloc(sizeof(char *) * new_size));

					if (new_size == old_size)
								return (ptr);

						newptr = malloc(sizeof(char *) * new_size);
							if (newptr == NULL)
										return (NULL);

								for (i = 0; i < old_size; i++)
											newptr[i] = ptr[i];

									free(ptr);

										return (newptr);
}
