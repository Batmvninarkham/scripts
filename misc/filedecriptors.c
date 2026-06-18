#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
  
int fd = open ("./ps1",O_RDONLY  );
int count = 80;
char buf[count+1];
    size_t bytes= read (fd,&buf,count);
    printf("%s", buf);
    if(bytes <= 0)return 1;
return 0;
}
