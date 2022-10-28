#ifndef CACHESET_H_
#include "cacheline.cpp"
#include <cstddef>
#define CACHESET_H_

class CacheSet {

public:
	int noofblocks;
	int index;
	cacheline* set;
	unsigned char** lru;
	CacheSet(int blocksize, int tagbits, int indexbits, int offsetbits, int linesinSet);
	virtual ~CacheSet();
	void init(int blocksize, int tagbits,int indexbits,int offsetbits, int sets);
	int getlru(int index);
	int minimumLRUBlock();

};
#endif  
