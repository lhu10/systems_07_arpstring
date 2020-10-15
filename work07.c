#include <stdio.h>
#include <string.h>

double arr_avg(int *ap, int length){
    double sum = 0.0; 
    int i; 
    for(i = 0; i < length; i++){
        sum += *(ap + i); 
    }

    return sum/length; 
}

void ray_copy(int *ap, int *rp, int length){
    int i; 
    for(i = 0; i < length; i++){
        *(rp + i) = *(ap + i); 
    }
}

int str_length(char *sp){
    int count = 0;  
    while(*sp != 0){
        *(sp++);  
        count++; 
    }

    return count;   
}

int main(){
    //problem 1

    int length = 5; 
    int arr[length], i; 
    for(i = 0; i < length; i++){
        arr[i] = i; 
        printf("%d\n", arr[i]); 
    }
    
    printf("avg: %lf\n", arr_avg(arr, length)); 

    //problem 2
    int ray[length]; 
    ray_copy(arr, ray, length); 
    for(i = 0; i < length; i++){
        printf("%d\n", ray[i]); 
    }

    //problem 3
    char str[] = "Friday"; 
    printf("length of string: %d\n", str_length(str)); 

    //String library functions
    //strcpy
    char copy[256]; 
    strcpy(copy, str); 
    printf("%s\n", copy); 

    //strcat
    char cat[] = "Yay "; 
    strcat(cat, str);
    printf("%s\n", cat); 

    //strcmp
    int result; 
    char str2[] = "Saturday"; 
    result = strcmp(str, str2); 
    if(result < 0) printf("str is less than str2\n"); 
    else if(result > 0) printf("str is greater than str2\n");
    else printf("str is equal to str2\n"); 

    //strchr
    char *first_occ;
    char miss[] = "Mississippi"; 
    char c = 's'; 
    first_occ = strchr(miss, c); 
    printf("first occurance of %c is at %s\n", c, first_occ); 

    //strrchr
    char *last_occ;
    last_occ = strrchr(miss, c); 
    printf("last occurance of %c is at %s\n", c, last_occ); 

    return 0; 
}
