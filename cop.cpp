//==============================================================================
// MIPS(R) Architecture For Programmers Volume II-A: The MIPS64(R) Instruction Set Reference Manual
//
// Document Number: MD00087
// Revision 6.06
// December 15, 2016
//
// Copyright (C) Wave Computing, Inc. All rights reserved.
//==============================================================================

#include "cop.h"

//------------------------------------------------------------------------------
// Co-Processor
//------------------------------------------------------------------------------
COP::COP(CPU& cpu_) : cpu(cpu_)
{
}
//------------------------------------------------------------------------------
COP::~COP()
{
}
//------------------------------------------------------------------------------
void COP::Execute(unsigned int encode)
{
}
//------------------------------------------------------------------------------
void COP::LDC(unsigned int encode)
{
}
//------------------------------------------------------------------------------
void COP::LWC(unsigned int encode)
{
}
//------------------------------------------------------------------------------
void COP::SDC(unsigned int encode)
{
}
//------------------------------------------------------------------------------
void COP::SWC(unsigned int encode)
{
}
//------------------------------------------------------------------------------