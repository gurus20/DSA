//client 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#define PORT 8080

int main(){
    printf("socket connecting...\n");
    int sock = socket(AF_INET, SOCK_STREAM,0);

    struct sockaddr_in serv_addr;
    inet_pton(AF_INET, "104.27.158.53", &serv_addr.sin_addr);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons( PORT );
    
    printf("converting ip address to binary...\n");
    inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);

    printf("connecting to server...\n");
    connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

    char msg[1024] = {0};
    char msg1[1024] = {0};
    while(1){
        printf("Bravo : ");
        gets(msg);
        send(sock,msg,strlen(msg),0);
        read(sock, msg1, 1024);
        printf("Alpha : %s\n", msg1);
    }

	return 0; 

}