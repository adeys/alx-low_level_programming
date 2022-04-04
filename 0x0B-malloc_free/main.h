#ifndef _MAIN_H
#define _MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* _MAIN_H */
