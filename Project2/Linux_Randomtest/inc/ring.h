/*========================================================================
** ring.h
** Circular buffer
** ECEN5813
** Submitted By: Shubham Jaiswal
**========================================================================*/

#ifndef RING_H
#define RING_H
#include <stdbool.h>

#define MAX 3   	//size of circular buffer

typedef struct
{
	char *Buffer;
	int Length;
	int Ini;
	int Outi;
	volatile bool Buffer_full
} ring_t;


ring_t *init( int length );
int insert( ring_t *ring, char data );
int remove_element( ring_t *ring, char *data );
int entries( ring_t *ring );

int num;

#endif
