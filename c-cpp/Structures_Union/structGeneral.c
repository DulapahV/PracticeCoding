#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person judge, nono;
    strcpy(judge.name, "Dulapah Vibulsanti");
    judge.age = 18;

    strcpy(nono.name, "Sitthapong Jitsuparp");
    nono.age = 19;

    puts(judge.name);
    printf("%d\n", judge.age);

    puts(nono.name);
    printf("%d\n", nono.age);
}