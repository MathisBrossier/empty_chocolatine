# README

## Function List

### `my_putchar`
- **Description**: Prints a single character.
- **Prototype**: `void my_putchar(char c);`

### `my_isneg`
- **Description**: Checks if a number is negative.
- **Prototype**: `int my_isneg(int nb);`

### `my_put_nbr`
- **Description**: Displays the number given using `my_putchar`.
- **Prototype**: `int my_put_nbr(int nb);`

### `my_swap`
- **Description**: Swaps the values of two integers.
- **Prototype**: `void my_swap(int *a, int *b);`

### `my_putstr`
- **Description**: Prints a string.
- **Prototype**: `int my_putstr(char const *str);`

### `my_strlen`
- **Description**: Returns the length of a string.
- **Prototype**: `int my_strlen(char const *str);`

### `my_getnbr`
- **Description**: Converts a string to an integer.
- **Prototype**: `int my_getnbr(char const *str);`

### `my_sort_int_array`
- **Description**: Sorts an array of integers in ascending order.
- **Prototype**: `void my_sort_int_array(int *tab, int size);`

### `my_compute_power_rec`
- **Description**: Computes the power of a number recursively.
- **Prototype**: `int my_compute_power_rec(int nb, int power);`

### `my_compute_square_root`
- **Description**: Computes the square root of a number.
- **Prototype**: `int my_compute_square_root(int nb);`

### `my_is_prime`
- **Description**: Checks if a number is prime.
- **Prototype**: `int my_is_prime(int nb);`

### `my_find_prime_sup`
- **Description**: Finds the smallest prime number greater than or equal to the given number.
- **Prototype**: `int my_find_prime_sup(int nb);`

### `my_strcpy`
- **Description**: Copies a string to another.
- **Prototype**: `char *my_strcpy(char *dest, char const *src);`

### `my_strncpy`
- **Description**: Copies up to n characters from a string to another.
- **Prototype**: `char *my_strncpy(char *dest, char const *src, int n);`

### `my_revstr`
- **Description**: Reverses a string.
- **Prototype**: `char *my_revstr(char *str);`

### `my_strstr`
- **Description**: Finds the first occurrence of a substring in a string.
- **Prototype**: `char *my_strstr(char *str, char const *to_find);`

### `my_strcmp`
- **Description**: Compares two strings.
- **Prototype**: `int my_strcmp(char const *s1, char const *s2);`

### `my_strncmp`
- **Description**: Compares up to n characters of two strings.
- **Prototype**: `int my_strncmp(char const *s1, char const *s2, int n);`

### `my_strupcase`
- **Description**: Converts a string to uppercase.
- **Prototype**: `char *my_strupcase(char *str);`

### `my_strlowcase`
- **Description**: Converts a string to lowercase.
- **Prototype**: `char *my_strlowcase(char *str);`

### `my_strcapitalize`
- **Description**: Capitalizes the first letter of each word in a string.
- **Prototype**: `char *my_strcapitalize(char *str);`

### `my_str_isalpha`
- **Description**: Checks if a string contains only alphabetic characters.
- **Prototype**: `int my_str_isalpha(char const *str);`

### `my_str_isnum`
- **Description**: Checks if a string contains only numeric characters.
- **Prototype**: `int my_str_isnum(char const *str);`

### `my_str_islower`
- **Description**: Checks if a string contains only lowercase characters.
- **Prototype**: `int my_str_islower(char const *str);`

### `my_str_isupper`
- **Description**: Checks if a string contains only uppercase characters.
- **Prototype**: `int my_str_isupper(char const *str);`

### `my_str_isprintable`
- **Description**: Checks if a string contains only printable characters.
- **Prototype**: `int my_str_isprintable(char const *str);`

### `my_showstr`
- **Description**: Displays a string and non-printable characters in hexadecimal.
- **Prototype**: `int my_showstr(char const *str);`

### `my_showmem`
- **Description**: Displays the memory content.
- **Prototype**: `int my_showmem(char const *str, int size);`

### `my_strcat`
- **Description**: Concatenates two strings.
- **Prototype**: `char *my_strcat(char *dest, char const *src);`

### `my_strncat`
- **Description**: Concatenates up to n characters of two strings.
- **Prototype**: `char *my_strncat(char *dest, char const *src, int nb);`

