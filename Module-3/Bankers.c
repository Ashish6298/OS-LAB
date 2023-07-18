#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>

void main(){
    int k=0,a=0,b=0,instance[5],availability[5],allocated[10][5],need[10][5],max[10][5],process,P[10],noofresources,cnt=0,i,j;

    printf("\n Enter the no of resources:");
    scanf("%d",&noofresources);
    printf("Enter the max instances of each resources:");

    for(i=0;i<noofresources;i++)
    {
        availability[i]=0;
        printf("%c=",(i+97));
        scanf("%d",instance[i]);

    }
    printf("\n Enter the no of processes:");
    scanf("%d",&process);
    printf("\nEnter allocation matrix\n");

    for ( i = 0; i < noofresources; i++)
    {
        printf("%c",(i+97));
        printf("\n");
    }
    for ( i = 0; i < process; i++)
    {
        P[i]=i;
        printf("P[%d]",P[i]);
        for ( j = 0; j < noofresources; j++)
        {
            scanf("%d",&allocated[i][j]);
            availability[j]+=allocated[i][j];
        }
        
    }

    printf("\nEnter max matrix\n");
    for ( i = 0; i < noofresources; i++)
    {
         printf("%c",(i+97));
         availability[i]=instance[i]-availability[i];
    }
    printf("\n");
    A:a=-1;
    for ( i = 0; i < process; i++)
    {
        cnt=0;
        b=P[i];
        for ( j = 0; j < noofresources; j++)
        {
           need[b][j]=max[b][j]-allocated[b][j];
           if(need[b][j]<=availability[j])
           cnt++; 
        }
        
        if(cnt==noofresources)
        {
            op[k++]=P[i];
            for ( j = 0; j < noofresources; j++)
            {
                availability[j]+=allocated[b][j];
            }
            
        }else{
            P[++a]=P[i];
        }
        if (a!=-1)
        {
            process=a+1;
            goto A;
        }

        printf("\t<");
        for ( i = 0; i < k; i++)
        {
            printf("P[%d]",op[i]);
              printf(">");
        }
      
        getch();
        
    }
    
    
    
}