#include <stdio.h>

int main() {
	// your code goes here
    int t,dsa1,dsa2,toc1,toc2,dm1,dm2, total1, total2;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d",&dsa1,&toc1,&dm1);
        scanf("%d%d%d",&dsa2,&toc2,&dm2);
        
        total1 = dsa1+toc1+dm1;
        total2 = dsa2+toc2+dm2;
        
        if(total1 == total2){
            if(dsa1!=dsa2){
                if(dsa1>dsa2){
                printf("DRAGON\n");
                }
                else{
                    printf("SLOTH\n");
                }
            }
            else if( toc1 != toc2){
                if(toc1>toc2){
                   printf("DRAGON\n");
                }
                else{
                    printf("SLOTH\n");
                }
            }
            else if(dm1 != dm2){
                if(dm1>dm2){
                    printf("DRAGON\n");
                }
                else{
                    printf("SLOTH\n");
                }
            }
            else{
                printf("TIE\n");
            }
            
        }
        else if(total1 >total2){
            printf("DRAGON\n");
        }
        else{
            printf("SLOTH\n");
        }
    }
}
