// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "qcow2.h"
#include "kaitai/exceptions.h"

qcow2_t::qcow2_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, qcow2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_header = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void qcow2_t::_read() {
    m_header = new header_t(m__io, this, m__root);
}

qcow2_t::~qcow2_t() {
    _clean_up();
}

void qcow2_t::_clean_up() {
    if (m_header) {
        delete m_header; m_header = 0;
    }
}

qcow2_t::header_t::header_t(kaitai::kstream* p__io, qcow2_t* p__parent, qcow2_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void qcow2_t::header_t::_read() {
    m_magic = m__io->read_bytes(4);
    if (!(magic() == std::string("\x51\x46\x49\xFB", 4))) {
        throw kaitai::validation_not_equal_error<std::string>(std::string("\x51\x46\x49\xFB", 4), magic(), _io(), std::string("/types/header/seq/0"));
    }
    m_version = m__io->read_bytes(4);
    m_backing_file_offset = m__io->read_u8be();
    m_backing_file_size = m__io->read_u4be();
    m_cluster_bits = m__io->read_bytes(4);
    m_size = m__io->read_u8be();
    m_crypt_method = m__io->read_u4be();
    m_l1_size = m__io->read_u4be();
    m_l1_table_offset = m__io->read_u8be();
    m_refcount_table_offset = m__io->read_u8be();
    m_refcount_table_clusters = m__io->read_u8be();
    m_nb_snapshots = m__io->read_u4be();
    m_snapshots_offset = m__io->read_u8be();
}

qcow2_t::header_t::~header_t() {
    _clean_up();
}

void qcow2_t::header_t::_clean_up() {
}
