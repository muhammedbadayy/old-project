#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int asaldenetim(int);
int randomuret();
int sirala(int []);

int main()
{
	int asdenet;
	int pul1,pul2,pul3,toplam,denet,i; 
	int denetim[100]; 
	for(i=0;i<100;i++)
	{
		denetim[i]=0;
	}
	char name;
	srand(time(NULL));
	printf("bir tusa basiniz...\n");
		getchar();
	do {
		name='q';
		int	diz[3];
		tekrar1:
		pul1=diz[0]=randomuret();
		if(denetim[pul1]==1)	goto tekrar1;
		else denetim[pul1]=1;	
		tekrar2:
		pul2=diz[1]=randomuret();
		if(denetim[pul2]==1)	goto tekrar2;
		else denetim[pul2]=1;
		tekrar3:	
		pul3=diz[2]=randomuret();
		if(denetim[pul3]==1)	goto tekrar3;
		else denetim[pul3]=1;	
	
		printf("pul1: %d\n",pul1);
		printf("pul2: %d\n",pul2);
		printf("pul3: %d\n",pul3);
		toplam=pul1+pul2+pul3;
		asdenet=asaldenetim(toplam);
		denet=sirala(diz);
		
		if(toplam<150){
			printf("1.Kural ile kazandiniz\n");
		}
		else if(asdenet==1)
		{
			printf("2.kural ile kazandiniz\n");
		}
		else if(denet==1)
		{
			printf("3.kural ile kazandiniz\n");
		}
		
		else printf("kaybettiniz");
		
		printf("Devam etmek icin e'ye bas\n");
		name=getch();
		
      
   }while(name=='e'||name=='E');
	
}
int asaldenetim(int toplam)
{
	int asdenet=1;
	int i;
	for(i=2;i<toplam;i++)
	{
		if(toplam%i==0) 
		{
			asdenet=0;
			
			
		}
	}
	return asdenet;
}
int randomuret()
{
	
	return rand()%99+1;
}
int sirala(int diz[])
{
	int i, j;
	int temp,denetim;
	denetim=0;
 
     for (i=1; i<3; i++)
     {
         for (j=0; j<3-i; j++)
         {
             if(diz[j] > diz[j+1])
             {
                        temp = diz [j];
                        diz [j] = diz [j+1];
                        diz [j+1] = temp;
             }
         }
     }
     if((diz[2]-diz[0])>diz[1])
	 {
     	denetim=1;
	 }
	 
	  return denetim;
	 	
}

