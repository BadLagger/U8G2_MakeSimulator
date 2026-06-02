#include "../../LLA_Drivers.h"

/************************ LLA Interface headers includes ****************************/
/* Chip SDK headers includes */
#include "../../LLA_Drivers.h"
#include <SDL2/SDL.h>

/************************ LLA Interface micro define ****************************/


/************************ LLA common micro define ****************************/




/************************ LLA common variables ****************************/
static uint32_t mcu_start_time = 0;
static uint32_t f = 1000; // 1 kHz clock for ms	


/************************ LLA common function ****************************/

/**
 * @description: 
 * @param {uint32_t} pre_ms
 * @return {*}
 * @author: Your name
 */
uint32_t LLA_SYS_Time_ConsumeMillis(uint32_t pre_ms){
	uint32_t current_ms = LLA_SYS_Time_Millis();
	return current_ms>=pre_ms? (current_ms-pre_ms): (UINT32_MAX+current_ms-pre_ms);
}

/**
 * @description: 
 * @param {uint32_t} pre_us
 * @return {*}
 * @author: Your name
 */
uint32_t LLA_SYS_Time_ConsumeMicros(uint32_t pre_us){
	uint32_t current_us = LLA_SYS_Time_Micros();
	return current_us>=pre_us? (current_us-pre_us): (UINT32_MAX+current_us-pre_us);
}


/************************ LLA Interface function ****************************/
/**
  * @brief	:	Init System time clock. (you can use SystemTick or other Hardware timer on your chip.)
  * @param	: 
  * @param	: 
  * @retval	:	
  */
void LLA_SYS_Time_Init(){
  mcu_start_time = SDL_GetTicks();
}


/**
  * @brief	:	Get System time in millisecond since system time clock initiation.
  * @param	: 
  * @param	: 
  * @retval	:	
  */
uint32_t LLA_SYS_Time_Millis(){
	return SDL_GetTicks() - mcu_start_time;
}


/**
  * @brief	:	Get System time in microsecond since system time clock initiation.
  * @param	: 
  * @param	: 
  * @retval	:	
  */
uint32_t LLA_SYS_Time_Micros(void)
{
  return (SDL_GetTicks() - mcu_start_time) * 1000;
}


/**
  * @brief	:	delay a few millisecond.
  * @param	: 
  * @param	: 
  * @retval	:	
  */
void LLA_SYS_Time_DelayMS(uint32_t ms){
  SDL_Delay(ms);
}



/**
  * @brief	:	delay a few microsecond.
  * @param	: 
  * @param	: 
  * @retval	:	
  */
void LLA_SYS_Time_DelayUS(uint32_t us){
	uint32_t start_us = LLA_SYS_Time_Micros();
	while (LLA_SYS_Time_ConsumeMicros(start_us) < us);
}

