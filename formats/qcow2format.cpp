//
// Created by ben on 26/01/22.
//

#include "qcow2format.h"
#include "kaitai/qcow2.h"
#include <iostream>
#include <vector>
#include <fstream>
void QCOW2Format::close() {

}
//return true if its valid
bool QCOW2Format::openData(const char* data) {
  std::string_view data_strv = data;
  bool stop = false, ok = true;
  kaitai::kstream ks(data_strv.data());
  //check the header
  qcow2_t qcow2_file_parsed_data = qcow2_t(&ks);
  if (!(qcow2_file_parsed_data.header()->magic() == "QFI\xfb")) {
	std::cerr << "bad header\n";
	ok = false;
	stop = true;
  }
  if (stop) { return ok; }
  return ok;
}
bool QCOW2Format::openFile(const std::string filename) {
  bool stop = false, ok = true;
  std::ifstream fs(filename);
  const int CHUNK_LEN = 1024;
  std::vector<char> buffer(CHUNK_LEN,0);
  std::streamsize num_bytes_read = 0;
  while (!fs.eof()) {
	fs.read(buffer.data()+num_bytes_read, CHUNK_LEN);
	num_bytes_read = fs.gcount();
	buffer.resize(buffer.size() + num_bytes_read, 0);
  }
  return openData(buffer.data());
}
