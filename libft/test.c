#include <stdio.h>
#include <string.h>

int test_ft_strnstr() {
    const char* haystack = "Hello, world! This is a test.";
    const char* needle = "world";
    size_t len = strlen(haystack);

    char* result = ft_strnstr(haystack, needle, len);

    if (result) {
        printf("Needle found at position: %ld\n", result - haystack);
    } else {
        printf("Needle not found.\n");
    }

	if (result == 7)
		printf("Test 1 passed");
	else
		printf("Test 1 failed");
    return 0;
}