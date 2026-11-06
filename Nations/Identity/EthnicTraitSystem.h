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
        void* Begin(void* it) const { void* args[] = { it }; return CallStatic("Begin", args, 1); }
        void Add(void* f, int foundingNationId, float share, bool minority, bool standingEqual = false, void* group = nullptr) const { void* args[] = { &f, &foundingNationId, &share, &minority, &standingEqual, group }; CallStatic("Add", args, 6); }
        bool Commit(void* f, void* it, void* polityCfg) const { void* args[] = { &f, it, polityCfg }; return CallStaticValue<bool>("Commit", args, 3); }
        bool Clear(void* it, void* polityCfg) const { void* args[] = { it, polityCfg }; return CallStaticValue<bool>("Clear", args, 2); }
        float MinShare() const { return ReadStaticField<float>("MinShare"); }
    };
}
