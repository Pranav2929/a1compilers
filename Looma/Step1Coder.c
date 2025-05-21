#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef COMPILERS_H_
#include "Compilers.h"
#endif

#ifndef CODER_H_
#include "Step1Coder.h"
#endif

// Helper: Vigenère transformation for a single character.
char vigenereChar(char input, char keyChar, int encode) {
    if (input < ASCII_START || input > ASCII_END) return input;
    int offset = (keyChar - ASCII_START) % ASCII_RANGE;
    if (!encode) offset = -offset;
    return (char)(((input - ASCII_START + offset + ASCII_RANGE) % ASCII_RANGE) + ASCII_START);
}

// File-based Vigenère cipher (encode or decode)
void vigenereFile(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key, looma_inth encode) {
    FILE* inputFile = fopen(inputFileName, "r");
    FILE* outputFile = fopen(outputFileName, "w");

    if (!inputFile) {
        errorPrint("Failed to open input file: %s\n", inputFileName);
        return;
    }
    if (!outputFile) {
        errorPrint("Failed to open output file: %s\n", outputFileName);
        fclose(inputFile);
        return;
    }

    looma_inth keyLen = (looma_inth)strlen(key);
    looma_inth keyIndex = 0;
    int ch;

    while ((ch = fgetc(inputFile)) != EOF) {
        char currentChar = (char)ch;
        char outChar;

        if (currentChar >= ASCII_START && currentChar <= ASCII_END) {
            char k = key[keyIndex % keyLen];
            outChar = vigenereChar(currentChar, k, encode);
            keyIndex++;
        }
        else {
            outChar = currentChar;
        }

        fputc(outChar, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
}

looma_strh vigenereMem(const looma_strh inputFileName, const looma_strh key, looma_inth encode) {
    FILE* file = fopen(inputFileName, "r");
    if (!file) {
        errorPrint("Error opening file: %s\n", inputFileName);
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    rewind(file);

    looma_strh output = (looma_strh)malloc((size + 1) * sizeof(char));
    if (!output) {
        fclose(file);
        errorPrint("Memory allocation failed.\n");
        return NULL;
    }

    looma_inth keyLen = (looma_inth)strlen(key);
    looma_inth keyIndex = 0;
    int ch;
    looma_inth i = 0;

    while ((ch = fgetc(file)) != EOF) {
        char currentChar = (char)ch;
        char outChar;

        if (currentChar >= ASCII_START && currentChar <= ASCII_END) {
            char k = key[keyIndex % keyLen];
            int offset = (k - ASCII_START) % ASCII_RANGE;
            if (!encode) offset = -offset;

            outChar = (char)(((currentChar - ASCII_START + offset + ASCII_RANGE) % ASCII_RANGE) + ASCII_START);
            keyIndex++;
        }
        else {
            outChar = currentChar;
        }

        output[i++] = outChar;
    }

    output[i] = '\0';
    fclose(file);
    return output;
}

// Encrypt
void cypher(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key) {
    vigenereFile(inputFileName, outputFileName, key, CYPHER);
}

// Decrypt
void decypher(const looma_strh inputFileName, const looma_strh outputFileName, const looma_strh key) {
    vigenereFile(inputFileName, outputFileName, key, DECYPHER);
}

// Get size of file in bytes
looma_inth getSizeOfFile(const looma_strh filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) return -1;
    fseek(file, 0, SEEK_END);
    looma_inth size = ftell(file);
    fclose(file);
    return size;
}
