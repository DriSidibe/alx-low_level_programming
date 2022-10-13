/**
 * array_iterator - executes a function
 * given as a parameter on
 * each element of an array.
 * @array: the array containning elements
 * @size: the size of the array
 * @action: the action function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		(*action)(*(array + i));
	}
}
