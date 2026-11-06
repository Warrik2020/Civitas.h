#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Audio
{
    class CombatSoundBank : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatSoundBank(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Audio", "CombatSoundBank") {}
    public:
        void* FolderOf(int s) const { void* __callArgs[] = { &s }; return CallStatic("FolderOf", __callArgs, 1); }
        void* Clips(int s) const { void* __callArgs[] = { &s }; return CallStatic("Clips", __callArgs, 1); }
        bool Has(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("Has", __callArgs, 1); }
        void* Pick(int s, uint32_t& rng) const { void* __callArgs[] = { &s, &rng }; return CallStatic("Pick", __callArgs, 2); }
        void Reload() const { CallStatic("Reload", nullptr, 0); }
        void* Root() const { return ReadStaticField<void*>("Root"); }
    };
}
