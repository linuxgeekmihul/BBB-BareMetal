/**
 * @file llma.h
 * @author Alexis Marquet
 * @date 27 Feb 2015
 * @brief Prototypes for low level memory access function
 **/

#ifndef __llma_h
#define __llma_h




/**
 * @fn void PUT32(unsigned int address, unsigned int value)
 * @brief               Put a 32bit word at an address.
 * @param[in] address   Address to put the word to.
 * @param[in] value     32bit word to write at the address.
 * @return              void (always succeed)
 **/
void PUT32(unsigned int address, unsigned int value);


/**
 * @fn unsigned int GET32 (unsigned int address)
 * @brief               Get a 32bit word at an address.
 * @param[in] address   Address to get the word from.
 * @return              the value read at said address.
 **/
unsigned int GET32 (unsigned int address);


/**
 * @fn void PUT16(unsigned int address, unsigned int value)
 * @brief               Put a 16bit word at an address.
 * @param[in] address   Address to put the word to.
 * @param[in] value     16bit word to write at the address.
 * @return              void (always succeed)
 **/
void PUT16(unsigned int address, unsigned short value);


/**
 * @fn unsigned int GET16 (unsigned int address)
 * @brief               Get a 16bit word at an address.
 * @param[in] address   Address to get the word from.
 * @return              the value read at said address.
 **/
unsigned short GET16 (unsigned int address);


/**
 * @fn void PUT8(unsigned int address, unsigned int value)
 * @brief               Put a 8bit word at an address.
 * @param[in] address   Address to put the word to.
 * @param[in] value     8bit word to write at the address.
 * @return              void (always succeed)
 **/
void PUT8(unsigned int address, unsigned char value);


/**
 * @fn unsigned int GET8 (unsigned int address)
 * @brief               Get a 8bit word at an address.
 * @param[in] address   Address to get the word from.
 * @return              the value read at said address.
 **/
unsigned char GET8 (unsigned int address);



/**
 * @fn void CPU_irqE()
 * @brief               enable Master Irq in CPSR (clears the I bit)
 **/
void CPU_irqE();

/**
 * @fn void CPU_irqD()
 * @brief               disable Master Irq in CPSR (sets the I bit)
 **/
void CPU_irqD();


#endif




/*
 The MIT License (MIT)
 
 Copyright (c) 2015 Alexis Marquet
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */
