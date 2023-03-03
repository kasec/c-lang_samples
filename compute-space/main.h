#include <stdio.h>
int main(void)
{
	char type;
	int num, length, i;
	int total = 0;

	scanf("%d", &num);
	

	for(i = 0; i < num; i++){
	    
        scanf("%d %c", &length, &type);

        if(type == 'i'){       
                total += length*sizeof(int);
        }
        else if(type == 'd'){
            total += length*sizeof(double);
        }
        else if(type == 'c'){
            total += length*sizeof(char);
        }
        else{
            printf("Invalid tracking code type");
            return 0;
        }
	}
	
	printf("%d bytes", total);
	
	return 0;
}
