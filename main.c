#include <stdio.h>
#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main -this is the function for the
* monty code interpreter
* @argc: Argument number
* @argv: the location for monty files
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
    char *content = NULL;
    FILE *file;
    size_t size = 0;
    stack_t *stack = NULL;
    unsigned int counter = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    bus.file = file;

    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    content = malloc(size);  // Allocate memory for content buffer

    if (!content)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    while (fgets(content, size, file) != NULL)
    {
        bus.content = content;
        counter++;

        func_exec(content, &stack, counter, file);

        free(content);
        content = NULL;
        size = 0;
    }

    func_stack_free(stack);
    fclose(file);
    return 0;
}
