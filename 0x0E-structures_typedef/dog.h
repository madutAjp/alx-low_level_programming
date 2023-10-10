#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - A struct that create dog detials
 * @name:The name of the dog
 * @age:The age of the dog
 * @owner:The owner of the dog
 * description:A struct with dog's information
 */
/**
 * dog_t - new name for struct dog
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
