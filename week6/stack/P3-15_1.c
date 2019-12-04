/*	This program reverses a list of integers read	from the keyboard by pushing them into a stack	and retrieving them one by one	   Written by:	   Date:*/#include <stdio.h>#include <stdbool.h>#include "stacksADT.h"int main (void){//	Local Definitions	int  done = false;	int* dataPtr ;	LIST* list ;//	Statements	// Create a stack and allocate memory for data	list = createList ();

	// Fill stack	while (!done)	   {	    dataPtr = (int*) malloc (sizeof(int));	    printf ("Enter a number: <-1> to stop: ");
	    scanf ("%d" , dataPtr);

	    if ((*dataPtr) == -1	           || fullList (list))	       done = true;	    else	       pushList (list, dataPtr);	   } // while//	Now print numbers in reverse	printf ("\n\nThe list of numbers reversed:\n");	while (!emptyList (list))	   {	    dataPtr = (int*)popList (list);	    printf ("%3d\n", *dataPtr);	    free (dataPtr);	   } // while//	Destroying Stack	destroyList (list);	return 0;}	// main/*	ResultsEnter a number: <-1> to stop: 3Enter a number: <-1> to stop: 5Enter a number: <-1> to stop: 7Enter a number: <-1> to stop: 16Enter a number: <-1> to stop: 91Enter a number: <-1> to stop:The list of numbers reversed: 91 16  7  5  3
  -1*/
