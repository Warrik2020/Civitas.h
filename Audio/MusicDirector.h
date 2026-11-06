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
        void Update(float now, bool audible, float volume) const { void* args[] = { &now, &audible, &volume }; Call("Update", args, 3); }
        float MasterVolume() const { return ReadField<float>("MasterVolume"); }
        void SetMasterVolume(float value) const { WriteField<float>("MasterVolume", value); }
        void* File() const { return ReadField<void*>("File"); }
        float Trim() const { return ReadField<float>("Trim"); }
    };
}
