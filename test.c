#include <stdio.h>

#define PASTE_ARGS1(a, b) a ## b
#define PASTE_ARGS2(a, b) #a":"a 
#define PRINT_ARG(a,data_type)  printf(#a": %"#data_type"\n",a)
#define PRINT_ARG_NAME(name_type, a)  printf(#name_type ": " #a); \
	                        printf("\n")

#define PRINT_ARG_NAME2(type, a)  printf(#type": "#a); \
	                        printf("\n")

 #define PRINT_ARG_DESC_AND_VALUE_INT(name, value)  int _temp##value__ = value; \
		                                    printf(#name ": %d", _temp##value__); \
				                    printf("\n")
#define TWELVE 2*(3)*(2)
int main() {
	//printf("%s", PASTE_ARGS(hello,  world\n));
	int i=2;
	int j=3;
	//PASTE_ARGS1(2, 3);
	// works PRINT_ARG(i, d);
	//PRINT_ARG_NAME(tensor_value, i);
	printf("%d\n", 3*3);
        PRINT_ARG_DESC_AND_VALUE_INT(integer, TWELVE);
}
