#pragma once

#include <fcntl.h>
#include <thread>
#include <sys/socket.h>
#include <iostream>

void accepter(const int & serverSocket, int & acceptedSocket, bool & newClientAccepted, const bool & turnOff);