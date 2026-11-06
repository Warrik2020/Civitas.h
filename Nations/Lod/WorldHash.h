#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class WorldHash : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldHash(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "WorldHash") {}
    public:
        uint64_t MixObject(uint64_t h, void* o) const { void* args[] = { &h, o }; return CallStaticValue<uint64_t>("MixObject", args, 2); }
        void* Compute(void* nm) const { void* args[] = { nm }; return CallStatic("Compute", args, 1); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        uint64_t hash() const { return ReadField<uint64_t>("hash"); }
        void SetHash(uint64_t value) const { WriteField<uint64_t>("hash", value); }
    };
}
