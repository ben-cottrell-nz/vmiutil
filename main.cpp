#include <iostream>
#include "formats/qcow2format.h"
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include <emscripten/bind.h>
void web_load_vm_image_file_data(const char* data)
{

}
#endif

void load_file_qcow2(const std::string& file_path)
{
	QCOW2Format format;
	format.openFile(file_path);
}
#ifdef __EMSCRIPTEN__
void load_data_qcow2(const char* data)
{

}

EMSCRIPTEN_BINDINGS(my_module) {
  function("load_vm_image_file", &load_vm_image_file)
}
#endif
int main(int argc, char* argv[]) {
#ifndef __EMSCRIPTEN__
  if (argc == 2) {
	load_file_qcow2(argv[1]);
  }
#endif
  return 0;
}
