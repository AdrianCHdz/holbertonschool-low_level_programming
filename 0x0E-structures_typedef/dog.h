#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the description of the doggo
 * @name: The name of the puppy
 * @age: How old is the pup
 * @owner: The owner of the dude.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
