#include <stdio.h>
#include <string.h>

/* Q19. What will be the output of the C program? */

struct player {
    char pname[20];
}pl;
char *play(struct player *temp_pl);

int main() {
    strcpy(pl.pname, "Dhoni");
    printf("%s %s", pl.pname, play(&pl));
    return 0;
}

char *play(struct player *temp_pl) {
    strcpy(temp_pl->pname, "Kohli");
    return temp_pl->pname;
}