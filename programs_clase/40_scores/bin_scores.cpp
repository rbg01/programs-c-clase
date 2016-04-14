#include <stdio.h>
#include <stdlib.h>

#define SCORE_FILE "points.bin"
#define N 0x20
#define IN 10

struct Score {
    char user[N];
    int score;
};

void pretty_print(struct Score user){
    static int orden = 0;
    printf("\t\t%i.- %s\t%i\n", ++orden, user.user, user.score);
}

int main(int argc, const char **argv){

    FILE *pf = NULL;
    struct Score board[IN];

    if ( !(pf = fopen(SCORE_FILE, "rb"))  ){
        fprintf(stderr, "File %s not found.\n",  SCORE_FILE);
        return EXIT_FAILURE;
    }

    fread(board, sizeof(struct Score), IN, pf);
    fclose(pf);

    for (int i=0; i<IN; i++)
        pretty_print(board[i]);

    return EXIT_SUCCESS;
}

