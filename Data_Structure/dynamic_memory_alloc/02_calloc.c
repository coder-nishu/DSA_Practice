# include<stdio.h> 
# include<stdlib.h> 

int main(){
     int *ptr,n;
     printf("how many float u want:");
     scanf("%d",&n);

     ptr = (float *) calloc(n,sizeof(float));
     for (int i = 0; i < n; i++)
     {
        printf("%f \n",ptr[i]);
     }
     
     return 0;
}