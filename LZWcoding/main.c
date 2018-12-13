#include <stdio.h>
#include <stdlib.h>
#define CAP 6500
typedef struct Diet
{
//this constuct is used to define the dictionary as its own function later on
	int value;
	char str[MAXSIZE];
}Diet;
//the cohort is used to allocate a amount of empty spaces to be added to when updating the dictionary
Dictionary cohort[256];
//the function bellow is the dictionary will be expanded on when adding new sequences or joint character values to
void Dictionary()
{
//this is used to define each character to a value to be called on when converting the text file characters
    dictionary[0].value = 0;
    strcpy(dictionary[0].string, "#")

    dictionary[1].value = 1;
    strcpy(dictionary[1].string, "A")

    dictionary[2].value = 2;
    strcpy(dictionary[2].string, "B")

    dictionary[3].value = 3;
    strcpy(dictionary[3].string, "C")

    dictionary[4].value = 4;
    strcpy(dictionary[4].string, "D")

    dictionary[5].value = 5;
    strcpy(dictionary[5].string, "E")

    dictionary[6].value = 6;
    strcpy(dictionary[6].string, "F")

    dictionary[7].value = 7;
    strcpy(dictionary[7].string, "G")

    dictionary[8].value = 8;
    strcpy(dictionary[8].string, "H")

    dictionary[9].value = 9;
    strcpy(dictionary[9].string, "I")

    dictionary[10].value = 10;
    strcpy(dictionary[10].string, "J")

    dictionary[11].value = 11;
    strcpy(dictionary[11].string, "K")

    dictionary[12].value = 12;
    strcpy(dictionary[12].string, "L")

    dictionary[13].value = 13;
    strcpy(dictionary[13].string, "M")

    dictionary[14].value = 14;
    strcpy(dictionary[14].string, "N")

    dictionary[15].value = 15;
    strcpy(dictionary[15].string, "O")

    dictionary[16].value = 16;
    strcpy(dictionary[16].string, "P")

    dictionary[17].value = 17;
    strcpy(dictionary[17].string, "Q")

    dictionary[18].value = 18;
    strcpy(dictionary[18].string, "R")

    dictionary[19].value = 19;
    strcpy(dictionary[19].string, "S")

    dictionary[20].value = 20;
    strcpy(dictionary[20].string, "T")

    dictionary[21].value = 21;
    strcpy(dictionary[21].string, "U")

    dictionary[22].value = 22;
    strcpy(dictionary[22].string, "V")

    dictionary[23].value = 23;
    strcpy(dictionary[23].string, "W")

    dictionary[24].value = 24;
    strcpy(dictionary[24].string, "X")

    dictionary[25].value = 25;
    strcpy(dictionary[25].string, "Y")

    dictionary[26].value = 26;
    strcpy(dictionary[26].string, "Z")
// the following below specifies spaces in the file
    dictionary[27].value = 27;
    strcpy(dictionary[27].string, "_")





}
//NewSeq is used to
void NewSeq()
{
	//print function to call print array sorted
	for (int check = 0; check < end; check++)
	{
		printf(" %s ", dictionary[check]);
	}
}
int main()
{
//file is a pointer to file
//the following code is used to open the file for reading to al;low for the command to scan the text to be latter compressed
	FILE* fp = fopen("file.txt", "r");
	char str[CAP];
	fgets(str, CAP, fp);

//content then close file at end after scan to not corrupt data
	fclose(fp);



//this is used to then print the new compressed sequence being the compressed version for transfer
printf( "%s",NewSeq);
    return 0;
}

