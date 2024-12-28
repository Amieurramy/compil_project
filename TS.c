#include "TS.h"
#include <stdlib.h>
#include <string.h>





void setNode(struct node* node, char* key, float value,char* type)
{	node->key = key;
	node->value = value;
    node->type =strdup(type);
	node->next = NULL;
}

void initializeHashMap(struct hashMap* mp) {
    mp->capacity = 100;  
    mp->numOfElements = 0;
    mp->arr = (struct node**)malloc(sizeof(struct node*) * mp->capacity);
    int i;
    for (i = 0; i < mp->capacity; i++) {
        mp->arr[i] = NULL;  
    }
}

int hashFunction(char* key)
{
	int bucketIndex;
	int sum = 0, factor = 31;
	int i;
	for (i = 0; i < strlen(key); i++) {
		sum = ((sum % 100)+ (((int)key[i]) * factor) % 100)% 100;

		factor = ((factor % 32767)* (31 % 32767))% 32767 ;
	}
	bucketIndex = sum;
	return bucketIndex;
}



void insert(struct hashMap* mp, char* key, float value,char* type)
{

	
	int bucketIndex = hashFunction(key);
	struct node* newNode = (struct node*)malloc(sizeof(struct node));

	setNode(newNode, key, value,type);

	if (mp->arr[bucketIndex] == NULL) {
		mp->arr[bucketIndex] = newNode;
	}

	else {

	
		newNode->next = mp->arr[bucketIndex];
		mp->arr[bucketIndex] = newNode;
	}
	return;
}

void delete (struct hashMap* mp, char* key)
{


	int bucketIndex = hashFunction(key);

	struct node* prevNode = NULL;


	struct node* currNode = mp->arr[bucketIndex];

	while (currNode != NULL) {

	
		if (strcmp(key, currNode->key) == 0) {

		
			if (currNode == mp->arr[bucketIndex]) {
				mp->arr[bucketIndex] = currNode->next;
			}

			
			else {
				prevNode->next = currNode->next;
			}
			free(currNode->key);
			free(currNode);
			break;
		}
		prevNode = currNode;
		currNode = currNode->next;
	}
	return;
}

struct node* search(struct hashMap* mp, char* key) {
    int bucketIndex = hashFunction(key);
    struct node* bucketHead = mp->arr[bucketIndex];
    
    while (bucketHead != NULL) {
        if (strcmp(bucketHead->key, key) == 0) {
            return bucketHead;
        }
        bucketHead = bucketHead->next;
    }
    return NULL;
}


void displayNodeAsSymbol(struct node* n,char* code) {
    while (n != NULL) {
		if(!strcmp(code,"IDF")){
		if(strncmp(n->type,"INTEGER",7) && strncmp(n->type,"FLOAT",5) )
        printf("| %-11s | %-20s | %-20s | %-13.5f |\n",code, n->key, n->type, n->value);
        else if(strlen(n->type)<=7){printf("| %-11s | %-20s | %-20s | NULL          |\n",code, n->key, n->type);}else
		printf("| %-11s | %-20s | %-20s | %-13d |\n",code, n->key, n->type, (int)n->value); 
		}else{
		printf("| %-34s | %-35s  |\n",code, n->key);		
		}
		n = n->next;
    }
}

// Fonction pour afficher toute la table de hachage sous forme de table de symboles
void displaySymbolTable(struct hashMap* table,char* code) {
	printf("\n\n");
	if(!strcmp(code,"IDF")){
	printf("=============================================================================\n");
    printf("|                          Table de Symboles des IDF                        |\n");
    printf("=============================================================================\n");
    printf("| CODE_ENTITE | ENTITE               | Type                 | Valeur/Taille |\n");
    printf("=============================================================================\n");
	}else{
		if(!strcmp(code,"MOT CLE")){
	printf("=============================================================================\n");
    printf("|                      Table de Symboles des MOTS CLE                       |\n");
    printf("=============================================================================\n");
    printf("| CODE_ENTITE                        | ENTITE                               |\n");
    printf("=============================================================================\n");
		}else{
	printf("=============================================================================\n");
    printf("|                     Table de Symboles des SEPARATEURS                     |\n");
    printf("=============================================================================\n");
    printf("| CODE_ENTITE                        | ENTITE                               |\n");
    printf("=============================================================================\n");

		}
	}
    int i;
	struct node* current;
    for (i=0 ; i <100; i++) {
        current = table->arr[i];
        if (current != NULL) {
            displayNodeAsSymbol(current,code);  // Affiche les noeuds dans ce bucket
        }
    }
    printf("=============================================================================\n");
}
