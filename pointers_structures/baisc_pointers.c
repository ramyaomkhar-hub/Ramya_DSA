#include<stdio.h>

int main(){
    int var = 10; // nomral varaible 
    printf("Address of var %d , value %d\n",&var,var);
    // pointer typecase 
    int* ptr = &var;
    printf("Var , pointer address %d\n, value of the var from ptr %d ",ptr,*ptr); // ptr value and var address are same now , value isn side the prt is *ptr = var = 10
    printf("value Var increase in pre , with ptr %d \n",++*ptr); // pre increase with pointer 
    printf("Var value access : %d\n",var); // now the value increase to 11 by previous statement by ++*ptr ; if you access the value directly by var you see 11 
    printf("value Var decrease in post ,  with ptr %d \n",(*ptr)--); // post decrease -> value printed first then reduced 1 stored the meomery ; print same value as before 11 
    printf("Var value access : %d\n",var); // pointer reduced the value in the post process ; now var in the memory is 10 
    /*
     we can define the different type casting for the pointer 
     but the value size is the same 
     int* ptr1;
     char* ptr2;
     if you calculate the value of the pointer is same but \
     if your directly print the addree you see dirrent size depending on the type casting 
    */
    int* ptr1;
    int* ptr2;
    /*
    ptr1 value  1 : value size of ptr1 4 : size of prt1 8 
    ptr2 value  -98693133 : value size of ptr2 4 : size of prt2 8 
    default value of the pointer location could be random , but the pointe value size is 4 bytes ; pointer size is 8 bytes /
    since pointer holds the address it is 8 bytes 
    */
    printf("ptr1 value  %d : value size of ptr1 %d : size of prt1 %d \n",*ptr1,sizeof(*ptr1),sizeof(ptr1));
    printf("ptr2 value  %d : value size of ptr2 %d : size of prt2 %d \n",*ptr2,sizeof(*ptr2),sizeof(ptr2));
    int* ptr3 ; // null pointers are the special pointers they pointes to none 
    printf("ptr3 value  %d : value size of ptr3 %d : size of prt3 %d \n",*ptr3,sizeof(*ptr3),sizeof(ptr3));
    ptr3 = NULL; // null pointer used to release the memory 
    printf("ptr3 value  %d : value size of ptr3 %d : size of prt3 %d \n",*ptr3,sizeof(*ptr3),sizeof(ptr3));

    printf("\n");
    return 0;
}