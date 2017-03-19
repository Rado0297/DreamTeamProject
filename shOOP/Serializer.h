#pragma once
class Serializer
{
	// JSON, XML, other
	std::string serializationType;
public:
	Serializer();

	void ChangeType(std::string newType);

	template <class T>
	bool CheckCorrect(T obj);

	template <class T>
	std::string Serialize(T obj);

	template <class T>
	T Deserialize(std::string str);

	~Serializer();
};

