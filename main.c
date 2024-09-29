#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int proposition;


	printf("Choississez un nombre entre 1 et 100 :\n");

	while(proposition != random_number){	//tant que la prop est différend du random_number

		scanf("%d", &proposition);


		if (proposition < random_number){	//si la prop est plus petit que le random_number

			printf("C'est plus !\n");

		}

		else if (proposition > random_number){	//si la prop est plus grand que le random_number

			printf("C'est moins !\n");
		}
	}

	printf("Gagné !");

	return 0;

}