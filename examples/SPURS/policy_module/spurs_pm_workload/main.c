/////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2007  Sony Computer Entertainment Inc. / SN Systems Ltd
//
/////////////////////////////////////////////////////////////////////////

#include <spu_printf.h>
void entry(uint32_t arg);

void entry(uint32_t arg)
{
	spu_printf("[SPU PROGRAM %d] Hello!\n", arg);
}
