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
***********************************************************
* File name: Reader.c
* Compiler: MS Visual Studio 2022
* Course: CST 8152 � Compilers, Lab Section: [011, 012, 013]
* Assignment: A12.
* Date: Jan 01 2025
* Professor: Paulo Sousa
* Purpose: This file is the main code for Buffer/Reader (A12)
************************************************************
*/

/*
 *.............................................................................
 * MAIN ADVICE:
 * - Please check the "TODO" labels to develop your activity.
 * - Review the functions to use "Defensive Programming".
 *.............................................................................
 */

#include <ctype.h>
#include <string.h>

#ifndef COMPILERS_H_
#include "Compilers.h"
#endif

#ifndef CODER_H_
#include "Step1Coder.h"
#endif

#ifndef READER_H_
#include "Step2Reader.h"
#endif

/*
***********************************************************
* Function name: readerCreate
* Purpose: Creates the buffer reader according to capacity, increment
	factor and operational mode ('f', 'a', 'm')
* Author: Svillen Ranev / Paulo Sousa
* History/Versions: S22
* Called functions: calloc(), malloc()
* Parameters:
*   size = initial capacity
*   increment = increment factor
*   mode = operational mode
* Return value: bPointer (pointer to reader)
* Algorithm: Allocation of memory according to inicial (default) values.
* TODO ......................................................
*	- Adjust datatypes for your LANGUAGE.
*   - Use defensive programming
*	- Check boundary conditions
*	- Check flags.
*************************************************************
*/

BufferPointer readerCreate(looma_inth size) {
	BufferPointer readerPointer = NULL;
	/* TO_DO: Defensive programming: size */
	/* TO_DO: readerPointer allocation */
	/* TO_DO: Defensive programming: readerPointer */
	readerPointer = calloc(1, sizeof(Buffer));
	/* TO_DO: content allocation */
	looma_strh content = malloc(size);
	if (readerPointer!=NULL && content!=NULL) {
		readerPointer->content = content;
	}
	/* TO_DO: Defensive programming: content */
	/* TO_DO: Initialize the histogram */
	/* TO_DO: Initialize errors */
	/* TO_DO: Update the properties */
	/* TO_DO: Initialize flags */
	/* TO_DO: The created flag must be signalized as EMP */
	return readerPointer;
}


/*
***********************************************************
* Function name: readerAddChar
* Purpose: Adds a char to buffer reader
* Parameters:
*   readerPointer = pointer to Buffer Reader
*   ch = char to be added
* Return value:
*	readerPointer (pointer to Buffer Reader)
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/

BufferPointer readerAddChar(BufferPointer const readerPointer, looma_char ch) {
	looma_strh tempReader = NULL;
	looma_inth newSize = 0;
	/* TO_DO: Defensive programming */
	/* TO_DO: Test the inclusion of chars */
	if (readerPointer->position.wrte * (looma_inth)sizeof(looma_char) < readerPointer->size) {
		/* TO_DO: Buffer not full: set flag */
	}
	else {
		/* TO_DO: Reset Full flag */
		/* TO_DO: Adjust the size to be duplicated */
		/* TO_DO: Defensive programming */
	}
	/* TO_DO: Add the char */
	/* TO_DO: Updates histogram */
	return readerPointer;
}

/*
***********************************************************
* Function name: readerClear
* Purpose: Clears the buffer reader
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerClear(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Adjust positions to zero */
	/* TO_DO: Adjust flags original */
	return SOFIA_FALSE;
}

/*
***********************************************************
* Function name: readerFree
* Purpose: Releases the buffer address
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerFree(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* Free memory (buffer/content) */
	return SOFIA_FALSE;
}

/*
***********************************************************
* Function name: readerIsFull
* Purpose: Checks if buffer reader is full
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerIsFull(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Check flag if buffer is FUL */
	return SOFIA_FALSE;
}


/*
***********************************************************
* Function name: readerIsEmpty
* Purpose: Checks if buffer reader is empty.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerIsEmpty(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Check flag if buffer is EMP */
	return SOFIA_FALSE;
}

/*
***********************************************************
* Function name: readerSetMark
* Purpose: Adjust the position of mark in the buffer
* Parameters:
*   readerPointer = pointer to Buffer Reader
*   mark = mark position for char
* Return value:
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerSetMark(BufferPointer const readerPointer, looma_inth mark) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Adjust mark */
	return SOFIA_FALSE;
}


