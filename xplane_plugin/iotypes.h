// This file must be in sync with your plugin in your computer

#define NOTUSED 0
#define DI_INPUT_PULLUP 1
#define DI_INPUT_FLOATING 2
#define DO_OUTPUT 3 // TODO
#define AI_RAW 4 // Use only with main flight control, this will most likely update every frame
#define AI_FILTER 5 // Use this, Noize and deadband filtered to avoid lot of communication spam. 
#define AI_OVERSAMPLE 6 // TODO // Read the value multiple times to fake higher resolution, for main flight controls that have limited use of potensoimeter
#define AO_PWM 7 // TODO // Only on PWM pins
#define AO_DAC 8 // TODO // Only on DUE boards
#define AO_SERVO 9 // TODO
#define DI_ROTARY_ENCODER_TYPE1 10
#define DO_HIGH 11 // Use with care, do not load more than 20mA on pin!
#define DO_LOW 12 // Use with care, do not load more than 20mA on pin!
#define USED 13 // Used by functions that need extra pins, not sure if we need this or just use 0