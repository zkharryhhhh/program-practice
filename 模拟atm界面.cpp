#include<stdio.h>
#include<stdlib.h>

int main(){
	char Key,CMoney;
	int password,password1=123,i=1,a=1000;
	
	while(1){
		do{
			system("cls");
			printf("****************************\n");
			printf("**  Please select key:     *\n");
			printf("**  1.password             *\n");
			printf("**  2.get money            *\n");
			printf("**  3.Return               *\n");
			printf("****************************\n");
			Key=getchar(); 
		}while(Key!='1'&&Key!='2'&&Key!='3');
		switch(Key)
		{
			case'1':
				system("cls");
				do{
					i++;
					printf(" please input password   ");
					scanf("%d",&password);
					/*
					if(password1!=password){
						if(i>3){
							printf("Wrong! Press any key to exit...");
							getchar();
							exit(0);
							
						}
						else 
						    puts("wrong,try again");
					} 
					*/
				}while(password1!=password&&i<=3);
				//printf("OK!Press any key to continue...");
				
				
			case'2':
			    break;
	    }
		break;
	}
	
}


