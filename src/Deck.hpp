#pragma once
#include <vector>
#include <array>
#include "Card.hpp"


class Host;
class Client;

class Deck
{
private:

	Host* host{ nullptr };
	Client* client{ nullptr };

	std::array<unsigned short, 1000> number_list{};

public:

	std::vector<Card> m_deck;

	Card m_temp;
public:

	Deck();
	
	void set_online_status(bool is_host,  Host* host = nullptr, Client* client = nullptr);

	Card& dealCard();
	Card& dealCard(const sf::Vector2f &vector, std::vector<Card>& cardStack);
	void shuffleDeck();

	unsigned int getSize() const;

	Card& getLastCard();

	static int getRandomNumber(unsigned int min, unsigned int max);
	static void swapCard(Card &a, Card &b);

	void shuffleStack(std::vector<Card> &cardStack);

	Card& operator[](int index);
};

