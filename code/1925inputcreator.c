#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    FILE* pfile = fopen("1925.in", "w");

    fprintf(pfile, "%d %d\n", 100, 100);

    int i, j;

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            int r = rand() % 100;
            if(r < 70) {
                fputc('n', pfile);
            }
            else if(r < 85) {
                fputc('b', pfile);
            }
            else {
                fputc('*', pfile);
            }
        }
        fputc('\n', pfile);
    }

    fclose(pfile);

    return 0;
}
