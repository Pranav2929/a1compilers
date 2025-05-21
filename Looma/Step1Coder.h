/*
************************************************************
* COMPILERS COURSE - Algonquin College
* Code version: Summer, 2025
* Author: Pranav, Li
* Professors: Paulo Sousa
***********************************************************
#
# ECHO "=---------------------------------------="
# ECHO "|  COMPILERS - ALGONQUIN COLLEGE (S25)  |"
# ECHO "=---------------------------------------="
# ECHO "    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    "
# ECHO "    @@                             @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @                    @@    "
# ECHO "    @@        @@@@@@@@@@@@@@       @@    "
# ECHO "    @@                             @@    "
# ECHO "    @@         L O O M A           @@    "
# ECHO "    @@                             @@    "
# ECHO "    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    "
# ECHO "                                         "
# ECHO "[COMPILER SCRIPT .......................]"
# ECHO "                                         "
*/

/*
************************************************************
* File name: Reader.h
* Compiler: MS Visual Studio 2022
* Course: CST 8152 � Compilers, Lab Section: [011, 012]
* Assignment: A12.
* Date: Jan 01 2025
* Professor: Paulo Sousa
* Purpose: This file is the main header for Reader (.h)
************************************************************
*/

/*
 *.............................................................................
 * MAIN ADVICE:
 * Please check the "TODO" labels to develop your activity.
 *.............................................................................
 */

#ifndef COMPILERS_H_
#include "Compilers.h"
#endif

#ifndef CODER_H_
#define CODER_H_
 /*
 ************************************************************
 * COMPILERS COURSE - Algonquin College
 * Code version: Summer, 2025
 * Author: [Your Name]
 * Professors: Paulo Sousa
 ************************************************************
 #
 # ECHO "=---------------------------------------="
 # ECHO "|  COMPILERS - ALGONQUIN COLLEGE (S25)  |"
 # ECHO "=---------------------------------------="
 # ECHO "    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    "
 # ECHO "    @@         L O O M A           @@    "
 # ECHO "    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    "
 # ECHO "                                         "
 # ECHO "[CODER SCRIPT ..........................]"
 # ECHO "                                         "
 */

 /*
 ************************************************************
 * File name: Step1Coder.h
 * Compiler: MS Visual Studio 2022
 * Course: CST 8152 – Compilers, Lab Section: [011, 012]
 * Assignment: A12.
 * Date: Jan 01 2025
 * Professor: Paulo Sousa
 * Purpose: This file is the main header for Step 1 Coder (Vigenère cipher).
 ************************************************************
 */

#ifndef COMPILERS_H_
#include "Compilers.h"
#endif

#ifndef CODER_H_
#define CODER_H_

 // ASCII range for visible characters
#define ASCII_START 32
#define ASCII_END 126
#define ASCII_RANGE (ASCII_END - ASCII_START + 1)

// Operation modes
#define CYPHER 1
#define DECYPHER 0

/* FUNCTIONS DECLARATION: */

/* Vigenère cipher on file and memory */
void vigenereFile(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key, looma_inth encode);
looma_strh vigenereMem(const looma_strh inputFileName, const looma_strh key, looma_inth encode);

/* Front-end operations */
void cypher(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key);
void decypher(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key);

/* Utility */
looma_inth getSizeOfFile(const looma_strh filename);

#endif

 // ASCII range for visible characters
#define ASCII_START 32
#define ASCII_END 126
#define ASCII_RANGE (ASCII_END - ASCII_START + 1)

#define CYPHER 1
#define DECYPHER 0

/* FUNCTIONS DECLARATION:  .................................. */

/* General Operations */
void vigenereFile(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key, looma_inth encode);
looma_strh vigenereMem(const looma_strh inputFileName, const looma_strh key, looma_inth encode);

void cypher(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key);
void decypher(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key);
looma_inth getSizeOfFile(const looma_strh filename);

#endif
