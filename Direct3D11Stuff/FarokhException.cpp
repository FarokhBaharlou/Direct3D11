
#include "FarokhException.h"
#include <sstream>

FarokhException::FarokhException(int line, const char* file) noexcept : line{line}, file{file}
{
}

const char* FarokhException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl << GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* FarokhException::GetType() const noexcept
{
	return "My Exception";
}

int FarokhException::GetLine() const noexcept
{
	return line;
}

const std::string& FarokhException::GetFile() const noexcept
{
	return file;
}

std::string FarokhException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File]" << file << std::endl << "[Line]" << line;
	return oss.str();
}

