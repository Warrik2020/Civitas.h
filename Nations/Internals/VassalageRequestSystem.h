#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class VassalageRequestSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VassalageRequestSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "VassalageRequestSystem") {}
    public:
        bool Validate(int askerId, int targetId, void* mgr, void* ctx) const { void* __callArgs[] = { &askerId, &targetId, mgr, &ctx }; return CallStaticValue<bool>("Validate", __callArgs, 4); }
        float AcceptanceChance(int askerId, int targetId, void* mgr, void* ctx) const { void* __callArgs[] = { &askerId, &targetId, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", __callArgs, 4); }
        void Execute(int askerId, int targetId, void* mgr) const { void* __callArgs[] = { &askerId, &targetId, mgr }; CallStatic("Execute", __callArgs, 3); }
        float MinAcceptance() const { return ReadStaticField<float>("MinAcceptance"); }
    };
}
