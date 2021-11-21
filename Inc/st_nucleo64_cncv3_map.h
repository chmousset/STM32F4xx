/*
  st_nucleo64_cncv3.h - driver code for 'CNC v3' shield on STM32F4xx ARM processors

  Copyright (c) 2021 Charles-Henri Mousset
*/


#if N_ABC_MOTORS > 0
#error "Axis configuration is not supported!"
#endif

#define BOARD_NAME "CNC v3 shield on Nucleo-64"
// #define I2C_PORT 1
// #define IS_NUCLEO_BOB
#define HAS_IOPORTS

// Define step pulse output pins.
#define X_STEP_PORT             GPIOA
#define X_STEP_PIN              10
#define Y_STEP_PORT             GPIOB
#define Y_STEP_PIN              3
#define Z_STEP_PORT             GPIOB
#define Z_STEP_PIN              5
#define STEP_OUTMODE            GPIO_BITBAND
//#define STEP_PINMODE            PINMODE_OD // Uncomment for open drain outputs

// Define step direction output pins.
#define X_DIRECTION_PORT        GPIOB
#define X_DIRECTION_PIN         4
#define Y_DIRECTION_PORT        GPIOB
#define Y_DIRECTION_PIN         10
#define Z_DIRECTION_PORT        GPIOA
#define Z_DIRECTION_PIN         8
#define DIRECTION_OUTMODE       GPIO_BITBAND
//#define DIRECTION_PINMODE       PINMODE_OD // Uncomment for open drain outputs

// Define stepper driver enable/disable output pins.

#define STEPPERS_ENABLE_PORT    GPIOA
#define STEPPERS_ENABLE_PIN     9
#define STEPPERS_ENABLE_PINMODE PINMODE_OD // Uncomment for open drain outputs

// Define homing/hard limit switch input pins.
#define X_LIMIT_PORT            GPIOC
#define X_LIMIT_PIN             7
#define Y_LIMIT_PORT            GPIOB
#define Y_LIMIT_PIN             6
#define Z_LIMIT_PORT            GPIOA
#define Z_LIMIT_PIN             7
#define LIMIT_INMODE            GPIO_BITBAND

// Define ganged axis or A axis step pulse and step direction output pins.
// #if N_ABC_MOTORS == 1
// #define M3_AVAILABLE
// #define M3_STEP_PORT            GPIOC
// #define M3_STEP_PIN             6
// #define M3_DIRECTION_PORT       GPIOA
// #define M3_DIRECTION_PIN        12
// #define M3_LIMIT_PORT           GPIOC
// #define M3_LIMIT_PIN            11
// #define M3_ENABLE_PORT          GPIOB
// #define M3_ENABLE_PIN           6
// #endif

  // Define spindle enable and spindle direction output pins.
#define SPINDLE_ENABLE_PORT     GPIOA
#define SPINDLE_ENABLE_PIN      6
#define SPINDLE_DIRECTION_PORT  GPIOA
#define SPINDLE_DIRECTION_PIN   5
#define SPINDLE_DIRECTION_BIT   (1<<SPINDLE_DIRECTION_PIN)

// Define spindle PWM output pin.
// #define SPINDLE_PWM_PORT_BASE   GPIOA_BASE
// #define SPINDLE_PWM_PIN         8

// Define flood and mist coolant enable output pins.
#define COOLANT_FLOOD_PORT      GPIOB
#define COOLANT_FLOOD_PIN       0
// #define COOLANT_MIST_PORT       GPIOB
// #define COOLANT_MIST_PIN        4

// Define user-control controls (cycle start, reset, feed hold) input pins.
#define CONTROL_PORT            GPIOA
#define RESET_PIN               0 // ABORT
#define FEED_HOLD_PIN           1 // HOLD
#define CYCLE_START_PIN         4 // RESUME
#define CONTROL_INMODE          GPIO_BITBAND

// Define probe switch input pin.
#define PROBE_PORT              GPIOC
#define PROBE_PIN               0 // A5 = SCL

// Auxiliary I/O
#define AUXINPUT0_PORT          GPIOC
#define AUXINPUT0_PIN           1 // A4 = SDA
// #define AUXINPUT1_PORT          GPIOA
// #define AUXINPUT1_PIN           15

// #define AUXOUTPUT0_PORT         GPIOB
// #define AUXOUTPUT0_PIN          15
// #define AUXOUTPUT1_PORT         GPIOB
// #define AUXOUTPUT1_PIN          2


// #define AUXOUTPUT2_PORT         GPIOA
// #define AUXOUTPUT2_PIN          5
// #define AUXOUTPUT3_PORT         GPIOA
// #define AUXOUTPUT3_PIN          6
// #define AUXOUTPUT4_PORT         GPIOA
// #define AUXOUTPUT4_PIN          7


// EOF
