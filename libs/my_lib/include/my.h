/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** prototypes of all the functions exposed by your libmy.a
*/

#ifndef INV_TREE_H
    #define INV_TREE_H

#ifndef MY_PUTCHAR_H
    #define MY_PUTCHAR_H
void my_putchar(char c);
#endif

#ifndef MY_ISNEG_H
    #define MY_ISNEG_H
int my_isneg(int nb);
#endif

#ifndef MY_PUT_NBR_H
    #define MY_PUT_NBR_H
int my_put_nbr(int nb);
#endif

#ifndef MY_SWAP_H
    #define MY_SWAP_H
void my_swap(int *a, int *b);
#endif

#ifndef MY_PUTSTR_H
    #define MY_PUTSTR_H
int my_putstr(char const *str);
#endif

#ifndef MY_STRLEN_H
    #define MY_STRLEN_H
int my_strlen(char const *str);
#endif

#ifndef MY_GETNBR_H
    #define MY_GETNBR_H
int my_getnbr(char const *str);
#endif

#ifndef MY_SORT_INT_ARRAY_H
    #define MY_SORT_INT_ARRAY_H
void my_sort_int_array(int *tab, int size);
#endif

#ifndef MY_COMPUTE_POWER_REC_H
    #define MY_COMPUTE_POWER_REC_H
int my_compute_power_rec(int nb, int power);
#endif

#ifndef MY_COMPUTE_SQUARE_ROOT_H
    #define MY_COMPUTE_SQUARE_ROOT_H
int my_compute_square_root(int nb);
#endif

#ifndef MY_IS_PRIME_H
    #define MY_IS_PRIME_H
int my_is_prime(int nb);
#endif

#ifndef MY_FIND_PRIME_SUP_H
    #define MY_FIND_PRIME_SUP_H
int my_find_prime_sup(int nb);
#endif

#ifndef MY_STRCPY_H
    #define MY_STRCPY_H
char *my_strcpy(char *dest, char const *src);
#endif

#ifndef MY_STRNCPY_H
    #define MY_STRNCPY_H
char *my_strncpy(char *dest, char const *src, int n);
#endif

#ifndef MY_REVSTR_H
    #define MY_REVSTR_H
char *my_revstr(char *str);
#endif

#ifndef MY_STRSTR_H
    #define MY_STRSTR_H
char *my_strstr(char *str, char const *to_find);
#endif

#ifndef MY_STRCMP_H
    #define MY_STRCMP_H
int my_strcmp(char const *s1, char const *s2);
#endif

#ifndef MY_STRNCMP_H
    #define MY_STRNCMP_H
int my_strncmp(char const *s1, char const *s2, int n);
#endif

#ifndef MY_STRUPCASE_H
    #define MY_STRUPCASE_H
char *my_strupcase(char *str);
#endif

#ifndef MY_STRLOWCASE_H
    #define MY_STRLOWCASE_H
char *my_strlowcase(char *str);
#endif

#ifndef MY_STRCAPITALIZE_H
    #define MY_STRCAPITALIZE_H
char *my_strcapitalize(char *str);
#endif

#ifndef MY_STR_ISALPHA_H
    #define MY_STR_ISALPHA_H
int my_str_isalpha(char const *str);
#endif

#ifndef MY_STR_ISNUM_H
    #define MY_STR_ISNUM_H
int my_str_isnum(char const *str);
#endif

#ifndef MY_STR_ISLOWER_H
    #define MY_STR_ISLOWER_H
int my_str_islower(char const *str);
#endif

#ifndef MY_STR_ISUPPER_H
    #define MY_STR_ISUPPER_H
int my_str_isupper(char const *str);
#endif

#ifndef MY_STR_ISPRINTABLE_H
    #define MY_STR_ISPRINTABLE_H
int my_str_isprintable(char const *str);
#endif

#ifndef MY_SHOWSTR_H
    #define MY_SHOWSTR_H
void my_showstr(char const *str);
#endif

#ifndef MY_SHOWMEM_H
    #define MY_SHOWMEM_H
int my_showmem(char const *str, int size);
#endif

#ifndef MY_STRCAT_H
    #define MY_STRCAT_H
char *my_strcat(char *dest, char const *src);
#endif

#ifndef MY_STRNCAT_H
    #define MY_STRNCAT_H
char *my_strncat(char *dest, char const *src, int nb);
#endif

#ifndef MY_IS_PRIME_FOR_FIND_H
    #define MY_IS_PRIME_FOR_FIND_H
int my_is_prime_for_find(int nb);
#endif

#ifndef FOR_MARVIN_H
    #define FOR_MARVIN_H
int for_marvin(char const *str, int i);
#endif

#ifndef MY_STRLEN_FOR_GET_NBR_H
    #define MY_STRLEN_FOR_GET_NBR_H
int my_strlen_for_get_nbr(char const *str);
#endif

#ifndef SUITE_H
    #define SUITE_H
int suite(int nz, char const *str);
#endif

#ifndef TEST_MAX_MIN_H
    #define TEST_MAX_MIN_H
int test_max_min(char max[], int nz, char const *test);
#endif

#ifndef GENERATE_CHAINE_AND_PRINT_H
    #define GENERATE_CHAINE_AND_PRINT_H
int generate_chaine_and_print(long long int N, int i);
#endif

#ifndef NUMBER_OF_ELEMENTS_H
    #define NUMBER_OF_ELEMENTS_H
int number_of_elements(long long int N);
#endif

#ifndef MY_STRLEN_FOR_REVSTR_H
    #define MY_STRLEN_FOR_REVSTR_H
int my_strlen_for_revstr(char const *str);
#endif

