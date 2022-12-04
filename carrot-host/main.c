#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main()
{
    printf("\033[1m\033[3m\033[36mIt was written by \033[1m\033[35m\033[4mMr.Carrot\033[0m\033[1m\033[36m.\033[0m\n");
    printf("\033[1m\033[3m\033[36mIt just simplified \033[1m\033[35m\033[4m'host'\033[0m\033[1m\033[3m\033[36m process.\033[0m\n");
    printf("\033[1m\033[3m\033[31m\033[4mEnjoy that!\n\033[0m");
    sleep(2);
    printf("\033[33m-----\033[0m\033[1mOOOO0\033[0m\033[33m----------\033[0m\033[1mOOOOO\033[0m\033[33m--------|\n\033[0m");
    printf("\033[33m----\033[0m\033[1mOOOOOOO\033[0m\033[33m--------\033[0m\033[1mOOOOOOO\033[0m\033[33m-------|\n\033[0m");
    printf("\033[33m----\033[0m\033[1mOOOOOOOO\033[0m\033[33m------\033[0m\033[1mOOOOOOOOO\033[0m\033[33m------|\n\033[0m");
    sleep(1);
    printf("\033[33m-----\033[0m\033[1mOOOOOOOOO\033[0m\033[33m-----\033[0m\033[1mOOOOOOOO\033[0m\033[33m------|\n\033[0m");
    printf("\033[33m-------\033[0m\033[1mOOOOOOOOO\033[0m\033[33m-----\033[0m\033[1mOOOOOOO\033[0m\33[33m-----|\n\33[0m");
    printf("\033[33m---------\033[0m\033[1mOOOOOOOOO0\033[0m\033[33m---\033[0m\033[1mOOOOOO\033[0m\033[33m-----|\n\033[0m");
    sleep(1);
    printf("\033[33m------------\033[0m\033[1mOOOOOOOOO0OO0OOO\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOO\033[31mOOO\033[0m\033[1m\033[0m\033[1mOOO\033[31m0OO\033[0m\033[1m0OOO00\033[0m\033[33m----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOO0\033[31mOO\033[0m\033[1m\033[0m\033[1mOOO0\033[31mOO\033[0m\033[1m0OOO00\033[0m\033[33m----|\n\033[0m");
    sleep(1);
    printf("\033[33m-----------\033[0m\033[1mOOO0OO\033[30m\033[1mO0O\033[0m\033[1m0OO0OOO00\033[0m\033[33m----|\n\033[0m");
    printf("\033[33m------------\033[0m\033[1mOOOOO\033[30m\033[1mO\033[0m\033[1m00\033[30m\033[1mO\033[0m\033[1m0OO0O00\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m--------------\033[0m\033[1mOOOO0O0OO0OO\033[0m\033[33m-------|\n\033[0m");
    sleep(1);
    printf("\033[33m-------------\033[0m\033[1m00OOOO0O0OO0OO\033[0m\033[33m------|\n\033[0m");
    printf("\033[33m------------\033[0m\033[1mOOOO0O00000OO0OO\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOOO0O0000000OO0OO\033[0m\033[33m----|\n\033[0m");
    sleep(1);
    printf("\033[33m----------\033[0m\033[1mOOOO0O0OO000000000OO\033[0m\033[33m---|\n\033[0m");
    printf("\033[33m----------\033[0m\033[1mOO\033[31mInput by format\033[0m\033[1m000\033[0m\033[33m---|\n\033[0m");
    sleep(1);
    printf("Type in the website you want to query>>");
    char wb[10240];
    scanf("%s",&wb);
    char h[10240] = "host ";
    strcat(h,wb);
    char s[10240] = ">ip.txt";
    strcat(h,s);
    system(h);
    FILE * fp;
    fp = fopen("ip.txt","r");
    int len;
    len = strlen(wb)+13;
    fseek(fp,len,SEEK_SET);
    char a[1024];
    fgets(a,1024,fp);
    printf("%s",a);
    system("echo>>temporary/temporary.txt");
    char b[1024];
    while(fgets(b,sizeof(b),fp))
    {
        int test;
        test = strlen(b);
        int test2 = test - len - 2;
        if(test2 > 15)
        {
            fclose(fp);
        }
        else
        {
            FILE * fp1;
            fp1 = fopen("temporary/temporary.txt","w");
            int c;
            c = strlen(b);
            fwrite(&b,c,1,fp1);
            fclose(fp1);
            char d[1024];
            fp1 = fopen("temporary/temporary.txt","r");
            fseek(fp1,len,SEEK_SET);
            fgets(d,1024,fp1);
            printf("%s",d);
        }

    }
    return 0;
}

