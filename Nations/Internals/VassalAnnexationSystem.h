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
        bool Validate(int overlordId, int vassalId, void* mgr, void* ctx) const { void* args[] = { &overlordId, &vassalId, mgr, &ctx }; return CallStaticValue<bool>("Validate", args, 4); }
        float AcceptanceChance(int overlordId, int vassalId, void* mgr, void* ctx) const { void* args[] = { &overlordId, &vassalId, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", args, 4); }
        void Execute(int overlordId, int vassalId, void* mgr) const { void* args[] = { &overlordId, &vassalId, mgr }; CallStatic("Execute", args, 3); }
    };
}
