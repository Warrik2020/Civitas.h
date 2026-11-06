#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Youtuber
{
    class YoutuberSettingsLive : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit YoutuberSettingsLive(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Youtuber", "YoutuberSettingsLive") {}
    public:
        void* mode() const { return ReadField<void*>("mode"); }
        void SetMode(void* value) const { WriteField<void*>("mode", value); }
        void* ring() const { return ReadField<void*>("ring"); }
        void SetRing(void* value) const { WriteField<void*>("ring", value); }
    };
}
