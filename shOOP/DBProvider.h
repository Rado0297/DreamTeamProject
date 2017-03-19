#pragma once
class DBProvider
{
	std::string path;
	std::string username;
	std::string password;
public:
	DBProvider();
	DBProvider(std::string path, std::string username, std::string password);

	// check if there is such DB(file), match username+password
	bool IsConnected();

	// read file from DB by ID
	std::string Find(int id);

	std::string FindBy(std::string key, std::string value);

	// write file to DB
	std::string Write(std::string serialized);
	~DBProvider();
};

