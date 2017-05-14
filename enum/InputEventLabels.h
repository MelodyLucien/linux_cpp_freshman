/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LIBINPUT_INPUT_EVENT_LABELS_H
#define _LIBINPUT_INPUT_EVENT_LABELS_H

#include "keycodes.h"


typedef int int32_t;

#undef NULL
#define NULL ""

#define DEFINE_KEYCODE(key) { #key, AKEYCODE_##key }


template<typename T, size_t N>
size_t size(T (&)[N]) { return N; }

struct InputEventLabel {
    const char *literal;
    int value;
};


static const InputEventLabel KEYCODES[] = {
    // NOTE: If you add a new keycode here you must also add it to several other files.
    //       Refer to frameworks/base/core/java/android/view/KeyEvent.java for the full list.

    DEFINE_KEYCODE(0),
    DEFINE_KEYCODE(1),
    DEFINE_KEYCODE(2),
    DEFINE_KEYCODE(3),
    DEFINE_KEYCODE(4),
    DEFINE_KEYCODE(5),
    DEFINE_KEYCODE(6),
    DEFINE_KEYCODE(7),
    DEFINE_KEYCODE(8),
    DEFINE_KEYCODE(9),
    DEFINE_KEYCODE(11),
    DEFINE_KEYCODE(12),
    DEFINE_KEYCODE(SOFT_RIGHT),
    { NULL, 0 }
};


static int lookupValueByLabel(const char* literal, const InputEventLabel *list) {
    while (list->literal) {
        if (strcmp(literal, list->literal) == 0) {
            return list->value;
        }
        list++;
    }
    return list->value;
}

static const char* lookupLabelByValue(int value, const InputEventLabel* list) {
    while (list->literal) {
        if (list->value == value) {
            return list->literal;
        }
        list++;
    }
    return NULL;
}

static int32_t getKeyCodeByLabel(const char* label) {
    return int32_t(lookupValueByLabel(label, KEYCODES));
}

static const char* getLabelByKeyCode(int32_t keyCode) {
    if (keyCode >= 0 && keyCode < size(KEYCODES)) {
        return KEYCODES[keyCode].literal;
    }
    return NULL;
}

#endif // _LIBINPUT_INPUT_EVENT_LABELS_H
