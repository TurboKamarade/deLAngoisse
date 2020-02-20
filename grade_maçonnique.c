#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char	*premier_terme(int	n)
{
	if (n == 0)
		return ("Vénérable");
	else if (n == 1)
		return ("Grand");
	else if (n == 2)
		return ("Respectable");
	else if (n == 3)
		return ("Discret");
	else if (n == 4)
		return ("Majestueux");
	else if (n == 5)
		return ("Éternel");
	else if (n == 6)
		return ("Sublime");
	else if (n == 7)
		return ("Turbo");
	else if (n == 8)
		return ("Étincelant");
	else if (n == 9)
		return ("Fils du");
	else if (n == 10)
		return ("Vaillant");
	else if (n == 11)
		return ("Combattant");
	else if (n == 12)
		return ("Sombre");
	else if (n == 13)
		return ("Noble");
	else if (n == 14)
		return ("Incroyable");
	else if (n == 15)
		return ("Ultime");
	else if (n == 16)
		return ("Insolite");
	else if (n == 17)
		return ("Fieffé");
	else if (n == 18)
		return ("Improbable");
	else if (n == 19)
		return ("Super");
	else if (n == 20)
		return ("Divin");
	else if (n == 21)
		return ("Impétueux");
	else if (n == 22)
		return ("Charitable");
	return (0);
}

char	*deuxieme_terme(int n)
{
	if (n == 0)
		return ("Maître parfait");
	else if (n == 1)
		return ("Chevalier");
	else if (n == 2)
		return ("Prévot");
	else if (n == 3)
		return ("Prince");
	else if (n == 4)
		return ("Chef");
	else if (n == 5)
		return ("Souverain");
	else if (n == 6)
		return ("Pontife");
	else if (n == 7)
		return ("Inspecteur");
	else if (n == 8)
		return ("Inquisiteur");
	else if (n == 9)
		return ("Commandeur");
	else if (n == 10)
		return ("Paure");
	else if (n == 11)
		return ("Corbeau");
	else if (n == 12)
		return ("Messager");
	else if (n == 13)
		return ("Leader Supreme");
	else if (n == 14)
		return ("Decorateur d'interieur");
	else if (n == 15)
		return ("Technicien de surfaces");
	else if (n == 16)
		return ("Haut fonctionnaire");
	else if (n == 17)
		return ("Pigiste");
	else if (n == 18)
		return ("Archiviste");
	else if (n == 19)
		return ("Barde");
	else if (n == 20)
		return ("Doyen");
	else if (n == 21)
		return ("Chasse-coquin");
	else if (n == 22)
		return ("Oracle");
	else if (n == 23)
		return ("Géologue");
	else if (n == 24)
		return ("Bouffon");
	else if (n == 25)
		return ("Lord");
	else if (n == 26)
		return ("Alchimiste");
	else if (n == 27)
		return ("Piscineux");
	else if (n == 28)
		return ("Capitaine");
	else if (n == 29)
		return ("Écossais");
	else if (n == 30)
		return ("Duc");
	else if (n == 31)
		return ("Roi");
	else if (n == 32)
		return ("Devin");
	else if (n == 33)
		return ("Duc");
	else if (n == 34)
		return ("Baron");
	else if (n == 35)
		return ("Marquis");
	else if (n == 36)
		return ("Écuyer");
	else if (n == 37)
		return ("Vicomte");
	return (0);
}

char	*troisieme_terme(int n)
{
	if (n == 0)
		return ("écossais");
	else if (n == 1)
		return ("royal");
	else if (n == 2)
		return ("de l\' ordre");
	else if (n == 3)
		return ("du temple");
	else if (n == 4)
		return ("de la croix");
	else if (n == 5)
		return ("de la compassion");
	else if (n == 6)
		return ("du tabouret");
	else if (n == 7)
		return ("général");
	else if (n == 8)
		return ("de la pauretitude");
	else if (n == 9)
		return ("soyeux");
	else if (n == 10)
		return ("gadget");
	else if (n == 11)
		return ("cosmique");
	else if (n == 12)
		return ("ombral");
	else if (n == 13)
		return ("sous prozac");
	else if (n == 14)
		return ("du potage");
	else if (n == 15)
		return ("de la moulinette");
	else if (n == 16)
		return ("modéré");
	else if (n == 17)
		return ("cosmique");
	return (0);
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
	else if (n == 7)
		return ("du logos");
	else if (n == 8)
		return ("de l'espace");
	else if (n == 10)
		return ("de sous la montagne");
	else if (n == 11)
		return ("des cavités");
	else if (n == 12)
		return ("de la calvitie Cyrilique");
	else if (n == 13)
		return ("des profondeurs");
	else if (n == 14)
		return ("de l'Univers");
	else if (n == 15)
		return ("de Corèze");
	else if (n == 16)
		return ("du cul");
	else if (n == 17)
		return ("over 9000");
	else if (n == 18)
		return ("de Sealand");
	else if (n == 19)
		return ("écossais");
	else if (n == 20)
		return ("de Shinzo Abe, premier ministre du Japon");
	else if (n == 21)
		return ("de la calvitie Paurcique");
	else if (n == 22)
		return ("de la mendicité Clémentique");
	else if (n == 23)
		return ("de Saint Eloi");
	return ("de 42");
}
int		main()
{
	srand(time(0));

	int n1 = rand() % 23;
	int n2 = rand() % 38;
	int n3 = rand() % 18;
	int n4 = rand() % 24;

	printf("%s %s %s %s\n", premier_terme(n1), deuxieme_terme(n2), troisieme_terme(n3), quatrieme_terme(n4));
	return (0);
}
