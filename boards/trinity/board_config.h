#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Karlsson Robotics"
#define PRODUCT_NAME "Trinity"
#define VOLUME_LABEL "TRINITY"
#define INDEX_URL "http://kr4.us"
#define BOARD_ID "SAMD21G18A-Trinity-v1"

#define USB_VID 0x239A
#define USB_PID 0x0015

#define LED_PIN PIN_PA14
#define LED_TX_PIN PIN_PA17
#define LED_RX_PIN PIN_PA16

#define BOOT_USART_MODULE                 SERCOM5
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB03D_SERCOM5_PAD1
#define BOOT_USART_PAD0                   PINMUX_PB02D_SERCOM5_PAD0

#endif
