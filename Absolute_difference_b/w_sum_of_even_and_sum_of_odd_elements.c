#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,f,s1=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]%2!=0)
        {
            s=s+arr[i];
        }
    
    
        else
        {
            s1=s1+arr[i];
        }
    }
   
    
    printf("%d",abs(s-s1));
    
    
}