#include <stdio.h>
#include <time.h>

int main(){
    printf("Hello World\n");
    fprintf(stdout, "%lu\n", (unsigned long)time(NULL));
    fprintf(stdout, "%u\n", (unsigned)time(NULL));
    time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
return 0;
}
