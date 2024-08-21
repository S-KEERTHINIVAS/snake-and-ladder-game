#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<math.h>

int main()
{
    srand(time(0));
    
   int a=0,b=0;
   for(int i=1;1;i++)
   {
       while(1)
       {
            int m = floor(rand() % 6) + 1;
            
                if(i%2!=0)
                {
                    a=a+m;
                    printf("THE POSITION OF A:%d\n",a);
                    if(a==5)
                    {
                        a+=53;
                    }else if(a==14){
                        a+=35;
                    }else if(a==38){
                        a-=18;
                    }else if(a==51){
                        a-=41;
                    }else if(a==53){
                        a+=19;
                    }else if(a==64){
                        a+=19;
                    }else if(a==76){
                        a-=22;
                    }else if(a==91){
                        a-=18;
                    }else if(a==97){
                        a-=36;
                    }else{
                        break;
                    }
                }else{
                    b=b+m;
                    printf("THE POSITION OF B:%d\n",b);
                    if(b==5)
                    {
                        b+=53;
                    }else if(b==14){
                        b+=35;
                    }else if(b==38){
                        b-=18;
                    }else if(b==51){
                        b-=41;
                    }else if(b==53){
                        b+=19;
                    }else if(b==64){
                        b+=19;
                    }else if(b==76){
                        b-=22;
                    }else if(b==91){
                        b-=18;
                    }else if(b==97){
                        b-=36;
                    }else{
                        break;
                    }
                }
        }
        
        if(a >=100){
            printf("A CAN WIN THE MATCH.THE POINT IS %d",a);
            break;
        }else if(b >=100){
            printf("B CAN WIN THE MATCH.THE POINT IS %d",b);
            break;
        }else{
            continue;
        }
        
    }
}
