#include <iostream>
#include <string>
#include <thread>

#include "SFML/Network.hpp"


int main()
{
	int port{ 50000 };
	/*std::cout << "enter port: ";
	std::cin >> port;*/

	sf::TcpSocket mySocket;

	while (mySocket.connect(sf::IpAddress{}.getLocalAddress(), 50000) != sf::Socket::Done)
	{
		std::cerr << "ERROR: Could not connect.\n";
	}

	std::cout << "Connected\n";

	std::string temp;
	sf::Packet myPacket;
	mySocket.receive(myPacket);
	myPacket >> temp;

	std::cout << "1.host or 2.client?\n";
	int decision;
	std::cin >> decision;

	if (decision == 1)
	{
		// create Client object
	}
}