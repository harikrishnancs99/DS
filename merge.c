#include<stdio.h>
int main()
{
    int ar1[50],ar2[50],ar3[100],m,n,i,j,k=0;
    printf("Enter the size of array:");
    scanf("%d",&m);
    printf("\n Enter the sorted elements of 1st array: \n");
    for(i=0;i<m;i++)
    {
      scanf("%d",&ar1[i]);
}
printf("\n Enter the size of the 2nd array:");
scanf("%d",&n);
printf("\n Enter the sorted elements of 2nd array: \n");
for(i=0;i<n;i++)
{
scanf("%d",&ar2[i]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(ar1[i]<ar2[i])
{
ar3[k]=ar1[i];
i++;
}
else
{
ar3[k]=ar2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
ar3[k]=ar2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
ar3[k]=ar1[i];
i++;
k++;
}
}
printf("\n After merging: \n");
for(i=0;i<m+n;i++)
{
printf("\n%d",ar3[i]);
}
}

