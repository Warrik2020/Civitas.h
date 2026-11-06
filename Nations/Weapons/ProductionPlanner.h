#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ProductionPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProductionPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ProductionPlanner") {}
    public:
        void Evaluate(void* it, void* cfg, bool force = false) const { void* args[] = { it, cfg, &force }; CallStatic("Evaluate", args, 3); }
        int IntervalTicks() const { return ReadStaticField<int>("IntervalTicks"); }
        float HorizonTicks() const { return ReadStaticField<float>("HorizonTicks"); }
        int designId() const { return ReadField<int>("designId"); }
        void SetDesignId(int value) const { WriteField<int>("designId", value); }
        int pool() const { return ReadField<int>("pool"); }
        void SetPool(int value) const { WriteField<int>("pool", value); }
        float perDivision() const { return ReadField<float>("perDivision"); }
        void SetPerDivision(float value) const { WriteField<float>("perDivision", value); }
        float perSlot() const { return ReadField<float>("perSlot"); }
        void SetPerSlot(float value) const { WriteField<float>("perSlot", value); }
        float stock() const { return ReadField<float>("stock"); }
        void SetStock(float value) const { WriteField<float>("stock", value); }
        int alloc() const { return ReadField<int>("alloc"); }
        void SetAlloc(int value) const { WriteField<int>("alloc", value); }
    };
}
