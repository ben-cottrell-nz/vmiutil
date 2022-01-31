//
// Created by ben on 31/01/22.
//

#ifndef VMIUTIL__MEMORY_STREAM_WRAPPER_H_
#define VMIUTIL__MEMORY_STREAM_WRAPPER_H_

//https://stackoverflow.com/a/13059195
#include <streambuf>
#include <istream>

struct membuf: std::streambuf {
  membuf(char const* base, size_t size) {
	char* p(const_cast<char*>(base));
	this->setg(p, p, p + size);
  }
};
struct imemstream: virtual membuf, std::istream {
  imemstream(char const* base, size_t size)
	  : membuf(base, size)
	  , std::istream(static_cast<std::streambuf*>(this)) {
  }
};

#endif //VMIUTIL__MEMORY_STREAM_WRAPPER_H_
