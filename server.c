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
server_i.sin_port = htons(1337);
socklen_t server_info_len = sizeof(server_info);
struct sockaddr client_info = {0};
socklen_t client_info_len = sizeof(client_info);
int newsocket = socket(AF_INET, SOCKET_STREAM, 0);

if(newsocket < 0){
    printf("socket failed");
    return -1;
}

int newbind = bind(newsocket, (struct sockaddr*)&server_info, server_info_len)
if(newbind < 0){
    prtinf("bind failed");
    return -1;

}

int newlisten = listen(newsocket, 2);
if(newlisten < 0){
    printf("listen failed");
    return -1;
}

int client = accept(newsocket, &client_info, &client_info_len);
if(client < 0){
    printf("accept error");
    return -1;
}

char *messege = "Hey\n";
ssize_t sendinfo = send(newsocket, (void *)messege, strlen(messege), 0);

close(newsocket);











}