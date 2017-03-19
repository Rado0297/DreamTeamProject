#pragma once
class History
{
	int id;
	int prevId;
	int sellerId;
	int buyerId;
	std::string provider;
public:
	History();
	History(int id, int prevId, int sellerId, int buyerId, std::string provider);
	History(std::string serialized);

	std::string GetInfo();
	std::string GetInfo(std::string key);

	std::string Serialize();

	~History();
};

