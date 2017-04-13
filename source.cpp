#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct mhs{
	int nilai;
	char nama[25];
	char nim[11];
	struct mhs *next; //Untuk menunjuk ke record mhs berikutnya
};