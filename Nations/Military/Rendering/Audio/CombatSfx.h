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
        bool EmitAt(int s, void* world, float loudness) const { void* __callArgs[] = { &s, world, &loudness }; return CallStaticValue<bool>("EmitAt", __callArgs, 3); }
        bool Emit(int s, float pan, float volume) const { void* __callArgs[] = { &s, &pan, &volume }; return CallStaticValue<bool>("Emit", __callArgs, 3); }
        bool Wants(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("Wants", __callArgs, 1); }
        bool Has(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("Has", __callArgs, 1); }
        void StopAll() const { CallStatic("StopAll", nullptr, 0); }
        float MasterVolume() const { return ReadStaticField<float>("MasterVolume"); }
        void MasterVolume(float value) const { WriteStaticField<float>("MasterVolume", value); }
    };
}
