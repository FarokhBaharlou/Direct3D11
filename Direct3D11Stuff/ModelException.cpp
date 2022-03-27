
#include "ModelException.h"
#include <sstream>

ModelException::ModelException(int line, const char* file, std::string note) noexcept : FarokhException(line, file), note(std::move(note)) {}

const char* ModelException::what() const noexcept
{
	std::ostringstream oss;
	oss << FarokhException::what() << std::endl << "[Note] " << GetNote();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* ModelException::GetType() const noexcept
{
	return "My Model Exception";
}

const std::string& ModelException::GetNote() const noexcept
{
	return note;
}