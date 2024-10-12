// Copyright 2021 JasonRen(biu)
// Copyright 2022 Drashna Jael're (@Drashna Jael're)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │      │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │   │ 6 │ 7 │ 8 │ 9 │ 0 │      │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ q │ w │ e │ r │ t │   │                     │   │ y │ u │ i │ o │ p │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Escape│ a │ s │ d │ f │ g ├───┤                     ├───┤ h │ j │ k │ l │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤ C │                     │ C ├───┼───┼───┼───┼───┼──────┤
     * │Shift │C|z│ x │ c │ v │ b │ A │                     │ A │ n │ m │ , │ . │C|/│ Shift│
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │   │   │   │ G │ A │         │DEL│   │ │   │CAP│         │ A │ G │   │   │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │  B│   │ │   │  E│   │
     *                              │1| │2|S├───┤ ├───┤2|N│1| │
     *                              │   │  P│   │ │   │  T│   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT_ergodox_pretty(
        KC_NO,   KC_1,  KC_2,     KC_3,    KC_4,    KC_5,    KC_NO,              KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
        KC_TAB,  KC_Q,  KC_W,     KC_E,    KC_R,    KC_T,    KC_NO,              KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_ESC,  KC_A,  KC_S,     KC_D,    KC_F,    KC_G,                                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
KC_LSFT,MT(MOD_LCTL,KC_Z),KC_X,KC_C,KC_V,KC_B,MT(MOD_LALT|MOD_LGUI,KC_NO),MT(MOD_LALT|MOD_LGUI,KC_NO),KC_N,KC_M,KC_COMM,KC_DOT,MT(MOD_LCTL,KC_SLSH),KC_RSFT,
        KC_NO,   KC_NO, KC_NO,    KC_LGUI, KC_LALT,                                                KC_LALT, KC_LGUI, KC_NO,   KC_NO,   KC_NO,
                                                     KC_DEL, KC_NO,              KC_NO,  KC_CAPS,
                                                             KC_NO,              KC_NO,
                                LT(1,KC_SPC), LT(2,KC_BSPC), KC_NO,              KC_NO,  LT(2,KC_ENT), LT(1,KC_SPC)
    ),
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │      │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │   │ 6 │ 7 │ 8 │ 9 │ 0 │      │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ `    │ ! │ @ │ # │ $ │ % │   │                     │   │ ^ │ & │ * │ ( │ ) │    | │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ ~    │   │   │ [ │ ] │   ├───┤                     ├───┤   │ { │ } │   │ : │    " │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ \/   │\/ │   │   │ - │ + │   │                     │   │ _ │ = │ < │ > │ ? │   \/ │
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │   │   │   │\/ │\/ │         │\/ │RMD│ │RTG│ \/│         │ \/│ \/│   │   │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │RB+│ │RH+│   │   │
     *                              │\/ │\/ ├───┤ ├───┤ \/│ \/│
     *                              │   │   │RB-│ │RH-│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [1] = LAYOUT_ergodox_pretty(
        KC_NO,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,       KC_NO, KC_6,       KC_7,       KC_8,       KC_9,      KC_0,       KC_NO,
        KC_GRV,    S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_NO,       KC_NO, S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),   S(KC_0),    S(KC_BSLS),
        S(KC_GRV), KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_NO,                       KC_NO,      S(KC_LBRC), S(KC_RBRC), KC_NO,     S(KC_SCLN), S(KC_QUOT),
        KC_TRNS,   KC_TRNS, KC_NO,   KC_NO,   KC_MINS, KC_PPLS, KC_NO,       KC_NO, S(KC_MINS), KC_EQUAL,   S(KC_COMM), S(KC_DOT), S(KC_SLSH), KC_TRNS,
        KC_NO,     KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS,       KC_NO,     KC_NO,      KC_NO,
                                                       KC_TRNS, RGB_MOD,     RGB_TOG, KC_TRNS,
                                                                RGB_VAI,     RGB_HUI,
                                              KC_TRNS, KC_TRNS, RGB_VAD,     RGB_HUD, KC_TRNS, KC_TRNS
    ),
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │      │   │   │   │   │   │   │                     │   │   │   │   │   │   │      │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │      │F1 │F2 │F3 │F4 │F5 │   │                     │   │F6 │F7 │F8 │F9 │F10│      │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │      │   │   │F11│F12│   ├───┤                     ├───┤LFT│DWN│UP │RGT│   │      │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ \/   │\/ │   │   │   │   │   │                     │   │Hom│PDn│PUp│End│ \/│   \/ │
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │   │   │   │\/ │\/ │         │   │   │ │   │   │         │ \/│ \/│   │   │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │   │ │   │   │   │
     *                              │   │   ├───┤ ├───┤   │   │
     *                              │   │   │   │ │   │   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [2] = LAYOUT_ergodox_pretty(
        KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,       KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_F1,   KC_F2, KC_F3,   KC_F4,   KC_F5, KC_NO,       KC_NO, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
        KC_NO,   KC_NO,   KC_NO, KC_F11,  KC_F12,  KC_NO,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO,
        KC_TRNS, KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,       KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO, KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,
                                                   KC_NO, KC_NO,       KC_NO, KC_NO,
                                                          KC_NO,       KC_NO,
                                            KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO
    )
};
