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
        void Start(void* demander, void* e, int fromNationId, void* cfg, float ticksPerYear) const { void* args[] = { demander, e, &fromNationId, cfg, &ticksPerYear }; CallStatic("Start", args, 5); }
        float PeopleWorth(void* identity, void* e, void* grid, int ownerId) const { void* args[] = { identity, e, grid, &ownerId }; return CallStaticValue<float>("PeopleWorth", args, 4); }
        void Tick(void* nations, void* getInternals, void* ctx) const { void* args[] = { nations, getInternals, &ctx }; CallStatic("Tick", args, 3); }
    };
}