/*
***********************************************************
* Function name: readerPrint
* Purpose: Prints the string in the buffer.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Number of chars printed.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_inth readerPrint(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming (including invalid chars) */
	/* TO_DO: Print the buffer content */
	return 0;
}

/*
***********************************************************
* Function name: readerLoad
* Purpose: Loads the string in the buffer with the content of
	an specific file.
* Parameters:
*   readerPointer = pointer to Buffer Reader
*   fileDescriptor = pointer to file descriptor
* Return value:
*	Number of chars read and put in buffer.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_inth readerLoad(BufferPointer const readerPointer, looma_strh fileName) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Loads the file */
	/* TO_DO: Creates the string calling vigenereMem(fileName, STR_LANGNAME, DECYPHER) */
	return 0;
}

/*
***********************************************************
* Function name: readerRecover
* Purpose: Rewinds the buffer.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerRecover(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Adjust read and mark to zero */
	return SOFIA_FALSE;
}


/*
***********************************************************
* Function name: readerRetract
* Purpose: Retracts the buffer to put back the char in buffer.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerRetract(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Retract (return 1 pos read) */
	return SOFIA_FALSE;
}


/*
***********************************************************
* Function name: readerRestore
* Purpose: Resets the buffer.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Boolean value about operation success
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_boln readerRestore(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Restore read to mark */
	return SOFIA_TRUE;
}



/*
***********************************************************
* Function name: readerGetChar
* Purpose: Returns the char in the getC position.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Char in the getC position.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_char readerGetChar(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Returns size in the read position and updates read */
	return '\0';
}


/*
***********************************************************
* Function name: readerGetContent
* Purpose: Returns the pointer to String.
* Parameters:
*   readerPointer = pointer to Buffer Reader
*   pos = position to get the pointer
* Return value:
*	Position of string char.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_strh readerGetContent(BufferPointer const readerPointer, looma_inth pos) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Return content (string) */
	return NULL;
}

/*
***********************************************************
* Function name: readerGetPosRead
* Purpose: Returns the value of getCPosition.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	The read position offset.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_inth readerGetPosRead(BufferPointer const readerPointer)
{
	/* TO_DO: Defensive programming */
	/* TO_DO: Return read */
	return 0;
}

/*
***********************************************************
* Function name: readerGetPosWrte
* Purpose: Returns the position of char to be added
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Write position
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_inth readerGetPosWrte(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Return wrte */
	return 0;
}


/*
***********************************************************
* Function name: readerGetPosMark
* Purpose: Returns the position of mark in the buffer
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Mark position.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_inth readerGetPosMark(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Return mark */
	return 0;
}


/*
***********************************************************
* Function name: readerGetSize
* Purpose: Returns the current buffer capacity
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Size of buffer.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_inth readerGetSize(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Return size */
	return 0;
}

/*
***********************************************************
* Function name: readerGetFlags
* Purpose: Returns the entire flags of Buffer.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Flags from Buffer.
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_byte readerGetFlags(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Return flags */
	return 0;
}

/*
***********************************************************
* Function name: readerShowStat
* Purpose: Shows the char statistic.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value: (Void)
* TO_DO:
*   - Use defensive programming
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_void readerPrintStat(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Print statistics */
}

/*
***********************************************************
* Function name: readerNumErrors
* Purpose: Returns the number of errors found.
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	Number of errors.
* TO_DO:
*   - Use defensive programming
*	- Adjust for your LANGUAGE.
*************************************************************
*/
looma_inth readerNumErrors(BufferPointer const readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Return the number of errors */
	return 0;
}

/*
***********************************************************
* Function name: readerChecksum
* Purpose: Sets the checksum of the reader (4 bits).
* Parameters:
*   readerPointer = pointer to Buffer Reader
* Return value:
*	[None]
* TO_DO:
*   - Use defensive programming
*	- Check boundary conditions
*	- Adjust for your LANGUAGE.
*************************************************************
*/

looma_inth readerChecksum(BufferPointer readerPointer) {
	/* TO_DO: Defensive programming */
	/* TO_DO: Return the checksum (given by the content) */
	return 0;
}
