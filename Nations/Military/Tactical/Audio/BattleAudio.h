#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Audio
{
    class BattleAudio : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleAudio(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Audio", "BattleAudio") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Update(void* battle, float dt) const { void* args[] = { battle, &dt }; Call("Update", args, 2); }
        float MasterVolume() const { return ReadStaticField<float>("MasterVolume"); }
        void SetMasterVolume(float value) const { WriteStaticField<float>("MasterVolume", value); }
    };
}
