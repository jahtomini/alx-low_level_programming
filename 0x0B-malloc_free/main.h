int _putchar(int i);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *concatenate(char *first, char *second, int len1, int len2);
char *argstostr(int ac, char **av);
char **strtow(char *str);