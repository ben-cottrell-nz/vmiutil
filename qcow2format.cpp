//
// Created by ben on 26/01/22.
//

#include "qcow2format.h"
#include "kaitai-generated/qcow2.h"
bool QCOW2Format::read() {
  	return true;
}
void QCOW2Format::close() {

}
bool QCOW2Format::prepare(char *data) {
	m_data = data;
	//check the header
	char hdr[104];
	return true;
}
