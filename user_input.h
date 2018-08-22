#include <stdbool.h>

typedef enum InputKey
{
	INPUT_KEY_NUMPAD_0,
	INPUT_KEY_NUMPAD_1,
	INPUT_KEY_NUMPAD_2,
	INPUT_KEY_NUMPAD_3,
	INPUT_KEY_NUMPAD_4,
	INPUT_KEY_NUMPAD_5,
	INPUT_KEY_NUMPAD_6,
	INPUT_KEY_NUMPAD_7,
	INPUT_KEY_NUMPAD_8,
	INPUT_KEY_NUMPAD_9,
	INPUT_KEY_0,
	INPUT_KEY_1,
	INPUT_KEY_2,
	INPUT_KEY_3,
	INPUT_KEY_4,
	INPUT_KEY_5,
	INPUT_KEY_6,
	INPUT_KEY_7,
	INPUT_KEY_8,
	INPUT_KEY_9,
	INPUT_KEY_LEFT_MOUSE_BUTTON,
	INPUT_KEY_RIGHT_MOUSE_BUTTON,
	INPUT_KEY_MIDDLE_MOUSE_BUTTON,
	INPUT_KEY_SIDE_MOUSE_BUTTON_1,
	INPUT_KEY_SIDE_MOUSE_BUTTON_2,
	INPUT_KEY_BACKSPACE,
	INPUT_KEY_TAB,
	INPUT_KEY_ENTER,
	INPUT_KEY_SHIFT,
	INPUT_KEY_CTRL,
	INPUT_KEY_ALT,
	INPUT_KEY_CAPS_LOCK,
	INPUT_KEY_ESCAPE,
	INPUT_KEY_SPACE,
	INPUT_KEY_PAGE_UP,
	INPUT_KEY_PAGE_DOWN,
	INPUT_KEY_DELETE,
	INPUT_KEY_UP_ARROW,
	INPUT_KEY_DOWN_ARROW,
	INPUT_KEY_LEFT_ARROW,
	INPUT_KEY_RIGHT_ARROW,
	INPUT_KEY_F1,
	INPUT_KEY_F2,
	INPUT_KEY_F3,
	INPUT_KEY_F4,
	INPUT_KEY_F5,
	INPUT_KEY_F6,
	INPUT_KEY_F7,
	INPUT_KEY_F8,
	INPUT_KEY_F9,
	INPUT_KEY_F10,
	INPUT_KEY_F11,
	INPUT_KEY_F12,
	INPUT_KEY_A,
	INPUT_KEY_B,
	INPUT_KEY_C,
	INPUT_KEY_D,
	INPUT_KEY_E,
	INPUT_KEY_F,
	INPUT_KEY_G,
	INPUT_KEY_H,
	INPUT_KEY_I,
	INPUT_KEY_J,
	INPUT_KEY_K,
	INPUT_KEY_L,
	INPUT_KEY_M,
	INPUT_KEY_N,
	INPUT_KEY_O,
	INPUT_KEY_P,
	INPUT_KEY_Q,
	INPUT_KEY_R,
	INPUT_KEY_S,
	INPUT_KEY_T,
	INPUT_KEY_U,
	INPUT_KEY_V,
	INPUT_KEY_W,
	INPUT_KEY_X,
	INPUT_KEY_Y,
	INPUT_KEY_Z,
	INPUT_KEY_COUNT
} InputKey;

bool is_input_key_up(InputKey inputKey);
bool is_input_key_down(InputKey inputKey);
bool is_input_key_pressed(InputKey inputKey);
bool is_input_key_released(InputKey inputKey);