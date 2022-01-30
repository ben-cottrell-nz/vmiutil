//
// Created by ben on 26/01/22.
//

#ifndef VMIUTIL__QCOW2FORMAT_H_
#define VMIUTIL__QCOW2FORMAT_H_

#include "ivmimageformatreader.h"

class QCOW2Format : public IVMImageFormatReader {
 public:
  bool openFile(std::string filename) override;
  bool openData(const char *data) override;
  void close() override;
 private:
  char* m_data;
};

#endif //VMIUTIL__QCOW2FORMAT_H_
