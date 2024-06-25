/*Write C Program to Copy String Without Using strcpy().*/
#include <stdio.h>
#include<string.h>
void copyString(char *name, char *nname) {
    int i = 0;
    while (name[i] != '\0') {
        nname[i] = name[i];
        i++;
    }
    nname[i] = '\0';
}

int main() {
    char name[100], nname[100];
    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);
    size_t size = strlen(name);
    if (size > 0 && name[size - 1] == '\n') {
        name[size - 1] = '\0';
    }
    copyString(name, nname);
    printf("Copied string: %s\n", nname);

    return 0;
}
