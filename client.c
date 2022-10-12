#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char **argv){
struct sockaddr_in server_i = {0};
server_i.sin_family = AF_INET;
server_info.sin_addr.s_addr = htonl(0x7f000001);
server_i.sin_port = htons(1337);
socklen_t server_info_len = sizeof(server_info);

int newsocket = socket(AF_INET, SOCKET_STREAM, 0);
if(newsocket < 0){
    printf("socket failed");
    return -1;
}

int connect = connect(sft, (struct sockaddr*)&server_info, server_info_len)
if(connect < 0){
    printf("connect failed");
    return -1;
}

char buff[2048];

ssize_t recive = recv(newsocket, buff, 2048-1, 0);
printf("%2048s\n", buffer);

close(newsocket);

return 0;










}