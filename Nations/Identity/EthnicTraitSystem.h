#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class EthnicTraitSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EthnicTraitSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "EthnicTraitSystem") {}
    public:
        void* Begin(void* it) const { void* __callArgs[] = { it }; return CallStatic("Begin", __callArgs, 1); }
        void Add(void* f, int foundingNationId, float share, bool minority, bool standingEqual = false, void* group = nullptr) const { void* __callArgs[] = { &f, &foundingNationId, &share, &minority, &standingEqual, group }; CallStatic("Add", __callArgs, 6); }
        bool Commit(void* f, void* it, void* polityCfg) const { void* __callArgs[] = { &f, it, polityCfg }; return CallStaticValue<bool>("Commit", __callArgs, 3); }
        bool Clear(void* it, void* polityCfg) const { void* __callArgs[] = { it, polityCfg }; return CallStaticValue<bool>("Clear", __callArgs, 2); }
        float MinShare() const { return ReadStaticField<float>("MinShare"); }
    };
}
