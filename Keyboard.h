#pragma once

#include <array>
#include <Windows.h>

class KeyboardInput
{
public:
    void Update() // Update polling
    {
        previous_ = current_;

        for (int key = 0; key < 256; ++key)
            current_[key] = (GetAsyncKeyState(key) & 0x8000) != 0;
    }

    bool IsDown(int key) const // Constantly checks
    {
        return IsValidKey(key) && current_[key];
    }

    bool WasPressed(int key) const // Checks once
    {
        return IsValidKey(key) && current_[key] && !previous_[key];
    }

    bool WasReleased(int key) const // Checks once
    {
        return IsValidKey(key) && !current_[key] && previous_[key];
    }

private:
    static bool IsValidKey(int key) { return key >= 0 && key < 256; }

    std::array<bool, 256> current_{};
    std::array<bool, 256> previous_{};
};

static KeyboardInput g_keyboard;