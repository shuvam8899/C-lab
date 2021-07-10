#include<stdio.h>
#include<stdlib.h>
//Base Function for all of the activities
int printArray(int *array, int size){
    int count;
    for(count=0;count<size;++count){
        printf("\narray[%d] = %d", count, *( array + count ));
    }
    return(count + 1);
}
        //FUNCTION TO INSERT AN ELEMENT
int insertion(int*list, int size, int index, int element){
    int newSizeOfList,count;
    list=realloc(list,((size+1)*sizeof(int))); 
    for(count=size;count>=index;count--)
        list[count+1] = list[count];
    list[index] = element; 
    newSizeOfList = ++size; 
    return newSizeOfList;
}
        //FUNCTION TO DELETE AN ELEMENT
int deletion(int*list, int size, int index){
    int newSizeOfList,count;
    for(count=index ;count < size-1; count++)
        list[count] = list[count+1];
    newSizeOfList = --size;
    return newSizeOfList;
}
        //FUNCTION FOR SEARCHING FOR AN ELEMENT 
int linearSearch(int*list, int size, int element){
    int newSizeOfList,count;
    for(count=0 ;count < size; count++){
        if(list[count]==element){
            printf("\n%d is present at index %d.\n", element, count);
            return count;
        }
    }
    return -1;
}
        //MAIN FUNCTION BEGINS
int main()
{
    int *ArrayA;
    int count, sizeOfArray, element, index, searchElement;
    printf("How many numbers?\n");
    scanf(" %d", &sizeOfArray);
    ArrayA = (int*)malloc(sizeof(int)); 
    for (count = 0; count < sizeOfArray; ++count) {
      printf("\nEnter ArrayA[%d]\n", count);
      scanf(" %d", (ArrayA+count));
 }
 for (count = 0; count < sizeOfArray; ++count) {
      printf("\nlistA[%d] = %d\n", count, *(ArrayA+count));
 }
    printf("\nEnter the index where you want to insert the element and Please enter a valid integer for index:\n");
    scanf("%d",&index); 

    printf("\nEnter the element to be inserted :\n");
    scanf("%d",&element);
    sizeOfArray = insertion(ArrayA, sizeOfArray, index, element);
    printArray(ArrayA, sizeOfArray);
    printf("\n\nElement inserted successfully\n");

    printf("\nEnter the index of the element to be deleted and Please enter a valid integer for index:\n");
    scanf("%d",&index);

    sizeOfArray = deletion(ArrayA, sizeOfArray,index);
    printArray(ArrayA, sizeOfArray);
    printf("\n\nElement deleted successfully\n\n");

    printf("\nEnter the element to be searched and Please enter a valid integer for the element\n");
    scanf("%d",&element);

    searchElement = linearSearch(ArrayA, sizeOfArray, element);
    free(ArrayA);
    printf("\nMemory freed.\n");
    return 0;
}
