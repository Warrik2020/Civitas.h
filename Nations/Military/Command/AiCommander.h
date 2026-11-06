#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class AiCommander : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AiCommander(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "AiCommander") {}
    public:
        bool On(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("On", __callArgs, 1); }
        void Forget(int nationId) const { void* __callArgs[] = { &nationId }; Call("Forget", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void SlotsOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; Call("SlotsOf", __callArgs, 2); }
        void SectorsOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; Call("SectorsOf", __callArgs, 2); }
        void ThrustsOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; Call("ThrustsOf", __callArgs, 2); }
        void* LandsOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("LandsOf", __callArgs, 1); }
        void Plan(void* mil, void* n, void* ctx) const { void* __callArgs[] = { mil, n, ctx }; Call("Plan", __callArgs, 3); }
        bool PlanPart(int part, void* mil, void* n, void* ctx) const { void* __callArgs[] = { &part, mil, n, ctx }; return CallValue<bool>("PlanPart", __callArgs, 4); }
        void React(void* mil, void* n, void* ctx) const { void* __callArgs[] = { mil, n, ctx }; Call("React", __callArgs, 3); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int LabelTagBase() const { return ReadStaticField<int>("LabelTagBase"); }
        int ThrustTagBase() const { return ReadStaticField<int>("ThrustTagBase"); }
        bool KeepViews() const { return ReadStaticField<bool>("KeepViews"); }
        void KeepViews(bool value) const { WriteStaticField<bool>("KeepViews", value); }
        int MinPlanTicks() const { return ReadStaticField<int>("MinPlanTicks"); }
        void MinPlanTicks(int value) const { WriteStaticField<int>("MinPlanTicks", value); }
        int PlanParts() const { return ReadStaticField<int>("PlanParts"); }
    };
}
