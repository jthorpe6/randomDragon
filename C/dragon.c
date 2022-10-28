#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char *dragons[] = {"Archonei", "Arrax", "Balerion", "Caraxes", "Cannibal",
			   "Dreamfyre", "Drogon", "Essovius", "Grey Ghost", "Ghiscar",
			   "Meleys", "Meraxes", "Moondancer", "Morghul", "Morning",
			   "Quicksilver", "Rhaegal", "Seasmoke", "Sheepstealer", "Shrykos",
			   "Silverwing", "Stormcloud", "Sunfyre", "Syrax", "Tessarion",
			   "Terrax", "Tyraxes", "Urrax", "Valyron", "Vermax"};
  time_t t;
  srand((unsigned)time(&t));
  printf("%s\n", dragons[rand()%10]);
  return 0;
}
