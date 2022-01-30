#ifndef QCOW2_H_
#define QCOW2_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class qcow2_t : public kaitai::kstruct {

public:
    class header_t;

    qcow2_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, qcow2_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~qcow2_t();

    class header_t : public kaitai::kstruct {

    public:

        header_t(kaitai::kstream* p__io, qcow2_t* p__parent = 0, qcow2_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~header_t();

    private:
        std::string m_magic;
        uint32_t m_version;
        uint64_t m_backing_file_offset;
        uint32_t m_backing_file_size;
        std::string m_cluster_bits;
        uint64_t m_size;
        uint32_t m_crypt_method;
        uint32_t m_l1_size;
        uint64_t m_l1_table_offset;
        uint64_t m_refcount_table_offset;
        uint64_t m_refcount_table_clusters;
        uint32_t m_nb_snapshots;
        uint64_t m_snapshots_offset;
        qcow2_t* m__root;
        qcow2_t* m__parent;

    public:
        std::string magic() const { return m_magic; }
        uint32_t version() const { return m_version; }

        /**
         * Offset into the image file at which the backing file name
         * is stored (NB: The string is not null terminated). 0 if the
         * image doesn't have a backing file.
         * 
         * Note: backing files are incompatible with raw external data
         * files (auto-clear feature bit 1).
         */
        uint64_t backing_file_offset() const { return m_backing_file_offset; }

        /**
         * Length of the backing file name in bytes. Must not be
         * longer than 1023 bytes. Undefined if the image doesn't have
         * a backing file.
         */
        uint32_t backing_file_size() const { return m_backing_file_size; }

        /**
         * Number of bits that are used for addressing an offset
         * within a cluster (1 << cluster_bits is the cluster size).
         * Must not be less than 9 (i.e. 512 byte clusters).
         * 
         * Note: qemu as of today has an implementation limit of 2 MB
         * as the maximum cluster size and won't be able to open images
         * with larger cluster sizes.
         * 
         * Note: if the image has Extended L2 Entries then cluster_bits
         * must be at least 14 (i.e. 16384 byte clusters).
         */
        std::string cluster_bits() const { return m_cluster_bits; }

        /**
         * Virtual disk size in bytes.
         * 
         * Note: qemu has an implementation limit of 32 MB as
         * the maximum L1 table size.  With a 2 MB cluster
         * size, it is unable to populate a virtual cluster
         * beyond 2 EB (61 bits); with a 512 byte cluster
         * size, it is unable to populate a virtual size
         * larger than 128 GB (37 bits).  Meanwhile, L1/L2
         * table layouts limit an image to no more than 64 PB
         * (56 bits) of populated clusters, and an image may
         * hit other limits first (such as a file system's
         * maximum size).
         */
        uint64_t size() const { return m_size; }

        /**
         * crypt_method
         * 0 for no encryption
         * 1 for AES encryption
         * 2 for LUKS encryption
         */
        uint32_t crypt_method() const { return m_crypt_method; }

        /**
         * Number of entries in the active L1 table
         */
        uint32_t l1_size() const { return m_l1_size; }

        /**
         * Offset into the image file at which the active L1 table
         *           starts. Must be aligned to a cluster boundary.
         */
        uint64_t l1_table_offset() const { return m_l1_table_offset; }

        /**
         * Offset into the image file at which the refcount table
         *           starts. Must be aligned to a cluster boundary.
         */
        uint64_t refcount_table_offset() const { return m_refcount_table_offset; }

        /**
         * Number of clusters that the refcount table occupies
         */
        uint64_t refcount_table_clusters() const { return m_refcount_table_clusters; }

        /**
         * Number of snapshots contained in the image
         */
        uint32_t nb_snapshots() const { return m_nb_snapshots; }

        /**
         * Offset into the image file at which the snapshot table
         * starts. Must be aligned to a cluster boundary.
         */
        uint64_t snapshots_offset() const { return m_snapshots_offset; }
        qcow2_t* _root() const { return m__root; }
        qcow2_t* _parent() const { return m__parent; }
    };

private:
    header_t* m_header;
    qcow2_t* m__root;
    kaitai::kstruct* m__parent;

public:
    header_t* header() const { return m_header; }
    qcow2_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // QCOW2_H_
