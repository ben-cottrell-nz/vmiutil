//
// Created by ben on 26/01/22.
//

#ifndef VMIUTIL__IVMIMAGEFORMATREADER_H_
#define VMIUTIL__IVMIMAGEFORMATREADER_H_

#include <string>
class IVMImageFormatReader {
 public:
  ~IVMImageFormatReader() {}
  virtual bool openFile(const std::string filename) = 0;
  virtual bool openData(const char *data) = 0;
  virtual void close() = 0;
};

#endif //VMIUTIL__IVMIMAGEFORMATREADER_H_
