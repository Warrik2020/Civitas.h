#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleFormations : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleFormations(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleFormations") {}
    public:
        int LineRanks(int arm, void* doc) const { void* __callArgs[] = { &arm, &doc }; return CallStaticValue<int>("LineRanks", __callArgs, 2); }
        float Spacing(int arm) const { void* __callArgs[] = { &arm }; return CallStaticValue<float>("Spacing", __callArgs, 1); }
        void* Layout(int f, int arm, void* doc, int n, int forcedFiles, void* slots, void* ranks) const { void* __callArgs[] = { &f, &arm, &doc, &n, &forcedFiles, slots, ranks }; return CallStatic("Layout", __callArgs, 7); }
        void* Battery(int guns, int crewPerGun, void* slots, void* ranks) const { void* __callArgs[] = { &guns, &crewPerGun, slots, ranks }; return CallStatic("Battery", __callArgs, 4); }
    };
}
