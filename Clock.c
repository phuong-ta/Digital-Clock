#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 

// controll clock
int runClock (int h, int m, int s){
        while (1){
        //clear output screen
        system("clear");
         
        //print time in HH : MM : SS format
        printf("%02d : %02d : %02d ",h,m,s);
         
         //clear output buffer in gcc
        fflush(stdout);
         
         //increase second
        s++;

        //update hour, minute and second
        if(s==60){
            m+=1;
            s=0;
        }
        if(m==60){
            h+=1;
            m=0;
        }
        if(h==24){
            h=0;
            m=0;
            s=0;
        }
         
        system("sleep 1"); 
    }
    return  h;
}

// run when user give not valid number
void invalidNumber(){
    printf("\tERROR!\n");
    exit(0);
}

int main(void){
    int h, m, s; // hour, minute, second
    printf("\tSet current time: \n");

    // user give hour, and check hour
    printf("Hour: \n");
    scanf("%d", &h);
    if (h>23){
        invalidNumber();
    }
    
    // user give minute, and check minute
    printf("Minute: \n");
    scanf("%d", &m);
    if (m>60){
        invalidNumber();
    }

    // user give second, and check second
    printf("Second: \n");
    scanf("%d", &s);
    if (s>60){
        invalidNumber();
    }

    runClock(h, m, s);

    return 0;
}
