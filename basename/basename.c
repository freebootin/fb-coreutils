#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main (int argv, char *argc[])
{
        if (argv < 2) {
                printf("Basename: missing operand\n");
                exit(EXIT_FAILURE);
        }

        if (argv > 3) {
                printf("Basename: extra operand '%s'\n", argc[3]);
                exit(EXIT_FAILURE);
        }

        char *s, *prev;

        for (s = argc[1] ; (s = strtok(s, "/")) != NULL; s = NULL) {
                prev = s;
        }

        printf("%s\n", prev);

        //printf("%s\n", argc[1]);
        exit(EXIT_SUCCESS);

        /* If string is null, skip to step 2. In the GNU implementation it
         * outputs a null string.*/

        /* if string is "//", it is implementation defined whether steps 3 to 6
         * are skipped or proccessed. Gonna be skipped for early iterations. 
         */

        /* If string consists entirely of <slash> characters, string shall be
         * set to a single <slash> character. In this case skip steps 4-6. 
         */

        /* If there are any trailing <slash> characters in string, they shall
         * be removed.
         */

        /* If there are any <slash> charaters remaining in string, prefix of
         * string up to and including the last <slash> charater in string
         * shall be removed.
         */

        /* If the suffix operand is present, is not identical to the
         * characters remaining in string, the suffix suffix shall be removed
         * from string. Otherwise, string is not modified by this step. It
         * shall not be considered an error if suffix is not found in string.
         */

        /* Resulting string shall be written to stdout.*/

}