#ifndef MY_PUTNBR_BASE_FOR_MARVIN_H
    #define MY_PUTNBR_BASE_FOR_MARVIN_H
int my_putnbr_base_for_marvin(int nbr, char const *base);
#endif

#ifndef MY_STRLEN_FOR_MY_SHOWSTR_H
    #define MY_STRLEN_FOR_MY_SHOWSTR_H
int my_strlen_for_my_showstr(char const *str);
#endif

#ifndef MY_TYPE_ISPRINTABLE_FOR_MY_SHOWSTR_H
    #define MY_TYPE_ISPRINTABLE_FOR_MY_SHOWSTR_H
int my_type_isprintable_for_my_showstr(char letter);
#endif

#ifndef PRINT_INFO_H
    #define PRINT_INFO_H
int print_info(int *array, int j);
#endif

#ifndef DO_ACTION_H
    #define DO_ACTION_H
int do_action(char *str, int i);
#endif

#ifndef MY_STRLEN_FOR_STRCAPITALIZE_H
    #define MY_STRLEN_FOR_STRCAPITALIZE_H
int my_strlen_for_strcapitalize(char const *str);
#endif

#ifndef MY_STRLOWCASE_FOR_STRCAPITALIZE_H
    #define MY_STRLOWCASE_FOR_STRCAPITALIZE_H
char *my_strlowcase_for_strcapitalize(char *str);
#endif

#ifndef MY_TYPE_H
    #define MY_TYPE_H
int my_type(char letter);
#endif

#ifndef MY_STRLEN_STRCAT_H
    #define MY_STRLEN_STRCAT_H
int my_strlen_strcat(char const *str);
#endif

#ifndef COMPARE_STRCMP_H
    #define COMPARE_STRCMP_H
int compare_strcmp(char const *s1, char const *s2, int i);
#endif

#ifndef MY_STRLEN_FOR_STRCMP_H
    #define MY_STRLEN_FOR_STRCMP_H
int my_strlen_for_strcmp(char const *str);
#endif

#ifndef MY_STRLEN_FOR_STRCPY_H
    #define MY_STRLEN_FOR_STRCPY_H
int my_strlen_for_strcpy(char const *str);
#endif

#ifndef MY_STRLEN_FOR_ISALPHA_H
    #define MY_STRLEN_FOR_ISALPHA_H
int my_strlen_for_isalpha(char const *str);
#endif

#ifndef MY_TYPE_ISALPHA_H
    #define MY_TYPE_ISALPHA_H
int my_type_isalpha(char letter);
#endif

#ifndef MY_STRLEN_FOR_ISLOWER_H
    #define MY_STRLEN_FOR_ISLOWER_H
int my_strlen_for_islower(char const *str);
#endif

#ifndef MY_TYPE_ISLOWER_H
    #define MY_TYPE_ISLOWER_H
int my_type_islower(char letter);
#endif

#ifndef MY_STRLEN_FOR_ISNUM_H
    #define MY_STRLEN_FOR_ISNUM_H
int my_strlen_for_isnum(char const *str);
#endif

#ifndef MY_TYPE_ISNUM_H
    #define MY_TYPE_ISNUM_H
int my_type_isnum(char letter);
#endif

#ifndef MY_STRLEN_FOR_ISPRINTABLE_H
    #define MY_STRLEN_FOR_ISPRINTABLE_H
int my_strlen_for_isprintable(char const *str);
#endif

#ifndef MY_TYPE_ISPRINTABLE_H
    #define MY_TYPE_ISPRINTABLE_H
int my_type_isprintable(char letter);
#endif

#ifndef MY_STRLEN_FOR_ISUPPER_H
    #define MY_STRLEN_FOR_ISUPPER_H
int my_strlen_for_isupper(char const *str);
#endif

#ifndef MY_TYPE_ISUPPER_H
    #define MY_TYPE_ISUPPER_H
int my_type_isupper(char letter);
#endif

#ifndef MY_STRLEN_FOR_STRLOWCASE_H
    #define MY_STRLEN_FOR_STRLOWCASE_H
int my_strlen_for_strlowcase(char const *str);
#endif

#ifndef MY_STRLEN_STRNCAT_H
    #define MY_STRLEN_STRNCAT_H
int my_strlen_strncat(char const *str);
#endif

#ifndef MY_CMPLEN_H
    #define MY_CMPLEN_H
int my_cmplen(char const *str);
#endif

#ifndef MY_NEXT_H
    #define MY_NEXT_H
int my_next(char const *s1, char const *s2, int repet);
#endif

#ifndef MY_STRLEN_FOR_STRNCPY_H
    #define MY_STRLEN_FOR_STRNCPY_H
int my_strlen_for_strncpy(char const *str);
#endif

#ifndef CHECK_VALIDITY_H
    #define CHECK_VALIDITY_H
int check_validity(char str[], char to_find[], int to_size, int i);
#endif

#ifndef IS_SAME_H
    #define IS_SAME_H
int is_same(char str[], char to_find[], int to_size, int start);
#endif

#ifndef MY_STRLEN_FOR_STRSTR_H
    #define MY_STRLEN_FOR_STRSTR_H
int my_strlen_for_strstr(char const *str);
#endif

#ifndef MY_STRLEN_FOR_STRUPCASE_H
    #define MY_STRLEN_FOR_STRUPCASE_H
int my_strlen_for_strupcase(char const *str);
#endif

#ifndef MY_STR_TO_WORD_ARRAY_H
    #define MY_STR_TO_WORD_ARRAY_H
char **my_str_to_word_array(char const *str);
#endif

#endif
