/*
 * w25qxx_littlefs.c
 *
 *  Created on: Mar 24, 2022
 *      Author: lth
 */


#include "main.h"
#include "w25qxx.h"
#include "w25qxx_littlefs.h"

W25QXX_HandleTypeDef *w25qxx_handle;

void w25qxx_littlefs_init(W25QXX_HandleTypeDef *w25qxx_init) {
	w25qxx_handle = w25qxx_init;
}
