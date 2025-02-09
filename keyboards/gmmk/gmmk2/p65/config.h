// based on https://github.com/devgony/qmk_firmware/blob/9dc7e8aba6688667674db4f4d3c61d5860cce1ee/keyboards/gmmk/gmmk2/p65/config.h#L40

#pragma once

///* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
///* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

// #define RGB_DISABLE_WHEN_USB_SUSPENDED // Remove or comment this out

/* SPI Config for LED Driver */
#define SPI_DRIVER SPIDM2
#define SPI_SCK_PIN B13
#define SPI_MOSI_PIN B15
#define SPI_MISO_PIN B14

// These are the correct pin definitions, matching the driver code
#define AW20216S_CS_PIN_1 A15  // Chip Select for driver 1
#define AW20216S_CS_PIN_2 B9   // Chip Select for driver 2
#define AW20216S_EN_PIN   C13  // Enable pin (both drivers use the same)

#define AW20216S_DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 54
#define DRIVER_2_LED_TOTAL 34
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL) // Should be 88

// Use RGB_MATRIX_SLEEP instead of RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_SLEEP

// Maximum brightness limit (1-255) - adjust as needed
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128

// Default startup animation (optional - choose one from the list below)
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

// --- RGB Matrix Animation Modes (Enable only what you need) ---
// You *can* enable all of these, but it increases firmware size.
// It's generally better to enable only the ones you actually use.

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL

// Framebuffer effects (require more memory - enable only if needed)
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN

// Keypress/Keyrelease effects (require more memory)
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
