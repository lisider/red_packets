#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define min(x,y) ({ \
        typeof(x) _x = (x); \
        typeof(y) _y = (y); \
        (void) (&_x == &_y);  \
        _x < _y ? _x : _y; })
#define max(x,y) ({ \
        typeof(x) _x = (x); \
        typeof(y) _y = (y); \
        (void) (&_x == &_y); \
        _x > _y ? _x : _y; })

void redPackets(double total, int num, double min, double max){
    int i = 1;
    double remain = total;
    double current_packet = 0;
    int random_num = 0;

    srand((unsigned)time(NULL));  

    printf("\n\n");
    for(i = 1;i<=num;i++){
        getchar();

        if(i == num){
            current_packet = remain;

        }else{
            random_num = rand();
            printf("random_num : %d\n",random_num);
            current_packet = (random_num%100)/100.0 * min(remain,max);  //由  random_num remain max nin  num-i 决定

            if(current_packet > max)
                current_packet = max;
            if(current_packet < min)
                current_packet = min;
        }

        remain -= current_packet;

        printf("the %d person get %lf, remain %d person ,remain %lf money\n",i,current_packet,num - i, remain);

    }
    printf("\n\n");
}


