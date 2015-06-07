#include "Reverse.h"
#include <stdio.h>


/**
* Find the LAST (partial) word in the Text ad return position of the first letter.
*	exp:
* 	text     = 	hello, my name is Aladindinlad		
*	wordFind = 	lad
* 	the return value is 26  
*
*	input:
* 		text       contain a bunch of words
* 		wordFind  is the (partial) word to find in the text 
*	return:
* the position of the LAST (partial) word of first letter found in the text.
* if the word cannot find in the text,-1 is returned.
*/


int Reverse(char *text, char *wordToFind){
	
	int last_i, last_j, k,x;
	last_i=0;
	last_j=0;
	k = 0;
	x = 0;

	
// move i to last letter of the text	
	while (text [last_i] != 0) {
		printf ("[%d,%c]\n", last_i, text [last_i]);
		last_i++;
	}
	
//move j to last letter of the WordToFind	
	while (wordToFind [last_j] != 0) {
		printf ("[%d,%c]\n", last_j, wordToFind [last_j]);
		last_j++;
	} 
	
	
	last_i--;
	last_j--;
	printf ("[%d,%d],%c,%c\n",last_i, last_j, text [last_i], wordToFind [last_j]);

//compare last letter of the text with the last letter of the wordtofind 	
	while (text [last_i] != 0)
	{
		printf ("**[%d, %d],%c, %c\n",last_i,last_j ,text [last_i],wordToFind [last_j] ); 
		while (text [last_i-k] == wordToFind [last_j-k])
		{
			printf ("@[%d ,%d, %c, %c]\n", last_i, last_j, text [last_i], wordToFind [last_j]);
			k++;
			if (wordToFind [last_j-k] == 0)
			{
				printf ("[%d, %d]\n", last_i, k);
				x = last_i- (k - 1) ;
				return x;
			}
		}
		last_i--;
	}
	return -1;
}



