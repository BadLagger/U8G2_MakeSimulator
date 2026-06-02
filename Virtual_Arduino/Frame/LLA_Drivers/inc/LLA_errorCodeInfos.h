#ifndef __LLA_ERRORCODEINFOS_H__
#define __LLA_ERRORCODEINFOS_H__

#include "../../LLA_Drivers.h"

typedef struct{
	DriverCode_t driverCode;
	uint8_t errorCode;
	const char  * const info;
}LLA_ErrorCode_t;


#if LLA_ERRORCODEINFOS_LANG == 0
const LLA_ErrorCode_t LLA_ErrorCode_List[]={
	{DriverCode_BaseIO,	BaseIO_errorNone,	"No IO error occurred"},
	{DriverCode_BaseIO,	BaseIO_errorIOMode,	"IO mode error"},
	{DriverCode_BaseIO,	BaseIO_errorIOName,	"IO name error"},
	{DriverCode_BaseIO,	BaseIO_errorIOStatus,	"IO status error"},
	{DriverCode_BaseIO,	BaseIO_errorIOOutChipSupport,	"IO out of your chip support"},
	{DriverCode_UART, UART_errorNone, "No UART error occurred"},
	{DriverCode_UART, UART_errorName, "UART name error"},
	{DriverCode_UART, UART_errorConfig, "UART config error"},
	{DriverCode_UART, UART_errorOutChipSupport, "UART out of your chip support"},
	{DriverCode_ADC, ADC_errorPinNotChannel ,"ADC PinNotChannel error"},
	{DriverCode_ADC, ADC_errorIOName, "ADC IO name error"},
	{DriverCode_ADC, ADC_errorIOOutChipSupport, "ADC IO out of your chip support"},
	{DriverCode_ADC, ADC_errorSpecialChannel, "ADC chanel not special channel error"},
	{DriverCode_ADC, ADC_errorSpecialOutChipSupport, "ADC chanel out of your chip support"},
	{DriverCode_EXTI, EXTI_errorCallback, "EXTI callback is NULL"},
	{DriverCode_EXTI, EXTI_errorIOName, "EXTI IO name error"},
	{DriverCode_EXTI, EXTI_errorIOOutChipSupport, "EXTI IO out of your chip support"},
	{DriverCode_EXTI, EXTI_errorType, "EXTI type error"},
	{DriverCode_EXTI, EXTI_errorTypeOutChipSupport, "EXTI type out of your chip support"},
	{DriverCode_AdvanceIO, AdvanceIO_errorIOOutChipSupport, "AdvanceIO IO out of your chip support"},
	{DriverCode_AdvanceIO, AdvanceIO_errorIONotSupportPWC, "AdvanceIO pin not support pluse width measure"},
	{DriverCode_AdvanceIO, AdvanceIO_errorPWC, "AdvanceIO error PWC type"},
	{DriverCode_AdvanceIO, AdvanceIO_errorPWCTimeOut, "AdvanceIO pluse measure time out"},
	{DriverCode_PWM, PWM_errorIOOutChipSupport, "PWM IO out of your chip support"},
	{DriverCode_PWM, PWM_errorPolar, "PWM polar error"},
	{DriverCode_PWM, PWM_errorIONotSupportPWM, "PWM pin not support PWM"},
	{DriverCode_PWM, PWM_errorRange,"PWM error hz out of range"},
	{DriverCode_Timer, TIMER_errorNone,"No Timer error occurred"},
	{DriverCode_Timer, TIMER_errorTimer,"Timer error"},
	{DriverCode_Timer, TIMER_errorTimerOutChipSupport,"Timer out of your chip support"},
	{DriverCode_Timer, TIMER_errorCallback,"Timer callback is NULL"},
	{DriverCode_Timer, TIMER_errorNotSet,"Timer not set"},
	{DriverCode_Flash, FLASH_errorNone,"No Flash error occurred"},
	{DriverCode_Flash, FLASH_errorInit,"Flash Init error"},
	{DriverCode_Flash, FLASH_errorAddr,"Flash target address error"},
	{DriverCode_Flash, FLASH_errorAddrAlignment,"Flash address alignment error"},
	{DriverCode_Flash, FLASH_errorErase,"Flash erase error"},
	{DriverCode_Flash, FLASH_errorWrite,"Flash write error"},
	{DriverCode_SPI, SPI_errorNone,"No SPI error occurred"},
	{DriverCode_SPI, SPI_errorMode,"SPI mode error"},
	{DriverCode_SPI, SPI_errorIOOutChipSupport, "SPI IO out of your chip support"},
	{DriverCode_SPI, SPI_errorSPIOutChipSupport, "SPI out of your chip support"},
	{DriverCode_SPI, SPI_errorWrite, "SPI write error"},
	{DriverCode_SPI, SPI_errorRead, "SPI read error"},
	{DriverCode_WDG, WDG_errorNone,"No WDG error occurred"},
	{DriverCode_WDG, WDG_errorTimeOutChipSupport,"WDG ovr_time out of your chip support"},
	{DriverCode_WDG, WDG_errorStop,"WDG your chip not support Stop"}
};

