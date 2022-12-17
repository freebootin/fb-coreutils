#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
        char    ch;
        FILE    *fp;

        if (argc = 1) {
                fp = stdin;

                while ((ch = fgetc(fp)) != EOF)
                        printf("%c", ch);
                
                fclose(fp);

                exit(EXIT_SUCCESS);
        }
        
        for (int i = 1; i < argc; i++) {
                fp = fopen(argv[i], "r");

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
