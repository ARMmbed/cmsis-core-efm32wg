/**************************************************************************//**
 * @file em_mbed.h
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Laboratories, Inc. http://www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/

#ifndef __EM_MBED_H
#define __EM_MBED_H

#if YOTTA_CFG_UVISOR_PRESENT && !defined(UVISOR_NO_HOOKS)

#define NVIC_ClearPendingIRQ(irqn)       vIRQ_ClearPendingIRQ((uint32_t) (irqn))
#define NVIC_SetPendingIRQ(irqn)         vIRQ_SetPendingIRQ((uint32_t) (irqn))
#define NVIC_GetPendingIRQ(irqn)         vIRQ_GetPendingIRQ((uint32_t) (irqn))
#define NVIC_SetPriority(irqn, priority) vIRQ_SetPriority((uint32_t) (irqn), (uint32_t) (priority))
#define NVIC_GetPriority(irqn)           vIRQ_GetPriority((uint32_t) (irqn))
//#define NVIC_SetVector(irqn, vector)     vIRQ_SetVector((uint32_t) (irqn), (uint32_t) (vector))
//#define NVIC_GetVector(irqn)             vIRQ_GetVector((uint32_t) (irqn))
#define NVIC_EnableIRQ(irqn)             vIRQ_EnableIRQ((uint32_t) (irqn))
#define NVIC_DisableIRQ(irqn)            vIRQ_DisableIRQ((uint32_t) (irqn))

#endif

#endif /* __EM_MBED_H */
