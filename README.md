# Reading the xv6 Filesystem in Linux

The objective is to develop a Linux user-space application that can read and interpret the xv6 filesystem stored in a `fs.img` file. The application will replicate some functionalities of the xv6 shell, such as listing the root directory and extracting files from the xv6 filesystem.

---

## Features

1. **List Directory (`ls`)**  
   - Displays the contents of the root directory of the xv6 filesystem in a four-column format:
     - **File/Directory Name**
     - **Type** (1 = directory, 2 = file, 3 = special device file)
     - **Inode Number**
     - **Size**
   - Command: `hw5 fs.img ls`

2. **Extract File (`cp`)**  
   - Copies a specified file (`xv6file`) from the root directory of the xv6 filesystem to a specified location in Linux (`linuxfile`).
   - If the file does not exist in the root directory, an error message is displayed:  
     `"File %s does not exist in the root directory"`, where `%s` is the file name.
   - Command: `hw5 fs.img cp xv6file linuxfile`

---

## Usage

### Command Syntax
```bash
hw5 fs.img ls
hw5 fs.img cp xv6file linuxfile
```

- **`fs.img`**: xv6 filesystem image file.
- **`ls`**: Lists the contents of the root directory.
- **`cp xv6file linuxfile`**: Extracts a file from the xv6 filesystem.

---

## Building the Application

1. **Compile**  
   Run `make` in the project directory to build the application. This will generate an executable named `hw5`.

2. **Clean**  
   Run `make clean` to remove compiled files and clean up the directory.
