#ifndef DOG_H
#define DOG_H

/**
* struct dog - The structure called dog
* @name: name of
* @age: age of
* @owner: the owner of the dog
* Description: This struct is for dog registering
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
