#include "stdafx.h"
#include "Serializer.h"


Serializer::Serializer()
{
	serializationType = "JSON";
}

void Serializer::ChangeType(std::string newType) {
	serializationType = newType;
}

template <class T>
bool Serializer::CheckCorrect(T obj)
{
	checkJson(ovj) || checkXMLJson(obj)
}

template <class T>
std::string Serializer::Serialize(T obj)
{
	return T.ToString(serializationType);
}

// ask slavi can I do this?
//template <class T>
//T Serializer::Deserialize(std::string str)
//{
//	// only deserializing non-nested objects for now
//
//	int len = str.length;
//	std::string properties[30];
//	int property = 0;
//	std::string type = "";
//	T obj;
//
//	if (serializationType == "JSON")
//	{
//		if (str[0] != "{" || str[len] != "}")
//			throw new std::invalid_argument;
//		int i = 2;
//		while (str[i] != ":")
//		{
//			type += str[i];
//			i++;
//		}
//
//		switch (type)
//		{
//		case "Client" :
//			Client obj;
//			break;
//		case "Ingredients":
//			Ingredients obj;
//			break;
//		case "Worker":
//			Worker obj;
//			brek;
//		case "Shop":
//			Shop obj;
//			break;
//		}
//
//		for (i; i < len; i++) {
//			if (str[i] != ",")
//			{
//				properties[property] += str[i];
//			}
//			else property++;
//		}
//	}
//}

Serializer::~Serializer()
{
}
