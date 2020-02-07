#include <stdio.h>
#include <math.h>

int main(){
int Test;
int Numb;
float Height;
float Life;
float Duck_Y1;
float Jump_Y2;
int N;
int counter=0;

int t;
int X;
scanf("%d",&Test);
int result[Test];

for (t= 0;t<Test;t++){ 
counter=0;
scanf("%d %f %f %f %f",&Numb,&Height,&Duck_Y1,&Jump_Y2,&Life);
int type[Numb];
for (N= 0;N<Numb;N++){
scanf("%d %d",&type[N],&X);
	counter++;
	result[t]=counter;
	if(type[N]==1){	
		
		if(Height-Duck_Y1>X){
			Life--;
			if(Life==0){
				result[t]=counter-1;
				break;
				//trial
	
			}
	
		}
		
	}
	else if(type[N]==2){
		
		if(Jump_Y2<X){
			Life--;
			if(Life==0){
				result[t]=counter-1;
				break;
			}
		}
	}

}

}
for(int i=0;i<Test;i++){
	printf("%d\n",result[i]);
}	
return 0;
}

