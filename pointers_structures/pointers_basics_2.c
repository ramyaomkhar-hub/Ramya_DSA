#include<stdio.h>

int main(char *args,char *kwargs[]){
    /*
        varaible pointrs ;
        & : used for fetching the address of the varaible ;
        *ptr : value inside the address in the ptr 
        int var = 10;
        int* ptr = &var;
        printf("Var Adress %d and the var value %d",&var,var);
        int var = 10;
        int* ptr = &var;
        printf("Var Adress %d and the var value %d",&var,var);
        */
   int var = 10;
   int* ptr = &var;
   if (*ptr == var)
   {
    printf("Success!!!!!!!!!!\n");
    /* code */
   }
   
   printf("Var Adress %X and the var value %d\n",&var,var);
   printf("Address of the ptr: %X, ptr value %X,\n, value inside the address stored in ptr %d\n",&ptr,ptr,*ptr);
   /*
   post and pre increment/decrement 
   ++*ptr -> 10 +1 -> print directly 11 
      
   */
   printf(".............. pre and post incremens with pointer .........\n");
   printf("post increment with *ptr: %d\n",(*ptr)++); // first it will fetch the value in the *ptr and then increment 1 , store inside *ptr
   printf("pre increment ith *ptr : %d\n",++(*ptr)); // increment the value of the *ptr+1 -> return that value for print -> 11
   printf("value of Var after pre increment : %d\n",var); // *ptr == var they are same ; what ever the changes that you do for the var replicate @ *ptr or vice versa 
   printf("post decrease with *ptr: %d\n",(*ptr)--); // first it will fetch the value in the *ptr and then increment 1 , store inside *ptr
   printf("pre decrease ith *ptr : %d\n",--(*ptr)); // increment the value of the *ptr+1 -> return that value for print -> 11
   printf("value of Var after pre decrement : %d\n",var); // *ptr == var they are same ; what ever the changes that you do for the var replicate @ *ptr or vice versa 
   /*
   data types in the pointers:
   int var = 10;
   int* ptr = &var;
   what is the type of var ? -> int -> sizeof(var) }-> 4bytes;
   what is the size of (*ptr) ?-> *ptr == var type of intr -> if *ptr == var then sizeof(var) == sizeof(*ptr) == type of var -> int sizeof(int) |} 4bytes
   what is the sizeof (ptr)? sizeof the ptr is same as sizeof (&var)
   */
  printf("size of var : %d, size of *ptr %d\n",sizeof(var),sizeof(*ptr));
  printf("size of ptr != size of var, but sizeof(ptr) == sizeof(&var) %d\n, but the ptr == &var : %d\n",sizeof(ptr),sizeof(&var));
  printf("what is the size of &ptr ? defined by os: %d\n",sizeof(&ptr));

   printf("\n");
   return 0;
    
}