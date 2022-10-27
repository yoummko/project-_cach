#ifndef _C_H_INCLUDED_   
#define _C_H_INCLUDED_   
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

class cacheline {
public:
	cacheline(int blocksize, int tagbits,int index,int offsetbits) {
		
		data = (unsigned int*)malloc(((blocksize * (sizeof(unsigned int)))));
		memset(data, 0, ((blocksize * (sizeof(int)))));
		tag = (char*)malloc(sizeof(char) * (tagbits));
		memset(tag, sizeof(char) * (tagbits));
		tag[tagbits] = '\0';
		index = (char*)malloc(sizeof(char) * (indexbits)+1);
		memset(index, '0', sizeof(char) * (indexbits)+1);
		index[indexbits] = '\0';
		offset = (char*)malloc((sizeof(char) * offsetbits) + 1);
		memset(offset, '0', (sizeof(char) * offsetbits) + 1);
		offset[offsetbits] = '0';
	
	};
	
	signed int* data;
	char* index;
	char* tag;
	char* offset;
	
};
#endif
