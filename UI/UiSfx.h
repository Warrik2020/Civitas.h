#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiSfx : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiSfx(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiSfx") {}
    public:
        void SetMasterVolume(float v) const { void* __callArgs[] = { &v }; CallStatic("SetMasterVolume", __callArgs, 1); }
        void PlayHover(void* pointer) const { void* __callArgs[] = { pointer }; CallStatic("PlayHover", __callArgs, 1); }
        void PlaySelect() const { CallStatic("PlaySelect", nullptr, 0); }
        void PlayNotice() const { CallStatic("PlayNotice", nullptr, 0); }
        void PlayPreview() const { CallStatic("PlayPreview", nullptr, 0); }
    };
}
