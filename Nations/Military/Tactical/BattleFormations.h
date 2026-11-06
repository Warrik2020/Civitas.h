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
        int LineRanks(int arm, void* doc) const { void* args[] = { &arm, &doc }; return CallStaticValue<int>("LineRanks", args, 2); }
        float Spacing(int arm) const { void* args[] = { &arm }; return CallStaticValue<float>("Spacing", args, 1); }
        void* Layout(int f, int arm, void* doc, int n, int forcedFiles, void* slots, void* ranks) const { void* args[] = { &f, &arm, &doc, &n, &forcedFiles, slots, ranks }; return CallStatic("Layout", args, 7); }
        void* Battery(int guns, int crewPerGun, void* slots, void* ranks) const { void* args[] = { &guns, &crewPerGun, slots, ranks }; return CallStatic("Battery", args, 4); }
        int files() const { return ReadField<int>("files"); }
        void SetFiles(int value) const { WriteField<int>("files", value); }
        int ranks() const { return ReadField<int>("ranks"); }
        void SetRanks(int value) const { WriteField<int>("ranks", value); }
        float halfWidth() const { return ReadField<float>("halfWidth"); }
        void SetHalfWidth(float value) const { WriteField<float>("halfWidth", value); }
        float depth() const { return ReadField<float>("depth"); }
        void SetDepth(float value) const { WriteField<float>("depth", value); }
    };
}
