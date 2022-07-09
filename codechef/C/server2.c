#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define PORT 8080

int main(){
    printf("socket connecting...\n");
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(server_fd == 0){
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
    
    struct sockaddr_in address;
    printf("configuring ip and port...\n");
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr("127.0.0.1");
    address.sin_port = htons( PORT );

    int addrlen = sizeof(address);

    printf("binding...\n");
    bind(server_fd, (struct sockaddr *)&address, addrlen);
    
    printf("Listening...\n");
    listen(server_fd,3);

    printf("accepting connection request...\n");
    int new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);

    printf("receiving message...\n");
    char str[1024] = {0};
    read(new_socket, str, 1024);
    printf("%s\n",str);

    return 0;
}