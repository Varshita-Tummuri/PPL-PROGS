#include <stdio.h>

int main() {
    int i,n,largest,secondlargest;
    int arr[10];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    secondlargest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    printf("\nThe Largest Element is %d",largest);
    printf("\nThe Second Largest Element is %d",secondlargest);
    return 0;
}
