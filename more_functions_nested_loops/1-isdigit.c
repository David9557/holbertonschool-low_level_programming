#include "main.h"

/*
 * _isdgit - regarde si c'est un chiffre
 * Return: return 0 si ce n'est pas un chiffre compris entre 0 et 9
 * et 1 si sa l'est.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
