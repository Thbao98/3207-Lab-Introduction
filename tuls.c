#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char **argv){
  struct dirent **namelist;
  int n;
  
  n = scandir(".", &namelist, NULL, alphasort);
  if(n == -1){
    perror("scandir");
    exit(EXIT_FAILURE);
  }
  while(n--){
    printf("%s\n", namelist[n] -> d_name);
    free(namelist[n]);
  }
  free(namelist);
  exit(EXIT_SUCCESS);
}
