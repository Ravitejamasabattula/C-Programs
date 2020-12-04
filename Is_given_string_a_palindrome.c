#include <stdio.h>

int is_palyndrome(char[]);


int main()
{
    char a[20];
    int i;
    
    printf("Enter the String: \n");
    scanf("%s", a);
    
    /*printf("The String Before Reverse\n");
    printf("%s\n", a);*/
    
    i = is_palyndrome(a);
    
    if(a[i] == '\0')
    {
        printf("Given String is a Palindrome");
    }
    else
    {
        printf("Given String is not a Palindrome\n");
    }
    return 0;
}

int is_palyndrome (char a[])
{
    char b[20], temp;
    int i, j;
  
    for(i = 0; a[i] != '\0'; i++)
        b[i] = a[i];
        
    j = i -1;
    
    for(i = 0; i <= j/2; i++)
    {
        temp = a[j];
        a[j--] = a[i];
        a[i] = temp;
        /*printf("Swapping a[%d] and a[%d]\n", i, j+1);
        printf("%s\n", a);*/
    }

    /*printf("The String After Reverse : \n");
    printf("%s\n", a);*/
    
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            break;
        }
    }
    return i;
}

