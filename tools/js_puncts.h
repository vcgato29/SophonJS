/******************************************************************************
 *                SophonJS: An embedded javascript engine                     *
 *                                                                            *
 * Copyright (c) 2015 Gong Ke                                                 *
 * All rights reserved.                                                       *
 *                                                                            *
 * Redistribution and use in source and binary forms, with or without         *
 * modification, are permitted provided that the following conditions are     *
 * met:                                                                       *
 * 1.Redistributions of source code must retain the above copyright notice,   *
 * this list of conditions and the following disclaimer.                      *
 * 2.Redistributions in binary form must reproduce the above copyright        *
 * notice, this list of conditions and the following disclaimer in the        *
 * documentation and/or other materials provided with the distribution.       *
 * 3.Neither the name of the Gong Ke; nor the names of its contributors may   *
 * be used to endorse or promote products derived from this software without  *
 * specific prior written permission.                                         *
 *                                                                            *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS    *
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,  *
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR     *
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR           *
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,      *
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,        *
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR         *
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF     *
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING       *
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS         *
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.               *
 *****************************************************************************/

#ifndef _JS_PUNCTS_H_
#define _JS_PUNCTS_H_

#ifdef __cplusplus
extern "C" {
#endif

#define FOR_EACH_PUNCT(p)\
	p(SUSP, ...)\
	p(LE,   <=)\
	p(GE,   >=)\
	p(EQU,  ==)\
	p(NEQ,  !=)\
	p(SAME, ===)\
	p(NSAME,!==)\
	p(INC,  ++)\
	p(DEC,  --)\
	p(SHL,  <<)\
	p(SHR,  >>)\
	p(USHR, >>>)\
	p(AND,  &&)\
	p(OR,   ||)\
	p(ADD_ASSIGN,  +=)\
	p(SUB_ASSIGN,  -=)\
	p(MUL_ASSIGN,  *=)\
	p(DIV_ASSIGN,  /=)\
	p(MOD_ASSIGN,  %=)\
	p(SHL_ASSIGN,  <<=)\
	p(SHR_ASSIGN,  >>=)\
	p(USHR_ASSIGN, >>>=)\
	p(BAND_ASSIGN, &=)\
	p(BOR_ASSIGN,  |=)\
	p(XOR_ASSIGN,  ^=)\
	p(LAMBDA,  =>)

#ifdef __cplusplus
}
#endif

#endif

