#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class ArmyOrganizer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyOrganizer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "ArmyOrganizer") {}
    public:
        void Reset() const { Call("Reset", nullptr, 0); }
        void Keep(void* store, void* mil, void* grid, int tick, void* divisionById) const { void* args[] = { store, mil, grid, &tick, divisionById }; Call("Keep", args, 5); }
        void Organize(void* store, int nationId, void* ids, void* grid, void* divisionById) const { void* args[] = { store, &nationId, ids, grid, divisionById }; Call("Organize", args, 5); }
        int ArmySize() const { return ReadStaticField<int>("ArmySize"); }
        int MaxArmy() const { return ReadStaticField<int>("MaxArmy"); }
        int NewArmyAt() const { return ReadStaticField<int>("NewArmyAt"); }
        int GatherTicks() const { return ReadStaticField<int>("GatherTicks"); }
        int EveryTicks() const { return ReadStaticField<int>("EveryTicks"); }
    };
}
