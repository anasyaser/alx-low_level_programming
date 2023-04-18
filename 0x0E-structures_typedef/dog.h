#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - dog data log
 * @name: dog name
 * @age: the age of dog
 * @owner: the dog owner
 *
 * Description: Header of dog attributes for its name, age and owner
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
