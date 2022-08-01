#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

#define PORT 8080

int main() {
    struct sockaddr_in address;
    int server_fd, adderlen = sizeof(address);

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    bind(server_fd, (struct sockaddr*)&address, sizeof(address));

    listen(server_fd, 3);
    
    int new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&adderlen);

    char buffer[1024] = { 0 };
	char* hello = "Hello from server";

    read(new_socket, buffer, 1024);
	printf("%s\n", buffer);
	send(new_socket, hello, strlen(hello), 0);
	printf("Hello message sent\n");
	
    // closing the connected socket
	close(new_socket);
    // closing the listening socket
	shutdown(server_fd, SHUT_RDWR);


    return 0;
}