// Copyright 2021 JasonRen(biu)
// Copyright 2022 Drashna Jael're (@Drashna Jael're)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// home row mods
// layer 0
#define HMT_CA MT(MOD_LCTL, KC_A)
#define HMT_SS MT(MOD_LSFT, KC_S)
#define HMT_GD MT(MOD_LGUI, KC_D)
#define HMT_AF MT(MOD_LALT, KC_F)
#define HMT_AJ MT(MOD_LALT, KC_J)
#define HMT_GK MT(MOD_LGUI, KC_K)
#define HMT_SL MT(MOD_LSFT, KC_L)
#define HMT_CS MT(MOD_LCTL, KC_SCLN)
// layer 1
#define HMT_CNO MT(MOD_LCTL, KC_NO)
#define HMT_SNO MT(MOD_LSFT, KC_NO)
#define HMT_GLB MT(MOD_LGUI, KC_LBRC)
#define HMT_ARB MT(MOD_LALT, KC_RBRC)
#define HMT_ALC MT(MOD_LALT, S(KC_LBRC))
#define HMT_GRC MT(MOD_LGUI, S(KC_RBRC))
#define HMT_CCL MT(MOD_LCTL, S(KC_SCLN))
// layer 2
#define HMT_GF11 MT(MOD_LGUI, KC_F11)
#define HMT_AF12 MT(MOD_LALT, KC_F12)
#define HMT_ADWN MT(MOD_LALT, KC_DOWN)
#define HMT_GUP  MT(MOD_LGUI, KC_UP)
#define HMT_SRGT MT(MOD_LSFT, KC_RGHT)

// combined modifiers
#define MMOD_GA MT(MOD_LALT | MOD_LGUI, KC_NO)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │      │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │   │ 6 │ 7 │ 8 │ 9 │ 0 │      │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ q │ w │ e │ r │ t │   │                     │   │ y │ u │ i │ o │ p │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Escape│ a │ s │ d │ f │ g ├───┤                     ├───┤ h │ j │ k │ l │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤ G │                     │ G ├───┼───┼───┼───┼───┼──────┤
     * │Shift │ z │ x │ c │ v │ b │ A │                     │ A │ n │ m │ , │ . │ / │ Shift│
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
        KC_ESC,  HMT_CA,HMT_SS,   HMT_GD,  HMT_AF,  KC_G,                                 KC_H,    HMT_AJ,  HMT_GK,  HMT_SL,  HMT_CS,  KC_QUOT,
        KC_LSFT, KC_Z,  KC_X,     KC_C,    KC_V,    KC_B,    MMOD_GA,            MMOD_GA, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_NO,   KC_NO, KC_NO,    KC_LGUI, KC_LALT,                                                KC_LALT, KC_LGUI, KC_NO,   KC_NO,   KC_NO,
                                                    KC_DEL,  KC_NO,              KC_NO,   KC_CAPS,
                                                             KC_NO,              KC_NO,
                                LT(1,KC_SPC), LT(2,KC_BSPC), KC_NO,              KC_NO,   LT(2,KC_ENT), LT(1,KC_SPC)
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
        KC_NO,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,       KC_NO, KC_6,       KC_7,     KC_8,       KC_9,      KC_0,       KC_NO,
        KC_GRV,    S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_NO,       KC_NO, S(KC_6),    S(KC_7),  S(KC_8),    S(KC_9),   S(KC_0),    S(KC_BSLS),
        S(KC_GRV), HMT_CNO, HMT_SNO, HMT_GLB, HMT_ARB, KC_NO,                       KC_NO,      HMT_ALC,  HMT_GRC,    HMT_SNO,   HMT_CCL,    S(KC_QUOT),
        KC_TRNS,   KC_TRNS, KC_NO,   KC_NO,   KC_MINS, KC_PPLS, KC_NO,       KC_NO, S(KC_MINS), KC_EQUAL, S(KC_COMM), S(KC_DOT), S(KC_SLSH), KC_TRNS,
        KC_NO,     KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,                                          KC_TRNS,  KC_TRNS,    KC_NO,     KC_NO,      KC_NO,
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
        KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO, KC_NO,       KC_NO, KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5, KC_NO,       KC_NO, KC_F6,   KC_F7,    KC_F8,   KC_F9,    KC_F10,  KC_NO,
        KC_NO,   HMT_CNO, HMT_SNO, HMT_GF11, HMT_AF12, KC_NO,                     KC_LEFT, HMT_ADWN, HMT_GUP, HMT_SRGT, HMT_CNO, KC_NO,
        KC_TRNS, KC_TRNS, KC_NO,   KC_NO,    KC_NO,    KC_NO, KC_NO,       KC_NO, KC_HOME, KC_PGDN,  KC_PGUP, KC_END,   KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO,   KC_TRNS,  KC_TRNS,                                      KC_TRNS,  KC_TRNS, KC_NO,    KC_NO,   KC_NO,
                                                       KC_NO, KC_NO,       KC_NO, KC_NO,
                                                              KC_NO,       KC_NO,
                                                KC_NO, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO
    )
};
