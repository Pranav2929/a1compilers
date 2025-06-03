/*
************************************************************
* COMPILERS COURSE - Algonquin College
* Code version: Summer, 2025
* Author: TO_DO
* Professors: Paulo Sousa
************************************************************
#
# ECHO "=---------------------------------------="
# ECHO "|  COMPILERS - ALGONQUIN COLLEGE (S25)  |"
# ECHO "=---------------------------------------="
# ECHO "    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    �
# ECHO "    @@                             @@    �
# ECHO "    @@           %&@@@@@@@@@@@     @@    �
# ECHO "    @@       @%% (@@@@@@@@@  @     @@    �
# ECHO "    @@      @& @   @ @       @     @@    �
# ECHO "    @@     @ @ %  / /   @@@@@@     @@    �
# ECHO "    @@      & @ @  @@              @@    �
# ECHO "    @@       @/ @*@ @ @   @        @@    �
# ECHO "    @@           @@@@  @@ @ @      @@    �
# ECHO "    @@            /@@    @@@ @     @@    �
# ECHO "    @@     @      / /     @@ @     @@    �
# ECHO "    @@     @ @@   /@/   @@@ @      @@    �
# ECHO "    @@     @@@@@@@@@@@@@@@         @@    �
# ECHO "    @@                             @@    �
# ECHO "    @@         S O F I A           @@    �
# ECHO "    @@                             @@    �
# ECHO "    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    �
# ECHO "                                         "
# ECHO "[READER SCRIPT .........................]"
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

#ifndef READER_H_
#define READER_H_

/* TIP: Do not change pragmas, unless necessary .......................................*/
/*#pragma warning(1:4001) *//*to enforce C89 type comments  - to make //comments an warning */

/* standard header files */
#include <stdio.h>  /* standard input/output */
#include <malloc.h> /* for dynamic memory allocation*/
#include <limits.h> /* implementation-defined data type ranges and limits */

/* CONSTANTS DEFINITION: GENERAL (NOT LANGUAGE DEPENDENT) .................................. */

/* Constants about controls (not need to change) */
#define READER_ERROR				(-1)	/* General error message */
#define READER_TERMINATOR			'\0'	/* General EOF */

/* CONSTANTS DEFINITION: PREFIXED BY LANGUAGE NAME .................................. */

/* TO_DO: You should add your own constant definitions here */
#define READER_MAX_SIZE	0					/* maximum capacity */ 

#define READER_DEFAULT_SIZE			100		/* default initial buffer reader capacity */

#define NCHAR				128			/* Chars from 0 to 127 */

#define CHARSEOF			(-1)		/* EOF Code for Reader */

/* STRUCTURES DEFINITION: SUFIXED BY LANGUAGE NAME .................................. */

/* TODO: Adjust datatypes */

/* Offset declaration */
typedef struct position {
	looma_inth read;			/* the offset to the get a char position (in chars) */
	looma_inth wrte;			/* the offset to the add chars (in chars) */
	looma_inth mark;			/* the offset to the mark position (in chars) */
} Position;


typedef struct flag {
	looma_boln isEmpty; /* checks if there is no content */
	looma_boln isFull; /* the content is using all size */
	looma_boln isRead; /* all content was read */
	looma_boln isMoved; /* the content was moved in reallocation */
} Flag;

/* Buffer structure */
typedef struct bufferReader {
	looma_strh		content;			/* pointer to the beginning of character array (character buffer) */
	looma_inth		size;				/* current dynamic memory size (in bytes) allocated to character buffer */
	Flag			flags;				/* contains character array reallocation flag and end-of-buffer flag */
	Position		position;			/* Offset / position field */
	looma_inth		histogram[NCHAR];	/* Statistics of chars */
	looma_inth		numReaderErrors;	/* Number of errors from Reader */
	looma_byte		checkSum;			/* Sum of bytes(chars) */
} Buffer, *BufferPointer;

/* FUNCTIONS DECLARATION:  .................................. */

/* General Operations */
BufferPointer	readerCreate		(looma_inth);
BufferPointer	readerAddChar		(BufferPointer const, looma_char);
looma_boln		readerClear		    (BufferPointer const);
looma_boln		readerFree		    (BufferPointer const);
looma_boln		readerIsFull		(BufferPointer const);
looma_boln		readerIsEmpty		(BufferPointer const);
looma_boln		readerSetMark		(BufferPointer const, looma_inth);
looma_inth		readerPrint		    (BufferPointer const);
looma_inth		readerLoad			(BufferPointer const, looma_strh);
looma_boln		readerRecover		(BufferPointer const);
looma_boln		readerRetract		(BufferPointer const);
looma_boln		readerRestore		(BufferPointer const);
looma_inth		readerChecksum		(BufferPointer const);
/* Getters */
looma_char		readerGetChar		(BufferPointer const);
looma_strh		readerGetContent	(BufferPointer const, looma_inth);
looma_inth		readerGetPosRead	(BufferPointer const);
looma_inth		readerGetPosWrte	(BufferPointer const);
looma_inth		readerGetPosMark	(BufferPointer const);
looma_inth		readerGetSize		(BufferPointer const);
looma_byte		readerGetFlags		(BufferPointer const);
looma_void		readerPrintStat		(BufferPointer const);
looma_inth		readerNumErrors		(BufferPointer const);

#endif
