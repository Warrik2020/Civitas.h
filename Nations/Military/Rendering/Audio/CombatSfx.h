#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Audio
{
    class CombatSfx : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatSfx(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Audio", "CombatSfx") {}
    public:
        bool EmitAt(int s, void* world, float loudness) const { void* args[] = { &s, world, &loudness }; return CallStaticValue<bool>("EmitAt", args, 3); }
        bool Emit(int s, float pan, float volume) const { void* args[] = { &s, &pan, &volume }; return CallStaticValue<bool>("Emit", args, 3); }
        bool Wants(int s) const { void* args[] = { &s }; return CallStaticValue<bool>("Wants", args, 1); }
        bool Has(int s) const { void* args[] = { &s }; return CallStaticValue<bool>("Has", args, 1); }
        void StopAll() const { CallStatic("StopAll", nullptr, 0); }
        float MasterVolume() const { return ReadStaticField<float>("MasterVolume"); }
        void SetMasterVolume(float value) const { WriteStaticField<float>("MasterVolume", value); }
    };
}
