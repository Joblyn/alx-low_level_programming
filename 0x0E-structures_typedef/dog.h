#ifndef _DOG_
#define _DOG_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - stores information of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct called "dog" that stores its name, its
 * age and the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif