#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalWarGates : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalWarGates(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalWarGates") {}
    public:
        int Check(void* n, void* it, void* rel, int other, void* ctx, float coPower, float coArmy) const { void* args[] = { n, it, rel, &other, &ctx, &coPower, &coArmy }; return CallStaticValue<int>("Check", args, 7); }
    };
}
