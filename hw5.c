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
    uint32_t size;         // The total size of the filesystem image in blocks. A block is a fixed-size unit of storage (e.g., 512 bytes or 4 KB).
    uint32_t nblocks;      // The number of data blocks available in the filesystem. These blocks store the actual file content.
    uint32_t ninodes;      // The number of inodes in the filesystem. Each inode stores metadata about a file or directory, such as its size, type, and location on disk.
    uint32_t nlog;         // The number of log blocks. Log blocks are used to ensure filesystem consistency, typically for journaling or crash recovery.
    uint32_t logstart;     // The block number where the log section starts. This is the location of the first log block.
    uint32_t inodestart;   // The block number where the inode table begins. The inode table contains metadata for all the files in the filesystem.
    uint32_t bmapstart;    // The block number where the bitmap starts. The bitmap tracks which blocks in the filesystem are free and which are used.
};


 // On−disk inode structure
  struct dinode {
    short type;           // File type - 0 unused, 1 directory, 2 regular file, 3 special device file
    short major;          // Major device number (T_DEV only)
    short minor;          // Minor device number (T_DEV only)
    short nlink;          // The number of links to the inode. Links are references to the file or directory from other locations in the filesystem (e.g., hard links).
    uint size;            // Size of file (bytes)
    uint addrs[NDIRECT+1];   // Data block addresses (NDIRECT - Direct block addresses that point to blocks storing the file’s data, 1 - indirect block address, which points to a block that contains additional block addresses when the file is too large to fit in the direct blocks.)
 };

 int main() {
    
    return 0;
}