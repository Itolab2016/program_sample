//C++による時間計測のサンプルプログラム

#include <stdio.h>
#include <sys/time.h>

int main()
{
  struct timeval tval;
  unsigned long now_time;
 
  for(int i=0; i<10; i++){
    gettimeofday(&tval,NULL);
    now_time = 1000000 * tval.tv_sec + tval.tv_usec;//now_timeにマイクロ秒単位の時間が入る
    printf("%ld\n",now_time);
  }
}
