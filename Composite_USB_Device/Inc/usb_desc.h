/**
  ******************************************************************************
  * @file    usb_desc.h
  * @author  MCD Application Team
  * @version V4.1.0
  * @date    26-May-2017
  * @brief   Descriptor Header for Composite USB Device Demo
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USB_DESC_H
#define __USB_DESC_H

/* Includes ------------------------------------------------------------------*/
#include "p_config.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define USB_DEVICE_DESCRIPTOR_TYPE                0x01
#define USB_CONFIGURATION_DESCRIPTOR_TYPE         0x02
#define USB_STRING_DESCRIPTOR_TYPE                0x03
#define USB_INTERFACE_DESCRIPTOR_TYPE             0x04
#define USB_ENDPOINT_DESCRIPTOR_TYPE              0x05
#define USB_INTERFACE_ASSOCIATION_DESCRIPTOR_TYPE 0x0B
#define USB_HID_DESCRIPTOR_TYPE                   0x21

#define COMPOSITE_SIZ_DEVICE_DESC               18
#define COMPOSITE_SIZ_CONFIG_DESC               115

#if CUSTOM_LANGID_STRING == P_FALSE
#define COMPOSITE_SIZ_STRING_LANGID             4
#endif

#if CUSTOM_VENDOR_STRING == P_FALSE
#define COMPOSITE_SIZ_STRING_VENDOR             26
#endif

#if CUSTOM_DEVICE_STRING == P_FALSE
#define COMPOSITE_SIZ_STRING_PRODUCT            22
#endif

#if CUSTOM_SERIAL_STRING == P_FLASE
#define COMPOSITE_SIZ_STRING_SERIAL             12
#endif

#define CUSTOMHID_SIZ_REPORT_DESC               63
#define CUSTOMHID_SIZ_HID_DESC                  0x09
#define CUSTOMHID_OFF_HID_DESC                  0x1A

#define VIRTUAL_COM_PORT_DATA_SIZE              64
#define VIRTUAL_COM_PORT_INT_SIZE               8

/* Exported functions ------------------------------------------------------- */

extern const uint8_t Composite_DeviceDescriptor[COMPOSITE_SIZ_DEVICE_DESC];
extern const uint8_t Composite_ConfigDescriptor[COMPOSITE_SIZ_CONFIG_DESC];
extern const uint8_t CustomHID_ReportDescriptor[CUSTOMHID_SIZ_REPORT_DESC];
#if CUSTOM_LANGID_STRING == P_FALSE
extern const uint8_t Composite_StringLangID[COMPOSITE_SIZ_STRING_LANGID];
#endif

#if CUSTOM_VENDOR_STRING == P_FALSE
extern const uint8_t Composite_StringVendor[COMPOSITE_SIZ_STRING_VENDOR];
#endif

#if CUSTOM_DEVICE_STRING == P_FALSE
extern const uint8_t Composite_StringProduct[COMPOSITE_SIZ_STRING_PRODUCT];
#endif

#if CUSTOM_SERIAL_STRING == P_FLASE
extern uint8_t Composite_StringSerial[COMPOSITE_SIZ_STRING_SERIAL];
#endif

#endif /* __USB_DESC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
