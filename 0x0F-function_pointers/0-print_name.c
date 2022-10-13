/**
 * print_name - prints a name as func
 * @name: name of the person
 * @f: the name format
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
