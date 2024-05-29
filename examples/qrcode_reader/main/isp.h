/**
*****************************************************************************************
*     Copyright(c) 2022, Seeed Technology Corporation. All rights reserved.
*****************************************************************************************
* @file      isp.h
* @brief
* @author    Hongtai Liu (lht856@foxmail.com)
* @date      2022-05-19
* @version   v1.0
**************************************************************************************
* @attention
* <h2><center>&copy; COPYRIGHT 2022 Seeed Technology Corporation</center></h2>
**************************************************************************************
*/
#ifndef ISP_H
#define ISP_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

enum ROTATION { ROTATION_UP, ROTATION_LEFT, ROTATION_RIGHT, ROTATION_DOWN };

void rgb565_to_gray(uint8_t *pdst, const uint8_t *psrc, int h, int w, int th, int tw, uint8_t rotation, bool mirror);

#ifdef __cplusplus
}
#endif

#endif