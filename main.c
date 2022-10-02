#include <string.h>
#include "sorts.c"
void main(int argc, char *argv[]){
    long long unsigned int arr[] = {5, 1, 6, 2, 10, 3, 9, 8, 7, 4};
    double dblarr[] = {3.14, 2.14, 7.123, 45.3124, 32.132, 11.11, 98.32, 435.23, 5.243, 4.546};
    unsigned char charr[] = {'w', 'g', 'a', 'h', 'e', 'd', 't', 'j', 'o', 's'};
    // PS - don't change data types(mandatory for compatibility with functions in the sorts.c)
    int size = sizeof(arr)/sizeof(arr[0]);
    int mid = size/2; 
    if(argc > 1){
        if(strcmp(argv[1], "-b") == 0 && strcmp(argv[2], "int") == 0){
            printf("Sorting with bubble sort algorithm is shown below:\n");
            printf("array before sorting:");
            unsintprintarr(arr, size);
            unsintbubsort(arr, size);
            printf("\nsorted array:");
            unsintprintarr(arr, size);
        }
        if(strcmp(argv[1], "-b") == 0 && strcmp(argv[2], "dbl") == 0){
            printf("Sorting with bubble sort algorithm is shown below:\n");
            printf("array before sorting:");
            dblprintarr(dblarr, size);
            dblbubsort(dblarr, size);
            printf("\nsorted array:");
            dblprintarr(dblarr, size);
        }
        if(strcmp(argv[1], "-b") == 0 && strcmp(argv[2], "chr") == 0){
            printf("Sorting with bubble sort algorithm is shown below:\n");
            printf("array before sorting:");
            chprintarr(charr, size);
            chbubsort(charr, size);
            printf("\nsorted array:");
            chprintarr(charr, size);
        }
        if(strcmp(argv[1], "-s") == 0 && strcmp(argv[2], "int") == 0){
            printf("Sorting with selection sort algorithm is shown below:\n");
            printf("array before sorting:");
            unsintprintarr(arr, size);
            unsintselsort(arr, size);
            printf("\nsorted array:");
            unsintprintarr(arr, size);
        }
        if(strcmp(argv[1], "-s") == 0 && strcmp(argv[2], "dbl") == 0){
            printf("Sorting with selection sort algorithm is shown below:\n");
            printf("array before sorting:");
            dblprintarr(dblarr, size);
            dblselsort(dblarr, size);
            printf("\nsorted array:");
            dblprintarr(dblarr, size);
        }
        if(strcmp(argv[1], "-s") == 0 && strcmp(argv[2], "chr") == 0){
            printf("Sorting with selection sort algorithm is shown below:\n");
            printf("array before sorting:");
            chprintarr(charr, size);
            chselsort(charr, size);
            printf("\nsorted array:");
            chprintarr(charr, size);
        }
        if(strcmp(argv[1], "-i") == 0 && strcmp(argv[2], "int") == 0){
            printf("Sorting with insertion sort algorithm is shown below:\n");
            printf("array before sorting:");
            unsintprintarr(arr, size);
            unsintinssort(arr, size);
            printf("\nsorted array:");
            unsintprintarr(arr, size);
        }
        if(strcmp(argv[1], "-i") == 0 && strcmp(argv[2], "dbl") == 0){
            printf("Sorting with insertion sort algorithm is shown below:\n");
            printf("array before sorting:");
            dblprintarr(dblarr, size);
            dblinssort(dblarr, size);
            printf("\nsorted array:");
            dblprintarr(dblarr, size);
        }
        if(strcmp(argv[1], "-i") == 0 && strcmp(argv[2], "chr") == 0){
            printf("Sorting with insertion sort algorithm is shown below:\n");
            printf("array before sorting:");
            chprintarr(charr, size);
            chinssort(charr, size);
            printf("\nsorted array:");
            chprintarr(charr, size);
        }
        if(strcmp(argv[1], "-m") == 0 && strcmp(argv[2], "int") == 0){
            printf("Sorting with merge sort algorithm is shown below:\n");
            printf("array before sorting:");
            unsintprintarr(arr, size);
            unsintmersort(arr, mid, size);
            printf("\nsorted array:");
            unsintprintarr(arr, size);
        }
        if(strcmp(argv[1], "-m") == 0 && strcmp(argv[2], "dbl") == 0){
            printf("Sorting with merge sort algorithm is shown below:\n");
            printf("array before sorting:");
            dblprintarr(dblarr, size);
            dblmersort(dblarr, mid, size);
            printf("\nsorted array:");
            dblprintarr(dblarr, size);
        }
        if(strcmp(argv[1], "-m") == 0 && strcmp(argv[2], "chr") == 0){
            printf("Sorting with merge sort algorithm is shown below:\n");
            printf("array before sorting:");
            chprintarr(charr, size);
            chmersort(charr, mid, size);
            printf("\nsorted array:");
            chprintarr(charr, size);
        }
        if(strcmp(argv[1], "--in") == 0 && strcmp(argv[2], "int") == 0){
            unsintinput();
        }
        if(strcmp(argv[1], "--in") == 0 && strcmp(argv[2], "dbl") == 0){
            dblinput();
        }
        if(strcmp(argv[1], "--in") == 0 && strcmp(argv[2], "chr") == 0){
            charinput();
        }
        if(strcmp(argv[1], "--ss") == 0){
            sort_system();
        }
        if(strcmp(argv[1], "--cps") == 0){
            char_print_system();
        }
        if(strcmp(argv[1], "--cic") == 0){
            char_in_dec_oct_hex_bin();
        }
        if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
            help();
        }
        else{
            printf("too many arguments. Avoid typing in unnecessary arguments\n");
            help();
        }
    }
    if(argc > 3){
        printf("too many arguments\n");
        help();
    }
    else{
        printf("No parameters passed\n");
        help();
    }
}