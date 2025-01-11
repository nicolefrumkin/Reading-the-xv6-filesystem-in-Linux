#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Constants
#define BSIZE 512  // Block size
#define NDIRECT 12

typedef unsigned int uint;

 // describes the disk layout:
struct superblock {
    uint32_t size;         // Size of file system image (blocks)
    uint32_t nblocks;      // Number of data blocks
    uint32_t ninodes;      // Number of inodes
    uint32_t nlog;         // Number of log blocks
    uint32_t logstart;     // Block number of first log block
    uint32_t inodestart;   // Block number of first inode block
    uint32_t bmapstart;    // Block number of first free map block
};


 // On−disk inode structure
  struct dinode {
    short type;           // File type
    short major;          // Major device number (T_DEV only)
    short minor;          // Minor device number (T_DEV only)
    short nlink;          // Number of links to inode in file system
    uint size;            // Size of file (bytes)
    uint addrs[NDIRECT+1];   // Data block addresses
 };

 int main() {
    
    return 0;
}