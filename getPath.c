#include <stdio.h>
#include <stdlib.h>

int main() {
  char * path;

  /* Récupérer la valeur de la variable d'environnement "PATH"
  et l'affecter à "path". */
  path = getenv("PATH");   

  /* Vérifier si 'path' n'est pas NULL 
  (c'est-à-dire si la variable d'environnement a été trouvée) */
  if(path != NULL)   
    printf("La chaîne d'environnement 'PATH' est: %s", path);

  return 0;  
}