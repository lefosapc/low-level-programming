#ifndef DOG_H
#define DOG_H
/**
*struct dog- Dog description
*@name: dog name
*@age: dog age
*@owner: dog owner
*/
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
