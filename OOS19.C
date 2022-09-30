#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void recurse(int files[]){
    int flag = 0, startBlock, len, j, Z, ch;
    printf("Enter the starting block and the length of the files: ");
    scanf("%d%d", &startBlock, &len);
    for (j=startBlock; j<(startBlock+len); j++){
        if (files[j] == 0)
            flag++;
    }
    if(len == flag){
        for (int Z=startBlock; Z<(startBlock+len); Z++){
            if (files[Z] == 0){
                files[Z] = 1;
                printf("%d\t%d\n",Z, files[Z]);
            }
        }
        if (Z!= (startBlock+len-1))
            printf("The file is allocated to the disk\n");
    }
    else
        printf("The file is not allocated to the disk\n");
    printf("Do you want to enter more files?\n");
    printf("Press 1 for YES, 0 for NO: ");
    scanf("%d", &ch);
    if (ch == 1)
        recurse(files);
    else
        exit(0);
    return;
}
int main()
{
int files[50];
for(int i=0;i<50;i++)
files[i]=0;
printf("Files Allocated are :\n");
recurse(files);
getch();
return 0;
}
