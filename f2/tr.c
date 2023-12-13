#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *line;
	size_t len;
} InputStruct;

void readInput(InputStruct *input) {
	printf("Enter a line: ");
	getline(&(input->line), &(input->len), stdin);

	// Remove the newline character, if present
	size_t newlineIndex = input->len - 1;
	if (input->line[newlineIndex] == '\n') {
		input->line[newlineIndex] = '\0';
	}
}

int main() {
	InputStruct userInput = {NULL, 0};

	// Reading input using the function
	readInput(&userInput);

	// Printing the input
	printf("You entered: %s\n", userInput.line);

	// Freeing allocated memory
	free(userInput.line);

	return 0;
}
