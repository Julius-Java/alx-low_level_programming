#ifndef DOG_H
#define DOG_H
/**
*struct dog - A structure data type for dog information
*@name: Dog's name
*@age: Dog's age
*@owner: Dog owner's name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
