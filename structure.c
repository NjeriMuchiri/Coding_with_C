// #include <stdio.h>
// #include <stdlib.h>
// struct User
// {
//     char *name;
//     char *email;
//     int age;
// };
// struct User *new_user(char *name, char *email, int age)
// {
//     struct User *user;
//     user = malloc(sizeof(struct User));
//     if (user == NULL)
//     return NULL;
//     user->name = name;
//     user->email = email;
//     user->age = age;
//     return user;
// }
// int main(void)
// {
//     struct User *user;

//     user = new_user("Foo", "foo@foo.bar", 98);
//     if (user == NULL)
//         return (1);
//     printf("User %s created !\n", user->name);
//     printf("His email is:  %s\n", user->email);
//     printf("And he is  %d years old\n", user->age);

//     return (0);
// }

// struct example 2
#include <stdio.h>
#include <stdlib.h>
struct Programmer
{
    char *name;
    char *email;
    char *programminglanguages;
    int age;
};
struct Programmer *new_bie(char *name, char *email, char *programminglanguages, int age)
{
    struct Programmer *programming;

    programming = malloc(sizeof(struct Programmer));
    if (programming == NULL)
    return(NULL);
     
    programming->name = name;
    programming->email = email;
    programming->programminglanguages = programminglanguages;
    programming->age= age;

    return programming;
}
int main(void)
{
    struct Programmer *programming;
    
    programming = new_bie("NjeriMuchiri Portfolio", "info@portfolio.co.ke", "Python,Flask,React,C",2);
    if (programming == NULL)
    return (1);
    printf("My portfolio is %s created on the 3rd of August 2022\n", programming->name);
    printf("Email is: %s, let's connect\n", programming->email);
    printf("Am well-versed with the following: %s\n", programming->programminglanguages);
    printf("I have this much experience: %d\n", programming->age);
       
    return (0);
}
