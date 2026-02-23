from socket import *
server_port = 12000
serverSocket = socket(AF_INET, SOCK_DGRAM)
serverSocket.bind(('', server_port))
print("The server is ready to receive")
while 1:
    message, clientAddress = serverSocket.recvfrom(2048)
    modifiedMessage = "Hello Said"
    serverSocket.sendto(modifiedMessage.encode(), clientAddress)
