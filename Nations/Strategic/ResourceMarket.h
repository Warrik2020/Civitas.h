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
        int MaxUnits(void* it, int k) const { void* __callArgs[] = { it, &k }; return CallStaticValue<int>("MaxUnits", __callArgs, 2); }
        float BasePerTick(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("BasePerTick", __callArgs, 2); }
        float BillPerTick(void* it, void* cfg, int units) const { void* __callArgs[] = { it, cfg, &units }; return CallStaticValue<float>("BillPerTick", __callArgs, 3); }
        float NextUnitPerTick(void* it, void* cfg, int unitsNow) const { void* __callArgs[] = { it, cfg, &unitsNow }; return CallStaticValue<float>("NextUnitPerTick", __callArgs, 3); }
        int SetUnits(void* it, int k, int units) const { void* __callArgs[] = { it, &k, &units }; return CallStaticValue<int>("SetUnits", __callArgs, 3); }
        void RefreshBill(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; CallStatic("RefreshBill", __callArgs, 2); }
        void AiImport(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; CallStatic("AiImport", __callArgs, 2); }
        int WantedByTemplates(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("WantedByTemplates", __callArgs, 1); }
        int HorsesPerUnit() const { return ReadStaticField<int>("HorsesPerUnit"); }
        int EnginesPerUnit() const { return ReadStaticField<int>("EnginesPerUnit"); }
        float BaseIncomeShare() const { return ReadStaticField<float>("BaseIncomeShare"); }
        float BaseFloorPerTick() const { return ReadStaticField<float>("BaseFloorPerTick"); }
        float AiBillCeiling() const { return ReadStaticField<float>("AiBillCeiling"); }
    };
}
