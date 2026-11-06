#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class VassalAnnexationSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VassalAnnexationSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "VassalAnnexationSystem") {}
    public:
        bool Validate(int overlordId, int vassalId, void* mgr, void* ctx) const { void* __callArgs[] = { &overlordId, &vassalId, mgr, &ctx }; return CallStaticValue<bool>("Validate", __callArgs, 4); }
        float AcceptanceChance(int overlordId, int vassalId, void* mgr, void* ctx) const { void* __callArgs[] = { &overlordId, &vassalId, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", __callArgs, 4); }
        void Execute(int overlordId, int vassalId, void* mgr) const { void* __callArgs[] = { &overlordId, &vassalId, mgr }; CallStatic("Execute", __callArgs, 3); }
    };
}
