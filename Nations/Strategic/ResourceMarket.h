#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceMarket : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceMarket(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceMarket") {}
    public:
        int MaxUnits(void* it, int k) const { void* args[] = { it, &k }; return CallStaticValue<int>("MaxUnits", args, 2); }
        float BasePerTick(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("BasePerTick", args, 2); }
        float BillPerTick(void* it, void* cfg, int units) const { void* args[] = { it, cfg, &units }; return CallStaticValue<float>("BillPerTick", args, 3); }
        float NextUnitPerTick(void* it, void* cfg, int unitsNow) const { void* args[] = { it, cfg, &unitsNow }; return CallStaticValue<float>("NextUnitPerTick", args, 3); }
        int SetUnits(void* it, int k, int units) const { void* args[] = { it, &k, &units }; return CallStaticValue<int>("SetUnits", args, 3); }
        void RefreshBill(void* it, void* cfg) const { void* args[] = { it, cfg }; CallStatic("RefreshBill", args, 2); }
        void AiImport(void* it, void* cfg) const { void* args[] = { it, cfg }; CallStatic("AiImport", args, 2); }
        int WantedByTemplates(void* it) const { void* args[] = { it }; return CallStaticValue<int>("WantedByTemplates", args, 1); }
        int HorsesPerUnit() const { return ReadStaticField<int>("HorsesPerUnit"); }
        int EnginesPerUnit() const { return ReadStaticField<int>("EnginesPerUnit"); }
        float BaseIncomeShare() const { return ReadStaticField<float>("BaseIncomeShare"); }
        float BaseFloorPerTick() const { return ReadStaticField<float>("BaseFloorPerTick"); }
        float AiBillCeiling() const { return ReadStaticField<float>("AiBillCeiling"); }
    };
}
