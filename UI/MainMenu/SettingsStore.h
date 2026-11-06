#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class SettingsStore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SettingsStore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "SettingsStore") {}
    public:
        void ResetToDefaults() const { CallStatic("ResetToDefaults", nullptr, 0); }
        void ApplyToWorld() const { CallStatic("ApplyToWorld", nullptr, 0); }
        void ApplyBattleSounds(void* cfg) const { void* args[] = { cfg }; CallStatic("ApplyBattleSounds", args, 1); }
        float DefaultMusicVolume() const { return ReadStaticField<float>("DefaultMusicVolume"); }
        float DefaultUiAudioVolume() const { return ReadStaticField<float>("DefaultUiAudioVolume"); }
        float DefaultWarAudioVolume() const { return ReadStaticField<float>("DefaultWarAudioVolume"); }
    };
}
