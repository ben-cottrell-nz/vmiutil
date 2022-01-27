//
// Created by ben on 26/01/22.
//

#ifndef VMIUTIL__IVMIMAGEFORMATREADER_H_
#define VMIUTIL__IVMIMAGEFORMATREADER_H_

class IVMImageFormatReader {
 public:
  virtual bool prepare(char *data) = 0;
  virtual bool read() = 0;
  virtual void close() = 0;
};

#endif //VMIUTIL__IVMIMAGEFORMATREADER_H_