### `my_strdup`
- **Description**: Duplicates a string.
- **Prototype**: `char *my_strdup(char const *src);`

### `my_str_to_word_array`
- **Description**: Splits a string into an array of words.
- **Prototype**: `char **my_str_to_word_array(char const *str);`

### `my_show_word_array`
- **Description**: Displays an array of words.
- **Prototype**: `int my_show_word_array(char *const *tab);`

## Helper Functions

### `generate_chaine_and_print`
- **Description**: Generates a string from a number and prints it.
- **Prototype**: `int generate_chaine_and_print(long long int N, int i);`

### `number_of_elements`
- **Description**: Counts the number of digits in a number.
- **Prototype**: `int number_of_elements(long long int N);`

### `compare_strcmp`
- **Description**: Compares two characters for `my_strcmp`.
- **Prototype**: `int compare_strcmp(char const *s1, char const *s2, int i);`

### `check_validity`
- **Description**: Checks the validity of a substring in `my_strstr`.
- **Prototype**: `int check_validity(char str[], char to_find[], int to_size, int i);`

### `is_same`
- **Description**: Checks if two substrings are the same.
- **Prototype**: `int is_same(char str[], char to_find[], int to_size, int start);`

### `my_next`
- **Description**: Helper function for `my_strncmp`.
- **Prototype**: `int my_next(char const *s1, char const *s2, int repet);`

### `my_type`
- **Description**: Determines the type of a character.
- **Prototype**: `int my_type(char letter);`

### `my_strlen_for_*`
- **Description**: Various helper functions to calculate the length of a string for specific use cases.
- **Prototypes**:
    - `int my_strlen_for_get_nbr(char const *str);`
    - `int my_strlen_for_revstr(char const *str);`
    - `int my_strlen_for_my_showstr(char const *str);`
    - `int my_strlen_for_strcapitalize(char const *str);`
    - `int my_strlen_for_strcmp(char const *str);`
    - `int my_strlen_for_strcpy(char const *str);`
    - `int my_strlen_for_isalpha(char const *str);`
    - `int my_strlen_for_islower(char const *str);`
    - `int my_strlen_for_isnum(char const *str);`
    - `int my_strlen_for_isprintable(char const *str);`
    - `int my_strlen_for_isupper(char const *str);`
    - `int my_strlen_for_strlowcase(char const *str);`
    - `int my_strlen_for_strncpy(char const *str);`
    - `int my_strlen_for_strstr(char const *str);`
    - `int my_strlen_for_strupcase(char const *str);`
    - `int my_strlen_strcat(char const *str);`
    - `int my_strlen_strncat(char const *str);`
    - `int my_cmplen(char const *str);`

### `my_type_*`
- **Description**: Various helper functions to determine the type of a character for specific use cases.
- **Prototypes**:
    - `int my_type_isprintable_for_my_showstr(char letter);`
    - `int my_type_isalpha(char letter);`
    - `int my_type_islower(char letter);`
    - `int my_type_isnum(char letter);`
    - `int my_type_isprintable(char letter);`
    - `int my_type_isupper(char letter);`

### `for_marvin`
- **Description**: Helper function for `my_getnbr`.
- **Prototype**: `int for_marvin(char const *str, int i);`

### `suite`
- **Description**: Helper function for `my_getnbr`.
- **Prototype**: `int suite(int nz, char const *str);`

### `test_max_min`
- **Description**: Helper function for `my_getnbr`.
- **Prototype**: `int test_max_min(char max[], int nz, char const *test);`

### `do_action`
- **Description**: Helper function for `my_strcapitalize`.
- **Prototype**: `int do_action(char *str, int i);`

### `my_strlowcase_for_strcapitalize`
- **Description**: Helper function for `my_strcapitalize`.
- **Prototype**: `char *my_strlowcase_for_strcapitalize(char *str);`

### `my_putnbr_base_for_marvin`
- **Description**: Helper function for `my_showstr`.
- **Prototype**: `int my_putnbr_base_for_marvin(int nbr, char const *base);`

### `number_word`
- **Description**: Helper function for `my_str_to_word_array`.
- **Prototype**: `int number_word(char const *str);`

### `print_info`
- **Description**: Helper function for printing array information.
- **Prototype**: `int print_info(int *array, int j);`