#include <stdio.h>
int main(){
    int arr[50];
    int max, max_index, i;
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    for( i=0 ; i<n ; i++){
        printf("Enter value %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    max_index=0;
    for(i=1;i<n;i++)
	{
        if(max<arr[i]){
            max = arr[i];
            max_index=i;
        }
	}
    printf("The maximum value is %d\n",max);
    printf("The index of max is %d\n",max_index);
    return 0;
}
