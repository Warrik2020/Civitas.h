#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class TreatyExpulsionSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TreatyExpulsionSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "TreatyExpulsionSystem") {}
    public:
        void Start(void* demander, void* e, int fromNationId, void* cfg, float ticksPerYear) const { void* __callArgs[] = { demander, e, &fromNationId, cfg, &ticksPerYear }; CallStatic("Start", __callArgs, 5); }
        float PeopleWorth(void* identity, void* e, void* grid, int ownerId) const { void* __callArgs[] = { identity, e, grid, &ownerId }; return CallStaticValue<float>("PeopleWorth", __callArgs, 4); }
        void Tick(void* nations, void* getInternals, void* ctx) const { void* __callArgs[] = { nations, getInternals, &ctx }; CallStatic("Tick", __callArgs, 3); }
    };
}