#elif LLA_ERRORCODEINFOS_LANG == 1

const LLA_ErrorCode_t LLA_ErrorCode_List[]={
	{DriverCode_BaseIO,	BaseIO_errorNone,	"��IO������"},
	{DriverCode_BaseIO,	BaseIO_errorIOMode,	"IOģʽ����"},
	{DriverCode_BaseIO,	BaseIO_errorIOName,	"IO���ƴ���"},
	{DriverCode_BaseIO,	BaseIO_errorIOStatus,	"IO״̬����"},
	{DriverCode_BaseIO,	BaseIO_errorIOOutChipSupport,	"IO�������оƬ֧��"},
	{DriverCode_UART, UART_errorNone, "��UART������"},
	{DriverCode_UART, UART_errorName, "UART���ƴ���"},
	{DriverCode_UART, UART_errorConfig, "UART���ô���r"},
	{DriverCode_UART, UART_errorOutChipSupport, "UART�������оƬ֧��"},
	{DriverCode_ADC, ADC_errorPinNotChannel ,"ADC ��IO��ADC�ɼ�ͨ��"},
	{DriverCode_ADC, ADC_errorIOName, "ADC IO���ƴ���"},
	{DriverCode_ADC, ADC_errorIOOutChipSupport, "ADC IO�������оƬ֧��"},
	{DriverCode_ADC, ADC_errorSpecialChannel, "ADC chanel������ͨ��"},
	{DriverCode_ADC, ADC_errorSpecialOutChipSupport, "ADC chanel�������оƬ֧��"},
	{DriverCode_EXTI, EXTI_errorCallback, "EXTI �ص�����ΪNULL"},
	{DriverCode_EXTI, EXTI_errorIOName, "EXTI IO���ƴ���"},
	{DriverCode_EXTI, EXTI_errorIOOutChipSupport, "EXTI IO�������оƬ֧��"},
	{DriverCode_EXTI, EXTI_errorType, "EXTI���ʹ���"},
	{DriverCode_EXTI, EXTI_errorTypeOutChipSupport, "EXTI type�������оƬ֧��"},
	{DriverCode_AdvanceIO, AdvanceIO_errorIOOutChipSupport, "AdvanceIO IO�������оƬ֧��"},
	{DriverCode_AdvanceIO, AdvanceIO_errorIONotSupportPWC, "AdvanceIO pin��֧����������"},
	{DriverCode_AdvanceIO, AdvanceIO_errorPWC, "AdvanceIO�����PWC����"},
	{DriverCode_AdvanceIO, AdvanceIO_errorPWCTimeOut, "AdvanceIO ����������ʱ"},
	{DriverCode_PWM, PWM_errorIOOutChipSupport, "PWM IO�������оƬ֧��"},
	{DriverCode_PWM, PWM_errorPolar, "PWM���Դ���"},
	{DriverCode_PWM, PWM_errorIONotSupportPWM, "PWM �����Ų�֧��PWM"},
	{DriverCode_PWM, PWM_errorRange,"PWMƵ�ʳ���֧�ַ�Χ(4hz~48Mhz)"}
};

#endif

#endif
