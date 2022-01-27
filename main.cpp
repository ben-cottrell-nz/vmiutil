#include <iostream>
#include "qcow2.h"
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include <emscripten/bind.h>
void web_load_vm_image_file_data(const char* data)
{

}
#endif

void load_vm_image_file(const std::string file)
{
	qcow2_open()
}

int main(int argc, char* argv[]) {
#ifndef __EMSCRIPTEN__
  if (argc == 2) {
	load_vm_image_file(argv[1]);
  }
#endif
  return 0;
}
