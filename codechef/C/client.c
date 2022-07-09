// Client side C/C++ program to demonstrate Socket programming 
#include <stdio.h> 
#include <sys/socket.h> 
#include <unistd.h> 
#include <string.h> 
#include <arpa/inet.h> 
#define PORT 8080 

int main() 
{ 
	int sock = socket(AF_INET, SOCK_STREAM, 0); 
	printf("socket : %d\n",sock);
	if ((sock) < 0) 
	{ 
		printf("\n Socket creation error \n"); 
		return -1; 
	} 

	struct sockaddr_in serv_addr; 
	serv_addr.sin_family = AF_INET; 
	serv_addr.sin_port = htons(PORT); 
	
	// Convert IPv4 and IPv6 addresses from text to binary form 
	if(inet_pton(AF_INET, "72.21.91.42", &serv_addr.sin_addr)<=0) 
	{ 
		printf("\nInvalid address/ Address not supported \n"); 
		return -1; 
	} 
	printf("All works well\n");
	if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
	{ 
		printf("\nConnection Failed \n"); 
		return -1; 
	} 

	int num1, num2, sum;
	printf("enter num1\n");
	scanf("%d",&num1);
	printf("enter num2\n");
	scanf("%d",&num2);
	send(sock, &num1, sizeof(int),0);
	send(sock, &num2, sizeof(int),0);
	printf("All works well\n");

	read(sock, &sum, 1024);
	printf("Sum is : %d\n",sum);
	return 0; 
} 
