#ifndef TS_H
#define TS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	
	char* key;
	
	float value;

    char* type;

	struct node* next;
};

struct pile_element{
char text[20];
int type;	
};


struct hashMap {
	int capacity,numOfElements;
	struct node** arr ;
};




void setNode(struct node* node, char* key, float value, char* type);
void initializeHashMap(struct hashMap* mp);
int hashFunction(char* key);
void insert(struct hashMap* mp, char* key, float value, char* type);
void delete(struct hashMap* mp, char* key);
struct node* search(struct hashMap* mp, char* key);
void displayNodeAsSymbol(struct node* n,char* code);
void displaySymbolTable(struct hashMap* table,char* code);
#endif








 

