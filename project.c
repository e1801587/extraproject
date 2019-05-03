#include <stdio.h>
#include <stdlib.h>
#include "screen.h"

//global variables
int countA = 0, countA2 = 0;
int countB = 0, countB2 = 0;
int countC = 0, countC2 = 0;
int countD = 0, countD2 = 0;
int countE = 0, countE2 = 0;
int countF = 0, countF2 = 0;
int countG = 0, countG2 = 0;
int countH = 0, countH2 = 0;
int countI = 0, countI2 = 0;
int countJ = 0, countJ2 = 0;
int countK = 0, countK2 = 0;
int countL = 0, countL2 = 0;
int countM = 0, countM2 = 0;
int countN = 0, countN2 = 0;
int countO = 0, countO2 = 0;
int countP = 0, countP2 = 0;
int countQ = 0, countQ2 = 0;
int countR = 0, countR2 = 0;
int countS = 0, countS2 = 0;
int countT = 0, countT2 = 0;
int countU = 0, countU2 = 0;
int countV = 0, countV2 = 0;
int countW = 0, countW2 = 0;
int countX = 0, countX2 = 0;
int countY = 0, countY2 = 0;
int countZ = 0, countZ2 = 0;

int words = 0;
int let[26];
int let2[26];

int main(){

//downloading the txt file
system("wget http://www.cc.puv.fi/~gc/wlist.txt");
	int max = 1311;
	char c[max];
	FILE *fptr;

	if ((fptr = fopen("wlist.txt", "r")) == NULL)
	{
		printf("Error! opening file");
		// Program exits if file pointer returns NULL.
		exit(1);
	}

	// reads text until newline
	fscanf(fptr,"%[^\n]", c);

	//Data from the file can be printed for testing:
//	printf("Data from the file:\n%s", c);
//	printf("\n");
	fclose(fptr);

	//counting words started with the proper letter:
	for (int i=0; i<=max; i++){
		if (c[i] == ' '){
			if(c[i+1] == 'A') countA++;
			if(c[i+1] == 'B') countB++;
			if(c[i+1] == 'C') countC++;
			if(c[i+1] == 'D') countD++;
			if(c[i+1] == 'E') countE++;
			if(c[i+1] == 'F') countF++;
			if(c[i+1] == 'G') countG++;
			if(c[i+1] == 'H') countH++;
			if(c[i+1] == 'I') countI++;
			if(c[i+1] == 'J') countJ++;
			if(c[i+1] == 'K') countK++;
			if(c[i+1] == 'L') countL++;
			if(c[i+1] == 'M') countM++;
			if(c[i+1] == 'N') countN++;
			if(c[i+1] == 'O') countO++;
			if(c[i+1] == 'P') countP++;
			if(c[i+1] == 'Q') countQ++;
			if(c[i+1] == 'R') countR++;
			if(c[i+1] == 'S') countS++;
			if(c[i+1] == 'T') countT++;
			if(c[i+1] == 'U') countU++;
			if(c[i+1] == 'V') countV++;
			if(c[i+1] == 'W') countW++;
			if(c[i+1] == 'X') countX++;
			if(c[i+1] == 'Y') countY++;
			if(c[i+1] == 'Z') countZ++;
		}
	}
	//can be printed for testing:
/*
	printf("The amont of words started with A: %d\n", countA);
	printf("The amont of words started with B: %d\n", countB);
	printf("The amont of words started with C: %d\n", countC);
	printf("The amont of words started with D: %d\n", countD);
	printf("The amont of words started with E: %d\n", countE);
	printf("The amont of words started with F: %d\n", countF);
	printf("The amont of words started with G: %d\n", countG);
	printf("The amont of words started with H: %d\n", countH);
	printf("The amont of words started with I: %d\n", countI);
	printf("The amont of words started with J: %d\n", countJ);
	printf("The amont of words started with K: %d\n", countK);
	printf("The amont of words started with L: %d\n", countL);
	printf("The amont of words started with M: %d\n", countM);
	printf("The amont of words started with N: %d\n", countN);
	printf("The amont of words started with O: %d\n", countO);
	printf("The amont of words started with P: %d\n", countP);
	printf("The amont of words started with Q: %d\n", countQ);
	printf("The amont of words started with R: %d\n", countR);
	printf("The amont of words started with S: %d\n", countS);
	printf("The amont of words started with T: %d\n", countT);
	printf("The amont of words started with U: %d\n", countU);
	printf("The amont of words started with V: %d\n", countV);
	printf("The amont of words started with W: %d\n", countW);
	printf("The amont of words started with X: %d\n", countX);
	printf("The amont of words started with Y: %d\n", countY);
	printf("The amont of words started with Z: %d\n", countZ);
*/
	//counting the letters in total
	for (int j=0; j<=max; j++){
		if (c[j] == 'A') countA2++;
		if (c[j] == 'B') countB2++;
		if (c[j] == 'C') countC2++;
		if (c[j] == 'D') countD2++;
		if (c[j] == 'E') countE2++;
		if (c[j] == 'F') countF2++;
		if (c[j] == 'G') countG2++;
		if (c[j] == 'H') countH2++;
		if (c[j] == 'I') countI2++;
		if (c[j] == 'J') countJ2++;
		if (c[j] == 'K') countK2++;
		if (c[j] == 'L') countL2++;
		if (c[j] == 'M') countM2++;
		if (c[j] == 'N') countN2++;
		if (c[j] == 'O') countO2++;
		if (c[j] == 'P') countP2++;
		if (c[j] == 'Q') countQ2++;
		if (c[j] == 'R') countR2++;
		if (c[j] == 'S') countS2++;
		if (c[j] == 'T') countT2++;
		if (c[j] == 'U') countU2++;
		if (c[j] == 'V') countV2++;
		if (c[j] == 'W') countW2++;
		if (c[j] == 'X') countX2++;
		if (c[j] == 'Y') countY2++;
		if (c[j] == 'Z') countZ2++;
	}
	//can be printed for testing
/*
	printf("The amount of letters A: %d\n", countA2);
	printf("The amount of letters B: %d\n", countB2);
	printf("The amount of letters C: %d\n", countC2);
	printf("The amount of letters D: %d\n", countD2);
	printf("The amount of letters E: %d\n", countE2);
	printf("The amount of letters F: %d\n", countF2);
	printf("The amount of letters G: %d\n", countG2);
	printf("The amount of letters H: %d\n", countH2);
	printf("The amount of letters I: %d\n", countI2);
	printf("The amount of letters J: %d\n", countJ2);
	printf("The amount of letters K: %d\n", countK2);
	printf("The amount of letters L: %d\n", countL2);
	printf("The amount of letters M: %d\n", countM2);
	printf("The amount of letters N: %d\n", countN2);
	printf("The amount of letters O: %d\n", countO2);
	printf("The amount of letters P: %d\n", countP2);
	printf("The amount of letters Q: %d\n", countQ2);
	printf("The amount of letters R: %d\n", countR2);
	printf("The amount of letters S: %d\n", countS2);
	printf("The amount of letters T: %d\n", countT2);
	printf("The amount of letters U: %d\n", countU2);
	printf("The amount of letters V: %d\n", countV2);
	printf("The amount of letters W: %d\n", countW2);
	printf("The amount of letters X: %d\n", countX2);
	printf("The amount of letters Y: %d\n", countY2);
	printf("The amount of letters Z: %d\n", countZ2);
*/
	//putting all the values of words in one array:
	int i1 = 0, j1 = 0;
	while (i1 <= 25){
		let[i1] = countA;
		i1++;
		let[i1] = countB;
		i1++;
		let[i1] = countC;
		i1++;
		let[i1] = countD;
		i1++;
		let[i1] = countE;
		i1++;
		let[i1] = countF;
		i1++;
		let[i1] = countG;
		i1++;
		let[i1] = countH;
		i1++;
		let[i1] = countI;
		i1++;
		let[i1] = countJ;
		i1++;
		let[i1] = countK;
		i1++;
		let[i1] = countL;
		i1++;
		let[i1] = countM;
		i1++;
		let[i1] = countN;
		i1++;
		let[i1] = countO;
		i1++;
		let[i1] = countP;
		i1++;
		let[i1] = countQ;
		i1++;
		let[i1] = countR;
		i1++;
		let[i1] = countS;
		i1++;
		let[i1] = countT;
		i1++;
		let[i1] = countU;
		i1++;
		let[i1] = countV;
		i1++;
		let[i1] = countW;
		i1++;
		let[i1] = countX;
		i1++;
		let[i1] = countY;
		i1++;
		let[i1] = countZ;
	}
	//can be printed for testing:
	//printf("Array 1 values: %d\n", let[2]);

	//putting all values of letters in one array:
	while (j1<=25){
		let2[j1] = countA2;
		j1++;
		let2[j1] = countB2;
		j1++;
		let2[j1] = countC2;
		j1++;
		let2[j1] = countD2;
		j1++;
		let2[j1] = countE2;
		j1++;
		let2[j1] = countF2;
		j1++;
		let2[j1] = countG2;
		j1++;
		let2[j1] = countH2;
		j1++;
		let2[j1] = countI2;
		j1++;
		let2[j1] = countJ2;
		j1++;
		let2[j1] = countK2;
		j1++;
		let2[j1] = countL2;
		j1++;
		let2[j1] = countM2;
		j1++;
		let2[j1] = countN2;
		j1++;
		let2[j1] = countO2;
		j1++;
		let2[j1] = countP2;
		j1++;
		let2[j1] = countQ2;
		j1++;
		let2[j1] = countR2;
		j1++;
		let2[j1] = countS2;
		j1++;
		let2[j1] = countT2;
		j1++;
		let2[j1] = countU2;
		j1++;
		let2[j1] = countV2;
		j1++;
		let2[j1] = countW2;
		j1++;
		let2[j1] = countX2;
		j1++;
		let2[j1] = countY2;
		j1++;
		let2[j1] = countZ2;
	}
	//can be printed for testing:
	//printf("Array 2 values: %d\n", let2[2]);

	//counting the total amount of words
	for(int z = 0; z<=max; z++){
		if (c[z] == ' ') words++; 
	}
	//can be printed for testing:
	//printf("The total amount of words: %d\n", words);

clearScreen();

#ifndef DEBUG
	barChart();
#endif

resetColors();

	return 0;
}
