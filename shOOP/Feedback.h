#ifndef FEEDBACK_HPP
#define FEEDBACK_HPP

#pragma once

class Feedback
{
public:
	//constructor
	Feedback(std::string content, int rating);

	//method
	void submit();

	//destructor
	~Feedback();

private:
	std::string content;
	_int8 rating; //from 0 to 10
};

#endif // !FEEDBACK_HPP