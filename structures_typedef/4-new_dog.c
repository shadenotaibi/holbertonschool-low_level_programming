
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *dog_name;
    char *dog_owner;
    unsigned int i;
    unsigned int name_len;
    unsigned int owner_len;

    i = 0;
    while (name[i] != '\0')
        i++;
    name_len = i + 1;
    i = 0;
    while (owner[i] != '\0')
        i++;
    owner_len = i + 1;
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog_name = malloc(sizeof(char) * name_len);
    if (dog_name == NULL)
    {
        free(dog);
        return (NULL);
    }
    dog_owner = malloc(sizeof(char) * owner_len);
    if (dog_owner == NULL)
    {
        free(dog_name);
        free(dog);
        return (NULL);
    }
    i = 0;
    while (i < name_len)
    {
        dog_name[i] = name[i];
        i++;
    }
    i = 0;
    while (i < owner_len)
    {
        dog_owner[i] = owner[i];
        i++;
    }
    dog->name = dog_name;
    dog->age = age;
    dog->owner = dog_owner;
    return (dog);
}
