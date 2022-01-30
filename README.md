# vmiutil
A utility for reading virtual machine disk files, such as QCOW2 and other formats to come.
This deliverables of this project consist of a program and a WebAssembly binary.

## Rationale
I intend to abstract away the details of image formats and filesystems mkaing it possible
to access files and their basic metadata. As opposed to the guestfish tool, which is built on
libguestfs, I would like to be able to access the data, as described previously, without having to run a
virtual machine.
## License
MIT
## Authors
Ben Cottrell