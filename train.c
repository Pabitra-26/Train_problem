#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct details
{
    char source[100];
    char destination[100];
    int price;
};
int main()
{
    int n;
    printf("Enter the no. of routes:");
    scanf("%d",&n);
    struct details info[n];
    int i;
    printf("Enter the route details:");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d",info[i].source, info[i].destination, &info[i].price);
    }
    printf("Output:");
//    for(i=0;i<n;i++)
//    {
//        printf("%s %s %d\n",info[i].source, info[i].destination, info[i].price);
//    }
//    return 0;
int count=0, count1=0,count2=0;
for(i=0;i<(n*3);i++)
{
    if(strstr(info[i].source,"Delhi")!=NULL)
        count++;
    else if(strstr(info[i].destination,"Chennai")!=NULL)
    {
        count1++;

    }
    else
        count2++;

}
int s[count][3],m[count2][3],d[count1][3];
//for(i=0;i<(n*3);i++)
//{
//
//    if(strstr(info[i].source,"Delhi")!=NULL)
//    {
//        int i,j;
//        for(j=0;j<count;j++)
//            for(k=0;k<3;k++)
//            s[j][k]=info[i];
//    }
//}
return 0;

}
