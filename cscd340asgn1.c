#include "ints.h"
#include "chars.h"
#include "words.h"

int main(int argc, char ** argv)
{
    srand(time(NULL));

    FILE * fin = NULL;
    int x, intArray[INTS];
    char charArray[CHARS];
    Words wordsArray[WORDS];

    /****************************************************
     ******************** Ints Array ********************
     ****************************************************/

    for(x = 0; x < INTS; x++)
        intArray[x] = rand() % 100 + 1;

    printf("Ints Before\n");
    printIntArray(intArray);
    printf("\n");

    qsort(intArray, INTS, sizeof(int), compareTwoInts);

    printf("Ints After\n");
    printIntArray(intArray);
    printf("\n\n");

    /****************************************************
     ******************* Chars Array ********************
     ****************************************************/
    for(x = 0; x < CHARS; x++)
        charArray[x] = (char)( rand() % 26 + 65);

    printf("Chars Before\n");
    printCharArray(charArray);
    printf("\n");

    qsort(charArray, CHARS, sizeof(char), compareTwoChars);

    printf("Chars After\n");
    printCharArray(charArray);
    printf("\n\n");

    /****************************************************
     ******************* Words Array ********************
     ****************************************************/

    fin = fopen("words.txt", "r");
    if(fin == NULL)
    {
        perror("File did not open\n");
        exit(-1);
    }// end if

    fillArray(fin, wordsArray);
    fclose(fin);

    printf("Words Before\n");
    printWordsArray(wordsArray);
    printf("\n");

    qsort(wordsArray, WORDS, sizeof(Words), compareTwoWords);

    printf("Words After\n");
    printWordsArray(wordsArray);

    cleanUp(wordsArray);

     /****************************************************
     *****************************************************
     ****************************************************/
    return 0;
}// end main
