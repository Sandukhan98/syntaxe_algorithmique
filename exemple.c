#include "syn_algo.h"

VARIABLES_ENTIERES(a,b,c);
DEBUT
  ECRIRE("entrez a :");
  LIRE(a);
  ECRIRE("entrez b :");
  LIRE(b);
  c = a + b;
  ECRIRE("resultat :");
  ECRIRE_VARIABLE(c);
FIN
