#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AnnexationRequestSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AnnexationRequestSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AnnexationRequestSystem") {}
    public:
        bool Validate(int askerId, int targetId, void* mgr, void* ctx) const { void* args[] = { &askerId, &targetId, mgr, &ctx }; return CallStaticValue<bool>("Validate", args, 4); }
        float AcceptanceChance(int askerId, int targetId, void* mgr, void* ctx) const { void* args[] = { &askerId, &targetId, mgr, &ctx }; return CallStaticValue<float>("AcceptanceChance", args, 4); }
        void Execute(int askerId, int targetId, void* mgr, void* ctx) const { void* args[] = { &askerId, &targetId, mgr, &ctx }; CallStatic("Execute", args, 4); }
        float MinAcceptance() const { return ReadStaticField<float>("MinAcceptance"); }
    };
}
