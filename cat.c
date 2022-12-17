#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
        char    ch;
        FILE    *fp;
        
        printf("Number of arguments: %d\n", argc);
        if (argc > 1) {
                fp = fopen(argv[1], "r");

                if (fp == NULL) {
                        perror("Error, could not open file.\n");
                        exit(EXIT_FAILURE);
                }

                while ((ch = fgetc(fp)) != EOF)
                        printf("%c", ch);

                fclose(fp);
        }

        exit(EXIT_SUCCESS);
}
