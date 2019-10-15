#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char	*premier_terme(int	n)
{
	if (n == 0)
		return ("Vénérable ");
	else if (n == 1)
		return ("Grand ");
	else if (n == 2)
		return ("Respectable ");
	else if (n == 3)
		return ("Discret ");
	else if (n == 4)
		return ("Majestueux ");
	else if (n == 5)
		return ("Éternel ");
	else if (n == 6)
		return ("Sublime ");
	else if (n == 7)
		return ("Turbo ");
}

char	*deuxieme_terme(int n)
{
	if (n == 0)
		return ("Maître ");
	else if (n == 1)
		return ("Chevalier ");
	else if (n == 2)
		return ("Prévot ");
	else if (n == 3)
		return ("Prince ");
	else if (n == 4)
		return ("Chef ");
	else if (n == 5)
		return ("Souverain ");
	else if (n == 6)
		return ("Pontife ");
	else if (n == 7)
		return ("Inspecteur ");
	else if (n == 8)
		return ("Inquisiteur ");
	else if (n == 9)
		return ("Commandeur ");
	else if (n == 10)
		return ("Paure ");
}

char	*troisieme_terme(int n)
{
	if (n == 0)
		return ("écossais ");
	else if (n == 1)
		return ("royal ");
	else if (n == 2)
		return ("de l\' ordre ");
	else if (n == 3)
		return ("du temple ");
	else if (n == 4)
		return ("de la croix ");
	else if (n == 5)
		return ("de la compassion ");
	else if (n == 6)
		return ("du tabouret ");
	else if (n == 7)
		return ("général ");
	else if (n == 8)
		return ("de la pauretitude ");
}

char	*quatrieme_terme(int n)
{
	if (n == 0)
		return ("de Saint André");
	else if (n == 1)
		return ("du Soleil");
	else if (n == 2)
		return ("du serpent d\'Airain");
	else if (n == 3)
		return ("de bronze");
	else if (n == 4)
		return ("du tabernacle");
	else if (n == 5)
		return ("symbolique");
	else if (n == 6)
		return ("de l\'angoisse");
}
int		main()
{
	srand(time(0));

	int n1 = rand() % 8;
	int n2 = rand() % 11;
	int n3 = rand() % 9;
	int n4 = rand() % 7;

	printf("%s %s %s %s\n", premier_terme(n1), deuxieme_terme(n2), troisieme_terme(n3), quatrieme_terme(n4));
	return (0);
}
