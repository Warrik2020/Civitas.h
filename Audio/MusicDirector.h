#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Audio
{
    class MusicDirector : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MusicDirector(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Audio", "MusicDirector") {}
    public:
        float MasterVolume() const { return ReadField<float>("MasterVolume"); }
        void MasterVolume(float value) const { WriteField<float>("MasterVolume", value); }
    };
}
