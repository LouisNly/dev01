#include <iostream>
#include <conio.h>


int main(int argc, char** argv) {
	
	int a = 0;
	int i;
	int moytemp = 0;
	int moyg = 0;
	int nb_elv= 0;
	int note_elv = 0;
	char nom_elv[99];
	int nplus = 0;
	int nmoins = 100;
	char np_elv[99];
	char nm_elv[99];
	int count =0;
	
	printf("Entre le nombre d'eleve : ");
	scanf("%d", &nb_elv);
	
	
	while (i <= nb_elv){
		
		printf("Nom de l'eleve : ");
		scanf("%s", &nom_elv);
		printf("Moyenne de l'eleve : ");
		scanf("%d", &note_elv);
	
	
		
		if (note_elv <= 0 && note_elv >= 20){
			
			exit (1);
			printf("ERREUR DE NOTE !");	
		}
		
		count++;
		
			if (note_elv < nmoins){
			
				nmoins = note_elv;
				while(a != 99){
        			nm_elv[a] = nom_elv[a];    
       		 		a++;
        		} 
			}else{}
		
			 if (note_elv > nplus){
				nplus = note_elv;
					while(a != 99){
        			np_elv[a] = nom_elv[a];    
       		 		a++;
        		} 
			}else{}
			
			a = 0;
			
			moytemp = moytemp + note_elv;
			moyg = moytemp / count;
			
	
		printf("La moyenne de classe est de %d \n", moyg);
	
		printf("La pire note est de %d qui est celle de %s. \n", nmoins, nm_elv);
	
		printf("La meilleur note est de %d qui est celle de %s. \n", nplus, np_elv);
		
	i++;
	}
	
}
